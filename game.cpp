#include <iostream>
#include "components.h"
#include <string>
using namespace std;

string name;

void game::startGame(){
    cout << "What's your players name?" <<endl;
    getline(cin, name);
    cout << name << ", you are up to bat" <<endl;

}


void game::endGame(){
    cout << "end game" <<endl;

}