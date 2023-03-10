#include <iostream>
#include "ship.h"

using namespace std;

int ship::genID() {
        static int ID = 0;
        ID += 1;
        return ID;
}

ship::ship() {
    longitude=0;
    latitude=0;
    name="oi";
}

ship::ship(string name, float latitude, float longitude) {
    this->name=name;
    this->latitude=latitude;
    this->longitude=longitude;
}

string ship::getname() {
    return name;
}

float ship::getlatitude() {
    return latitude;
}

float ship::getlongitude() {
    return longitude;
}

void ship::update(string name, float latitude, float longitude) {
    this->name=name;
    this->latitude=latitude;
    this->longitude=longitude;
    this->ID=genID();
}

string ship::setname(string name_) {
    name_=name;
}

float ship::setlatitude(float latitude_) {
    latitude_=latitude;
}

float ship::setlongitude(float longitude_) {
    longitude_=longitude;
}

void ship::show() {
    cout << "\n" << "Name: "<< name;
    cout << "\n" << "Latitude: " << latitude;
    cout << "\n" << "Longitude: " << longitude;
    cout << "\n" << "ID: " << ID;
}