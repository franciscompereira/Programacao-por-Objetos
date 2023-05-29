#ifndef PREPARACAOEX1_STUDENT_H
#define PREPARACAOEX1_STUDENT_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    const string getName() ;
    void setName(const string &name);
    float getGrade() ;
    void setGrade(float grade);
    void add_student(string name_, float grade_);
    void upload_student(Student *p);
    void update_student(string name2, float grade2);
    void print_students();
    void find_average_grade();
    void find_max_grade();
    friend istream &operator>>(istream &is, Student &Student){
        cout << "Name:";
        is >> Student.name;
        cout << "Grade: ";
        is >> Student.grade;
        return is;
    }
private:
    string name;
    float grade;

};


#endif //PREPARACAOEX1_STUDENT_H
