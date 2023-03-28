#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"
#include "Student.h"
#include "Fellow.h"

using namespace std;

unsigned int Student::number_of_students_ = 10000;

Student::Student(Date enrollment_date_) {
    //id_=number_of_students_++;
    //number_of_students_ += 1;
    this->enrollment_date_=enrollment_date_;
}

void Student::set_date(unsigned int day, unsigned int month, unsigned int year) {
    enrollment_date_ = Date(day, month, year);
}

Student::Student(const string& name, const unsigned int& cc, const Date& birthdate, const Date& enrollmentdate) {
    name_=name;
    cc_=cc;
    birth_date=birthdate;
    enrollment_date_=enrollmentdate;
    id_=number_of_students_++;
}

void Student::show_student() {
    cout << "\n" << "Name: " << name_;
    cout << "\n" << "CC: " << cc_;
    cout << "\n" << "Birth Date: " << birth_date.getday() << "/" << birth_date.getmonth() << "/" << birth_date.getyear();
    cout << "\n" << "Enrollment Date: " << enrollment_date_.getday() << "/" << enrollment_date_.getmonth() << "/" << enrollment_date_.getyear();
}
