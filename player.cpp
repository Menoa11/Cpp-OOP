#include <iostream>
#include "components.h"
using namespace std;

void player::addScore(int points){
    score += points;
}

void player::reduceScore(int reduction){
    score -= reduction;
}