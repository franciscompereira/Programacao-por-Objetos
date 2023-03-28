#ifndef AULA6EX2_TRAVEL_AGENCY_H
#define AULA6EX2_TRAVEL_AGENCY_H

#include <iostream>
#include <string>
#include "Car.h"
#include "Apartment.h"
#include "Hotel_room.h"
#include "Lodging.h"
#include <vector>

using namespace std;

class Travel_agency:public Car, public Apartment, public Hotel_room{
public:
    Travel_agency();
    Travel_agency(string name, string address);
    ~Travel_agency();
    void load_vehicles(Car *p);
    void load_apartments(Apartment *p);
    void load_hotel_rooms(Hotel_room *p);
    void show_vehicles_available();
    void show_vehicles_non_available();
    void show_apartments_available();
    void show_apartments_non_available();
    void show_hotel_rooms_available();
    void show_hotel_rooms_non_available();
    void rent_vehicle(string licenseplate);
    void rent_apartment(string ID);
    void unrent_vehicle(string licenseplate);
    void unrent_apartment(string ID);
    void rent_hotel_room(string ID);
    void unrent_hotel_room(string ID);

private:
    string name_;
    string address_;
    vector <Car> vehicles;
    vector <Apartment> alojamento;
    vector <Hotel_room> hoteis;
};
#endif //AULA6EX2_TRAVEL_AGENCY_H
