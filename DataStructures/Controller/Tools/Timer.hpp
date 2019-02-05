//
//  Timer.h
//  DataStructures
//
//  Created by Judkins, Jensen on 2/5/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#ifndef Timer_h
#define Timer_h
#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_h */
