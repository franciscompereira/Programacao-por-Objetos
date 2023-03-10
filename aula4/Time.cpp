#include <iostream>
#include "Time.h"

using namespace std;
Time::Time() {
    hour=0;
    minutes=0;
    seconds=0;
}

Time::Time(int hour, int minutes, int seconds) {
    this -> hour = hour;
    this ->minutes = minutes;
    this ->seconds = seconds;
}

int Time::gethour() {
    return hour;
}

int Time::getminutes(){
    return minutes;
}

int Time::getseconds(){
    return seconds;
}

void Time::update(int hour, int minutes, int seconds) {
    this -> hour = hour;
    this ->minutes = minutes;
    this ->seconds = seconds;
}

void Time::showtime(int hour, int minutes, int seconds) {
    cout << this->hour << ":" << this->minutes << ":" << this->seconds;
}