#include <iostream>
#include <string>
#include "Lodging.h"
#include "Apartment.h"

using namespace std;

Apartment::Apartment() {
    ID_="0";
    location_="a";
    daily_price=0;
    room_number=0;
}

Apartment::Apartment(string ID, string location, double dailyprice, int roomnumber) {
    ID_=ID;
    location_=location;
    daily_price=dailyprice;
    room_number=roomnumber;
    set_availability_to_true();
}

void Apartment::update_apartment(string ID, string location, double dailyprice, int roomnumber) {
    ID_=ID;
    location_=location;
    daily_price=dailyprice;
    room_number=roomnumber;
    set_availability_to_true();
}

void Apartment::show_apartment() {
    cout << "\n " << "ID: " << ID_ << endl;
    cout << " " << "Location: " << location_ << endl;
    cout << " " << "Room Number: " << room_number << endl;
    cout << " " << "Daily Price: " << daily_price << " euros" << endl;
    cout << "--------------------------------";
}

bool Apartment:: get_availability(){
    return availability;
}

string Apartment::get_ID() {
    return ID_;
}

void Apartment::set_availability_to_true() {
    availability= true;
}