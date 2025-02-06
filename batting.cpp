#include <iostream>
#include "components.h"
#include <thread>   
#include <chrono>
#include <string>
#include <cstdlib>


void batting::countdown() {
    print("Get ready to bat!");
    for (int i = 3; i > 0; --i) {
        std::cout << i << "..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void batting::hitOrMiss(bool hit) {
    if (hit) {
        print("It's a hit! You earn 10 points.");
        addScore(10); 
    } else {
        print("You missed!");
    }
}

bool batting::pitchBall() {
    countdown(); 

    srand(time(0)); 
    int randomDelay = 1 + rand() % 5; 
    std::this_thread::sleep_for(std::chrono::seconds(randomDelay));

    print("The pitcher throws the ball!");
    print("Press Enter to swing as quickly as possible!");

    timer t;
    t.start();
    
    // Clear any remaining characters in the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    // Wait for Enter key press
    static bool swingComplete = false;
    while (!swingComplete) {
        if (std::cin.peek() == '\n') {  
            std::cin.get();  // Consume the newline character
            swingComplete = true;
        }
    }

    t.stop();

    long double reactionTime = t.getElapsedTime(); 

    bool hit = reactionTime <= getDifficulty();

    hitOrMiss(hit); 

    std::cout << "Your reaction time was " << reactionTime << " seconds." << std::endl;

    return hit;
}
