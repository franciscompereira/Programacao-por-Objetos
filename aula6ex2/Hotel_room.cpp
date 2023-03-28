#include <iostream>
#include <string>
#include "Lodging.h"
#include "Hotel_room.h"

using namespace std;

Hotel_room::Hotel_room() {

}

Hotel_room::Hotel_room(string ID, string location, double dailyprice, string type) {
    ID_=ID;
    location_=location;
    daily_price=dailyprice;
    type_=type;
    set_availability_to_true();
}

void Hotel_room::update_hotel_room(string ID, string location, double dailyprice, string type) {
    ID_=ID;
    location_=location;
    daily_price=dailyprice;
    type_=type;
    set_availability_to_true();
}

void Hotel_room::show_hotel_room() {
    cout << "\n " << "ID: " << ID_ << endl;
    cout << " " << "Location: " << location_ << endl;
    cout << " " << "Type: " << type_ << endl;
    cout << " " << "Daily Price: " << daily_price << " euros" << endl;
    cout << "--------------------------------";
}

bool Hotel_room::get_availability() {
    return availability;
}

string Hotel_room::get_ID() {
    return ID_;
}

void Hotel_room::set_availability_to_false() {
    availability= false;
}

void Hotel_room::set_availability_to_true() {
    availability= true;
}