#include <iostream>
#include "components.h"
#include <string>


double game::difficulty = 0.0;

void game::startGame() {
    print("Welcome to the Reaction Time Baseball Game!");
    print("What's your player's name?");

    std::string playerName;
    std::getline(std::cin, playerName);

    batting player1;
    player1.setName(playerName);

    std::cout << "Hello, " << playerName << "! You are up to bat." << std::endl;

    displayInstructions();

    double chosenDifficulty;
    print("Choose a difficulty level (Reaction time between 0.1-1.0 seconds): ");
    std::cin >> chosenDifficulty;
    setDifficulty(chosenDifficulty);
    

    print("Get ready for the first pitch!");


    for (int i = 0; i < 5; i++){ 
        std::string userinput;
        player1.pitchBall();
        print("Are you ready for the next pitch? (y/n)");
        std::cin >> userinput;
        if (userinput == "n"){
            break;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Clears the input buffer
    }
}

void game::endGame() {
    print("Thank you for playing the Reaction Time Baseball Game!");
    print("See you next time!");
}

void game::displayInstructions() {
    print("\nInstructions:");
    print("1. Get ready when the countdown starts.");
    print("2. Swing as soon as you see the pitch!" );
    print("3. The faster you react, the more points you earn.");
    print("4. Try to beat your friends' scores!");
    print("Good luck!\n");
}

void game::setDifficulty(double level) {
    if (level > 1.0) {
        print("Invalid difficulty level. Setting to Easy 0.5s by default.");
        difficulty = 0.5;
    } else {
        difficulty = level;
    }
}

double game::getDifficulty(){
    return difficulty;
}