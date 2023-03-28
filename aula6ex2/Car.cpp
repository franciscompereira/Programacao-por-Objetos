#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

Car::Car() {
    license_plate = "a";
    car_class = "b";
    fuel_type = "c";
    availability=true;
}

Car::Car(string licenseplate, string carclass, string fueltype, double dailyprice) {
    license_plate = licenseplate;
    car_class = carclass;
    fuel_type = fueltype;
    daily_price = dailyprice;
    availability= true;
}

string Car::get_car_class() {
    return car_class;
}

string Car::get_fuel_type() {
    return fuel_type;
}

string Car::get_license_plate() {
    return license_plate;
}

double Car::get_daily_price() {
    return daily_price;
}

bool Car::get_availability() {
    return availability;
}

void Car::set_car_class(string carclass) {
    car_class=carclass;
}

void Car::set_license_plate(string licenseplate) {
    license_plate=licenseplate;
}

void Car::set_fuel_type(string fueltype) {
    fuel_type=fueltype;
}

void Car::set_daily_price(double dailyprice) {
    daily_price=dailyprice;
}

void Car:: show_car(){
    cout << "\n " << "License plate: " << license_plate << endl;
    cout << " " << "Car Class: " << car_class << endl;
    cout << " " << "Fuel type: " << fuel_type << endl;
    cout << " " << "Daily Price: " << daily_price << " euros" << endl;
    cout << "--------------------------------";
    /*
    cout << "\n" << "License plate: " << license_plate;
    cout << "\t" << "Car Class: " << car_class;
    cout << "\t" << "Fuel type: " << fuel_type;
    cout << "\t" << "Daily Price: " << daily_price << " euros" << endl;
     */
}

void Car::check_availability() {
    if (availability==1){
        cout << "\n" << "The car you are looking for is available" << endl;
    }
    else cout << "The car you are looking for is already been taken" << endl;
}

void Car::set_availability_to_true() {
    availability = true;
}

void Car::set_availability_to_false() {
    availability = false;
}

void Car::booking() {
    Car c2;
    cout << "Which car are you looking for?"<< endl;
    c2.car_class="economic";
    c2.license_plate="11-CE-14";
    c2.fuel_type="diesel";
    c2.daily_price=8.50;
    c2.availability=1;
}

void Car::update_car(string licenseplate, string carclass, string fueltype, double dailyprice) {
    license_plate = licenseplate;
    car_class = carclass;
    fuel_type = fueltype;
    daily_price = dailyprice;
    set_availability_to_true();
}

void Car::choose_a_car(string licenseplate, string carclass, string fueltype, double dailyprice){

}
/*
license_plate = licenseplate;
car_class = carclass;
fuel_type = fueltype;
daily_price = dailyprice;
availability = set_availability_to_false();
*/