#ifndef AULA5EX1_FELLOW_H
#define AULA5EX1_FELLOW_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Person.h"
#include "Date.h"

using namespace std;

class Fellow: public Student{
public:
    Fellow();
    Fellow(const string& name, const unsigned int& cc, const Date& birthdate, const Date& enrollmentdate, const double& scholarship)
        :Student(name,cc,birthdate, enrollmentdate),scholarship_(scholarship){
        id_=number_of_students_++;

    }
private:
    double scholarship_;
};

#endif //AULA5EX1_FELLOW_H
