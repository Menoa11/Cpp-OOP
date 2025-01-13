#include <iostream>
#include "components.h"
#include <thread>   
#include <chrono>
#include <string>
using namespace std;


void batting::countdown(){
    cout << "Get ready to bat!" << endl;
    for (int i = 3; i > 0; --i) {
        cout << i << "..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}