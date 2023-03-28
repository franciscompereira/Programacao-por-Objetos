#ifndef AULA6EX2_LODGING_H
#define AULA6EX2_LODGING_H

#include <iostream>
#include <string>

using namespace std;

//A lodging can be booked, and costumers can check in and check out.

class Lodging{
public:
Lodging();
Lodging(string ID, string location, double dailyprice);
void set_availability_to_true();
void set_availability_to_false();
protected:
    string ID_;
    string location_;
    double daily_price;
    bool availability;
};
#endif //AULA6EX2_LODGING_H
