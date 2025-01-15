#include <iostream>
#include "components.h"
#include <thread>   
#include <chrono>
#include <string>
#include <cstdlib>
using namespace std;


void batting::countdown(){
    cout << "Get ready to bat!" << endl;
    for (int i = 3; i > 0; --i) {
        cout << i << "..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void batting::hitOrMiss() {
    int randomChance = rand() % 100; 
    if (randomChance < 50) { 
        cout << "It's a hit!" << endl;
    } else {
        cout << "You missed!" << endl;
    }
}

bool batting::pitchBall() {
    countdown(); 

    cout << "The pitcher throws the ball!" << endl;
    cout << "Press Enter to swing as quickly as possible!" << endl;

    timer t;
    t.start(); 
    cin.ignore(); 
    t.stop();

    long double reactionTime = t.getElapsedTime();

    double threshold = 0.5; 

    if (reactionTime <= threshold) {
        cout << "Great swing! Your reaction time was " << reactionTime << " seconds." << endl;
        hitOrMiss(); 
        return true;  
    } else {
        cout << "Too slow! Your reaction time was " << reactionTime << " seconds." << endl;
        return false; 
    }
}