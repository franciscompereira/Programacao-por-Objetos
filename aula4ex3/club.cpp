#include <iostream>
#include "club.h"

int club::IDsize=99;

club::club(){
    name="0";
    grade="0";
}

club::club(string name, string grade) {
    this->name=name;
    this->grade=grade;
}

string club::getname() {
    return name;
}

string club::getgrade() {
    return grade;
}

unsigned int club::getID() {
    return ID;
}

int club::update(string name, string grade) {
    this->name=name;
    this->grade=grade;
    ID=++IDsize;
    return ID;
}//esta função junta getgrade, getname e getID

void club::showclub(string name, string grade) {
    cout << this->name << " / " << this->grade << " / " << this->ID << endl;
}