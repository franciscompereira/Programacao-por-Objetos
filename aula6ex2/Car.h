#ifndef AULA6EX2_CAR_H
#define AULA6EX2_CAR_H

#include <iostream>
#include <string>

using namespace std;

//A car can be booked, picked up and returned

class Car{
public:
Car();
Car(string licenseplate, string carclass, string fueltype, double dailyprice);
string get_license_plate();
string get_car_class();
string get_fuel_type();
double get_daily_price();
bool get_availability();
void set_license_plate(string licenseplate);
void set_car_class(string carclass);
void set_fuel_type(string fueltype);
void set_daily_price(double dailyprice);
void set_availability_to_true();
void set_availability_to_false();
void show_car();
void check_availability();
void booking();
void update_car(string licenseplate, string carclass, string fueltype, double dailyprice);
void choose_a_car(string licenseplate, string carclass, string fueltype, double dailyprice);


protected:
    string license_plate;
    string car_class; //luxury, economy or family
    string fuel_type; //petrol, diesel, electric, hybrid
    double daily_price;
    bool availability;
};

#endif //AULA6EX2_CAR_H
