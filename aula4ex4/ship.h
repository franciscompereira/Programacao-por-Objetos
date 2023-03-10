#ifndef AULA4EX4_SHIP_H
#define AULA4EX4_SHIP_H

#include <iostream>
#include <string>

using namespace std;

class ship{
public:
    ship();
    ship(string name,float latitude, float longitude);
    string getname();
    float getlatitude();
    float getlongitude();
    void update(string name,float latitude, float longitude);
    string setname(string name_);
    float setlatitude(float latitude_);
    float setlongitude(float longitude_);
    void show();
private:
    string name;
    int genID(); //generar ID
    float latitude;
    float longitude;
    unsigned int ID;

};

#endif //AULA4EX4_SHIP_H
