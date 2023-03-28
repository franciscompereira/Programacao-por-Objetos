#ifndef AULA5EX1_PERSON_H
#define AULA5EX1_PERSON_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Person {
public:
    Person();
    Person(string name_, unsigned int cc_, Date birth_date);
protected:
    string name_;
    unsigned int cc_;
    Date birth_date;
};
#endif //AULA5EX1_PERSON_H
