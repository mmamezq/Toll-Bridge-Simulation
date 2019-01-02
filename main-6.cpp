//
//  main.cpp
//  Lab4_TollBooth
//
//  Created by Monica Amezquita on 4/30/18.
//  Copyright © 2018 Monica Amezquita. All rights reserved.
//

#include "tollSimulation.hpp"
#include "LinkedQueue.h"
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
// as per the directions, simulation will run with values 2,3,4, & 5
    cout << "Welcome to Monica Amezquita's Toll Booth Simulator!" << endl;
    cout << "This simulation will run a total of 4 times, with values: 2,3,4 and 5." << endl << endl;

    LinkedQueue<int> ary [5];
    //simulation 1 with  2 tollbooths
    cout << "Simulation Run Number: 1" << endl;
    int totalWait = toll_simulation(ary,2);
    cout << "The total wait time per booth for 2"
        << " booths is " << totalWait << "." << endl << endl;

    //simulation 2 with  3 tollbooths
    cout << "Simulation Run Number: 2" << endl;
    totalWait = toll_simulation(ary,3);
    cout << "The total wait time per booth for 3"
    << " booths is " << totalWait << "." << endl << endl;
    
    //simulation 3 with  4 tollbooths
    cout << "Simulation Run Number: 3" << endl;
    totalWait = toll_simulation(ary,4);
    cout << "The total wait time per booth for 4"
    << " booths is " << totalWait << "." << endl << endl;
    
    //simulation 4 with  5 tollbooths
    cout << "Simulation Run Number: 4" << endl;
    totalWait = toll_simulation(ary,5);
    cout << "The total wait time per booth for 5"
    << " booths is " << totalWait << "." << endl << endl;
    
}
