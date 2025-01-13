#include <iostream>
#include "components.h"
#include <string>
using namespace std;

void game::startGame() {
    cout << "Welcome to the Reaction Time Baseball Game!" << endl;
    cout << "What's your player's name?" << endl;

    string playerName;
    getline(cin, playerName);

    player player1;
    player1.setName(playerName);

    cout << "Hello, " << playerName << "! You are up to bat." << endl;

    displayInstructions();

    int chosenDifficulty;
    cout << "Choose a difficulty level (1 = Easy, 2 = Medium, 3 = Hard): ";
    cin >> chosenDifficulty;
    setDifficulty(chosenDifficulty);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Get ready for the first pitch!" << endl;

    batting batterUp;

    for (int i = 0; i < 5; i++){
        //countdown
        //print number 0-9 after random time between 0-5s
        //calculate time after displayed number was touched
        //say score and then add score to total
        //next pitch
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

void game::setDifficulty(int level) {
    if (level < 1 || level > 3) {
        cout << "Invalid difficulty level. Setting to Easy (1) by default." << endl;
        difficulty = 1;
    } else {
        difficulty = level;
    }
    cout << "Difficulty set to " << (difficulty == 1 ? "Easy" : difficulty == 2 ? "Medium" : "Hard") << "." << endl;
}