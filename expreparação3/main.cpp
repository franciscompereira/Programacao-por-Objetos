#include <iostream>
#include <map>
#include "Contact.h"

using namespace std;

void addContact(map<string,string>& data,string name, string contact){
    data.insert({name,contact});
}
// a parte do contact not found não funciona
void searchContacts(map<string,string>& data,string name){
    for (auto value: data) {
        if (data.at(name) != value.second) {
            cout << "Contact not found" << endl;
        }
        else
            cout << "The correspondent number is: " << data.at(name) << endl;
    }
}

void printContacts(map<string,string>& data) {
    for (auto value: data) {
        cout << "\n " << "Name: " << value.first << endl;
        cout << " " << "Phone : " << value.second << endl;
        cout << "--------------------------------" << endl;
    }
}

int main() {
    map<string,string> contactMap; //contact name as key and a contact object as value
    addContact(contactMap,"Francisco","911532950");
    addContact(contactMap,"Mateus","911532988");

    printContacts(contactMap);

    searchContacts(contactMap,"aaa");

    return 0;
}
