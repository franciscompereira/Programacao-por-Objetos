#include <iostream>
#include "Student.h"
#include <vector>

using namespace std;

void addStudent(vector<Student>& data,Student& student){
    data.push_back(student);
}

float find_average_grade(vector<Student>& data){
    double media=0;
    for(auto value: data){
        media+=value.getGrade();
    }
    float resul= media/data.size();
    return resul;
}

float find_max_grade(vector<Student>& data) {

    vector<float>grades={};
    for (auto estudante: data){
        grades.push_back(estudante.getGrade());
    }
    auto e = max_element(grades.begin(), grades.end());
    return *e;
}

void print_students(vector<Student>& data) {
    for(auto e:data ){
            cout << "Name: " << e.getName() << endl;
            cout << "Grade : " << e.getGrade() << endl;
            cout << "--------------------------------" << endl;
    }

}

void ask_stu_num(vector<Student>& data){
    int stunum;
    cout << "How many students do you want to enroll?" << endl;
    cin >> stunum;
    for(int i=0;i<(stunum);i++){
        Student teste;
        cin >> teste;
        data.push_back(teste);
    }

    /*  teste
    for(auto person:data){
        cout << person.getName() << endl;
    }
     */
}

int main() {
vector<Student> student;

Student s1;
Student s2;
Student s3;
s1.update_student("Francisco", 17.5);
s2.update_student("Jorge", 9.5);
s3.update_student("Violas", 12);
addStudent(student,s1);
addStudent(student,s2);
addStudent(student,s3);

print_students(student);

/*

cout << "\n " << find_average_grade(student) << endl;

cout << "\n" << find_max_grade(student) << endl;


ask_stu_num(student);
*/
return 0;
}
