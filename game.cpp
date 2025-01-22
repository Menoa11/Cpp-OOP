#include <iostream>
#include "components.h"
#include <string>
using namespace std;


double game::difficulty = 0.0;

void game::startGame() {
    cout << "Welcome to the Reaction Time Baseball Game!" << endl;
    cout << "What's your player's name?" << endl;

    string playerName;
    getline(cin, playerName);

    batting player1;
    player1.setName(playerName);

    cout << "Hello, " << playerName << "! You are up to bat." << endl;

    displayInstructions();

    double chosenDifficulty;
    cout << "Choose a difficulty level (Reaction time between 0.1-1.0 seconds): ";
    cin >> chosenDifficulty;
    setDifficulty(chosenDifficulty);
    

    cout << "Get ready for the first pitch!" << endl;


    for (int i = 0; i < 5; i++){ 
        string userinput;
        player1.pitchBall();
        cout << "Are you ready for the next pitch? (y/n)" << endl;
        cin >> userinput;
        if (userinput == "n"){
            break;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clears the input buffer
    }
}

void game::endGame() {
    cout << "Thank you for playing the Reaction Time Baseball Game!" << endl;
    cout << "See you next time!" << endl;
}

void game::displayInstructions() {
    cout << "\nInstructions:" << endl;
    cout << "1. Get ready when the countdown starts." << endl;
    cout << "2. Swing as soon as you see the pitch!" << endl;
    cout << "3. The faster you react, the more points you earn." << endl;
    cout << "4. Try to beat your friends' scores!" << endl;
    cout << "Good luck!\n" << endl;
}

void game::setDifficulty(double level) {
    if (level > 1.0) {
        cout << "Invalid difficulty level. Setting to Easy 0.5s by default." << endl;
        difficulty = 0.5;
    } else {
        difficulty = level;
    }
}

double game::getDifficulty(){
    return difficulty;
}