#include <iostream>
#include "components.h"

void player::addScore(int points){
    score += points;
}

void player::reduceScore(int reduction){
    score -= reduction;
}

int player::getScore(){
    return score;
}

void player::setName(std::string newName){
    name = newName;
}