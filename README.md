# Reaction Time Baseball Game

## Table of Contents
1. [Overview](#overview)
2. [Game Features](#game-features)
3. [Components](#components)
4. [Files](#files)
5. [Requirements](#requirements)
6. [Get Started](#get-started)

## Overview
Welcome to the Reaction Time Baseball Game! This game challenges players to react quickly to a pitch. Players need to hit the ball by pressing "Enter" as soon as the ball is thrown. The faster the reaction, the more points are earned. The game includes difficulty levels and a scoreboard for players to track their performance.

## Game Features:
- **Reaction Time Challenge**: Players must react quickly to a randomly timed pitch.
- **Difficulty Levels**: Choose your difficulty level by adjusting the time threshold for a successful hit.
- **Score Tracking**: Earn points based on your reaction speed and keep track of your score.

## Components:
- **Game**: Manages the game flow, including starting and ending the game.
- **Player**: Represents the player and tracks their score.
- **Batting**: Handles the pitching, countdown, and swing mechanics.
- **Timer**: Measures the reaction time of the player.
- **Makefile**: Used to compile and clean the project.

## Files:
- `main.cpp`: Main program file that starts and ends the game.
- `game.cpp`: Contains the `game` class with methods to manage the game, including setting difficulty and starting the game.
- `batting.cpp`: Contains the `batting` class with methods to simulate the countdown, pitch the ball, and check if the player hits the ball.
- `timer.cpp`: Contains the `timer` class for measuring reaction time.
- `player.cpp`: Manages the player's score and name.
- `components.h`: Header file that declares the game, player, batting, and timer classes.

## Requirements:
- C++17 or later
- A C++ compiler (e.g., g++)

## Get Started:
First, clone the repo:
```bash
git clone git@github.com:Menoa11/ReactionTime-Baseball.git
```
Next, go into the directory it was cloned in:
```bash
cd ReactionTime-Baseball/
```
To compile the game, run the following command in the terminal:
```bash
make
```
Then run the executable:
```bash
.\baseball.exe
```
