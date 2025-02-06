#include <iostream>
#include "components.h"
#include <string>


timer::timer() : elapsedTime(0.0) {} // Constructor to initialize elapsedTime for each instance of the class created (found online)


void timer::start() {
    startTime = std::chrono::high_resolution_clock::now();
}


void timer::stop() {
    endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<long double> duration = endTime - startTime;
    elapsedTime = duration.count();
}


long double timer::getElapsedTime() {
    return elapsedTime;
}