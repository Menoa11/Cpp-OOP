#include <iostream>
#include "components.h"
#include <string>
using namespace std;

string name;

void game::startGame(){
    cout << "What's your players name?" <<endl;
    getline(cin, name);
    cout << name << ", you are up to bat" <<endl;
    player player1;
    player1.setName(name);

}


void game::endGame(){
    cout << "end game" <<endl;

}