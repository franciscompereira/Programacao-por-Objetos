#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){
    name_="0";
    cc_=0;
}

Person::Person(string name_, unsigned int cc_, Date birth_date) {
    this->name_=name_;
    this->cc_=cc_;
    this->birth_date=birth_date;
}


