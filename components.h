#pragma once

using namespace std;
#include <chrono>


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

class game : public player {
private:
    int numRounds;
    static double difficulty;
public:
    void startGame();
    void endGame();
    void setDifficulty(double level);
    double getDifficulty();
    void setNumRounds(int rounds);
    void displayInstructions();
    void displayLeaderboard();
};

class batting : public game {
private:

public:
    void countdown();
    bool pitchBall();
    void hitOrMiss(bool hit);
};


class timer {
private:
    std::chrono::high_resolution_clock::time_point startTime;
    std::chrono::high_resolution_clock::time_point endTime;
    long double elapsedTime; 

public:
    timer();
    void start();
    void stop();
    long double getElapsedTime();
};