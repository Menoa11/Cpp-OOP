#pragma once

using namespace std;

class game {
private:
    int difficulty;
public:
    void startGame();
    void endGame();
};


class player {
private:
    string name;
    int score;
public:
    void addScore(int points);
    void reduceScore(int reduction);
    int getScore();
    void setName(string name);

};

class batting {
private:

public:
    void countdown();
};


class timer {
private:

public:

    
};