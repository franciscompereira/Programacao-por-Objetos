#include <iostream>
#include <string>
#include "Lodging.h"

using namespace std;

Lodging::Lodging() {
    ID_="0";
    location_="a";
    daily_price=0;
}

Lodging::Lodging(string ID, string location, double dailyprice) {
    ID_=ID;
    location_=location;
    daily_price=dailyprice;
    availability=true;
}

void Lodging::set_availability_to_true() {
    availability = true;
}

void Lodging::set_availability_to_false() {
    availability = false;
}

