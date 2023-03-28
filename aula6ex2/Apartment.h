#ifndef AULA6EX2_APARTMENT_H
#define AULA6EX2_APARTMENT_H

#include <iostream>
#include "Lodging.h"

using namespace std;

class Apartment:protected Lodging{
public:
Apartment();
Apartment(string ID, string location, double dailyprice, int roomnumber);
void update_apartment(string ID, string location, double dailyprice, int roomnumber);
void show_apartment();
bool get_availability();
void set_availability_to_true();
string get_ID();


private:
    int room_number;
};
#endif //AULA6EX2_APARTMENT_H
