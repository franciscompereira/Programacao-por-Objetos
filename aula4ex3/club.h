#ifndef AULA4EX3_CLUB_H
#define AULA4EX3_CLUB_H

#include <iostream>

using namespace std;

class club{
public:
    club();
    club(string name, string grade);
    string getname();
    string getgrade();
    unsigned int getID();
    int update(string name,string grade);
    void showclub(string name, string grade);
private:
    string name;
    int ID;
    static int IDsize;
    string grade;
    double annual_fee;
};

#endif //AULA4EX3_CLUB_H
