#include <iostream>
#include <string>
#include "Car.h"
#include "Apartment.h"
#include "Hotel_room.h"
#include <vector>
#include "Travel_agency.h"

using namespace std;

Travel_agency::Travel_agency() {
    this->address_="a";
    this->name_="b";
}

Travel_agency::Travel_agency(string name, string address) {
    name_=name;
    address_=address;
}

void Travel_agency::load_vehicles(Car *p) {
    vehicles.push_back(*p);
}

void Travel_agency::load_apartments(Apartment *p) {
    alojamento.push_back(*p);
}

void Travel_agency::load_hotel_rooms(Hotel_room *p) {
    hoteis.push_back(*p);
}

void Travel_agency::show_vehicles_available() {
    for(int i=0;i<vehicles.size();i++){
        if(vehicles[i].get_availability()==true){
            vehicles[i].show_car();
        }
    }
}

void Travel_agency::show_vehicles_non_available(){
    for(int i=0;i<vehicles.size();i++){
        if(vehicles[i].get_availability()==false){
            vehicles[i].show_car();
        }
    }
}

void Travel_agency::show_apartments_available() {
    for(int i=0;i<alojamento.size();i++){
        if(alojamento[i].get_availability()==true){
            alojamento[i].show_apartment();
        }
    }
}

void Travel_agency::show_apartments_non_available() {
    for(int i=0;i<alojamento.size();i++){
        if(alojamento[i].get_availability()==false){
            alojamento[i].show_apartment();
        }
    }
}

void Travel_agency:: rent_vehicle(string licenseplate){
    for(int i=0;i<vehicles.size();i++){
        if(vehicles[i].get_license_plate() == licenseplate){
            vehicles[i].set_availability_to_false();
            break;
        }
    }
}

void Travel_agency::unrent_vehicle(string licenseplate) {
    for(int i=0;i<vehicles.size();i++){
        if(vehicles[i].get_license_plate() == licenseplate){
            vehicles[i].set_availability_to_true();
            break;
        }
    }
}

void Travel_agency::rent_apartment(string ID) {
    for(int i=0;i<alojamento.size();i++){
        if(alojamento[i].get_ID() == ID){
            vehicles[i].set_availability_to_false();
            break;
        }
    }
}

void Travel_agency::unrent_apartment(string ID) {
    for(int i=0;i<alojamento.size();i++){
        if(alojamento[i].get_ID() == ID){
            alojamento[i].set_availability_to_true();
            break;
        }
    }
}

void Travel_agency::show_hotel_rooms_available() {
    for(int i=0;i<hoteis.size();i++){
        if(hoteis[i].get_availability()==true){
            hoteis[i].show_hotel_room();
        }
    }
}

void Travel_agency::show_hotel_rooms_non_available() {
    for(int i=0;i<hoteis.size();i++){
        if(hoteis[i].get_availability()==false){
            hoteis[i].show_hotel_room();
        }
    }
}

void Travel_agency::rent_hotel_room(string ID) {
    for(int i=0;i<hoteis.size();i++){
        if(hoteis[i].get_ID() == ID){
            hoteis[i].set_availability_to_false();
            break;
        }
    }
}

void Travel_agency::unrent_hotel_room(string ID) {
    for(int i=0;i<hoteis.size();i++){
        if(hoteis[i].get_ID() == ID){
            hoteis[i].set_availability_to_true();
            break;
        }
    }
}