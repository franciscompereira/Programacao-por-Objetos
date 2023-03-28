#ifndef AULA6EX2_HOTEL_ROOM_H
#define AULA6EX2_HOTEL_ROOM_H

#include <iostream>
#include <string>
#include "Lodging.h"

using namespace std;

class Hotel_room:protected Lodging{
public:
    Hotel_room();
    Hotel_room(string ID, string location, double dailyprice, string type);
    void update_hotel_room(string ID, string location, double dailyprice, string type);
    void show_hotel_room();
    bool get_availability();
    string get_ID();
    void set_availability_to_false();
    void set_availability_to_true();
protected:
    string type_;
};
#endif //AULA6EX2_HOTEL_ROOM_H
