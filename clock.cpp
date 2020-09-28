// version 0.1 of clock.cpp

#include <iostream>
#include "clock.h"

using namespace std;

Clock::Clock(){
    setTime(0,0,0);
}

Clock::Clock(int hr, int min, int sec){
    setTime(hr, min, sec);
}

void Clock::getTime(int &hr, int &min, int &sec) const {
    hr = this->hr;
    min = this->min;
    sec = this->sec;
}

void Clock::setTime(int hr, int min, int sec){
    if (hr < 24 && hr >= 0 &&
        min < 60 && min >= 0 &&
        sec < 60 && sec >= 0)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    else {
        setTime(0,0,0);
    }

}

void Clock::incrementSeconds(){
    if (sec == 59){
        sec = 0;
        incrementMinutes();
    } else {
        sec++;
    }
}

void Clock::incrementMinutes(){
    if (min == 59){
        min = 0;
        incrementHours();
    } else {
        min++;
    }
}

void Clock::incrementHours(){
    if (hr == 23){
        hr = 0;
    } else{
        hr++;
    }
}

void Clock::printClock(){

    cout << "hr: " << hr << endl;
    cout << "min: " << min << endl;
    cout << "sec: " << sec << endl;
}

/* ==================== NEW MATERIAL ==================== */

bool Clock::isEqual(const Clock &otherClock) const{
    return	this->hr == otherClock.hr &&
              this->min == otherClock.min &&
              this->sec == otherClock.sec;
}

bool Clock::operator ==(const Clock &otherClock) const {
    return isEqual(otherClock);
}