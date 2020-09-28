// version 0.1 of clock.h 


#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

class Clock{
public:

    // default constructor
    // usage: Clock myClock;
    Clock();

    // three-parameter constructor
    // usage: Clock myClock(12, 30, 10);
    Clock(int hr, int min, int sec);

    // accessors
    void getTime(int &hr, int &min, int &sec) const;
    void printClock();

    // mutators
    void setTime(int hr, int min, int sec);
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();


    // NEW ACCESSOR
    bool isEqual(const Clock &otherClock) const;
    // NEW OVERLOADED OPERATOR
    bool operator ==(const Clock &otherClock) const;



private:
    int hr;
    int min;
    int sec;
};

#endif