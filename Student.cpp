//
// Created by francisco on 27-05-2023.
//

#include "Student.h"



const string Student::getName()  {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

float Student::getGrade()  {
    return grade;
}

void Student::setGrade(float grade) {
    Student::grade = grade;
}
/*
void Student::add_student(std::string name_, float grade_){
    Student s1;
    s1.update_student(name_, grade_);
    s1.upload_student(&s1);
}
*/
void Student::update_student(string name2, float grade2) {
    name=name2;
    grade=grade2;
}



void Student::print_students() {
    cout << "\n " << "Name: " << name << endl;
    cout << " " << "Grade : " << grade << endl;
    cout << "--------------------------------" << endl;
}

void Student::find_average_grade() {

}
/*
void Student::find_max_grade() {
    auto e = max_element(begin(student.grade), end(student.grade));
    cout << "The max grade is: " << *e;
}
 */