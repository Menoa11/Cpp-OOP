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

void batting::hitOrMiss(bool hit) {
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
    
    // Clear any remaining characters in the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    // Wait for Enter key press
    static bool swingComplete = false;
    while (!swingComplete) {
        if (cin.peek() == '\n') {  
            cin.get();  // Consume the newline character
            swingComplete = true;
        }
    }

    t.stop();

    long double reactionTime = t.getElapsedTime(); 

    bool hit = reactionTime <= getDifficulty();

    hitOrMiss(hit); 

    cout << "Your reaction time was " << reactionTime << " seconds." << endl;

    return hit;
}
