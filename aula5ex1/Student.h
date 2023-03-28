#ifndef AULA5EX1_STUDENT_H
#define AULA5EX1_STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"


using namespace std;

class Student: public Person {
public:
    Student();
    Student(Date enrollment_date_);
    Student(const string& name, const unsigned int& cc, const Date& birthdate, const Date& enrollmentdate); //constructor completo
    void set_date(unsigned int day_, unsigned int month_, unsigned int year_);
    void show_student();
    void show_ed();
protected:
    unsigned int id_;
    static unsigned int number_of_students_;
    Date enrollment_date_;
};
#endif //AULA5EX1_STUDENT_H
