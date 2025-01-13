#include <iostream>
#include "components.h"
#include <string>

using namespace std;

int main(){
    
    game newGame;
    player playerOne;
    newGame.startGame();
    playerOne.addScore(0);

    while(1){
        exit(1);
    }

    newGame.endGame();
    return 0;
}
