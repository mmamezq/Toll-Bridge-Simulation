//
//  tollSimulation.cpp
//  Lab4_TollBooth
//
//  Created by Monica Amezquita on 4/30/18.
//  Copyright © 2018 Monica Amezquita. All rights reserved.
//

#include "tollSimulation.hpp"
#include "LinkedQueue.h"
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int toll_kind(){
    int tollType = rand() % 2 + 1;
    if(tollType == 1) //tells us if person is paying with electronic pass card
        return 1;
    else             // or if person pays with cash
        return 3;
}

int toll_simulation( LinkedQueue<int> q[],int boothNums){ //returns total
    int totalWait = 0;
    int booth = 0;
    //simulation for booths
    int totalCars = (rand() % 50) + 50;
    for(int i = 0; i < totalCars; i++){
        //simulation of cars per booth
        q[booth].enqueue(toll_kind());
        booth = (booth+1)%boothNums;
    }
    
    for(int i = 0; i < boothNums; i++){
        int boothNum = i+1;
        int carsPerBooth = 0;
        int currentWait = 0;
        while(!q[i].isEmpty()){
            currentWait += q[i].peekFront();
            carsPerBooth++;
            q[i].dequeue();
            
        }
        
        
        float averageWaitTime = ((double)currentWait / totalCars);
        cout << "Booth " << boothNum << " had " << carsPerBooth << " cars in line." << endl;
        cout << "The maximum wait time for this booth is " << currentWait << " time units." << endl;
        
        cout << "The average wait time for booth " << boothNum << " is " << setprecision(3) << averageWaitTime << " time units." << endl << endl;
        totalWait += currentWait;

    }
    return totalWait/boothNums;
}
