#include "Contact.h"

const string &Contact::getName(){
    return name_;
}

void Contact::setName(const string &name) {
    name_ = name;
}

const string &Contact::getPhone(){
    return phone_;
}

void Contact::setPhone(const string &phone) {
    phone_ = phone;
}

void Contact::printContacts() {
    cout << "\n " << "Name: " << name_ << endl;
    cout << " " << "Grade : " << phone_ << endl;
    cout << "--------------------------------" << endl;
}
