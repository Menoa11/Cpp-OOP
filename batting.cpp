#include <iostream>
#include "components.h"
#include <thread>   
#include <chrono>
#include <string>
#include <cstdlib>
using namespace std;


void batting::countdown() {
    cout << "Get ready to bat!" << endl;
    for (int i = 3; i > 0; --i) {
        cout << i << "..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void batting::hitOrMiss(long double hit) {
    if (hit) {
        cout << "It's a hit! You earn 10 points." << endl;
        addScore(10); 
    } else {
        cout << "You missed!" << endl;
    }
}

bool batting::pitchBall() {
    countdown(); 

    srand(time(0)); 
    int randomDelay = 1 + rand() % 5; 
    this_thread::sleep_for(chrono::seconds(randomDelay));

    cout << "The pitcher throws the ball!" << endl;
    cout << "Press Enter to swing as quickly as possible!" << endl;

    timer t;
    t.start();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    //Needed to be implemented to ensure the input buffer wasnt messing with the reaction time
    bool swingComplete = false;
    while (!swingComplete) {
        if (cin.peek() == '\n') {  
            cin.get();  
            t.stop(); 
            swingComplete = true;
        }
    }

    long double reactionTime = t.getElapsedTime(); 

    //need to add difficulty variations to this portion such as 0.25,0.5 and 0.75

    double threshold = 0.75; 

    bool hit = reactionTime <= threshold;
    hitOrMiss(hit); 

    cout << "Your reaction time was " << reactionTime << " seconds." << endl;
    return hit;
}