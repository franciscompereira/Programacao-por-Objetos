#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

Date::Date(){
    day_=0;
    month_=0;
    year_=0;
}

Date::Date(unsigned int day_, unsigned int month_, unsigned int year_) {
    this->day_=day_;
    this->month_=month_;
    this->year_=year_;
}

int Date::getday() {
    return day_;
}

int Date::getmonth() {
    return month_;
}

int Date::getyear() {
    return year_;
}