#ifndef AULA5EX1_DATE_H
#define AULA5EX1_DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date{
public:
    Date();
    Date(unsigned int day, unsigned int month, unsigned int year);
    int getday();
    int getmonth();
    int getyear();
private:
    unsigned int day_;
    unsigned int month_;
    unsigned int year_;
};

#endif //AULA5EX1_DATE_H
