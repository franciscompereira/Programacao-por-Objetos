#ifndef PREPARACAOEX2_CONTACT_H
#define PREPARACAOEX2_CONTACT_H

#include <iostream>

using namespace std;

class Contact {
public:
    const string &getName();
    void setName(const string &name);
    const string &getPhone();
    void setPhone(const string &phone);
    void printContacts();

private:
    string name_;
    string phone_;

};


#endif //PREPARACAOEX2_CONTACT_H
