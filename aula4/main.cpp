#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    Time t1(22,15,2);
    Time t2(22,15,2);
    Time t3;
    cout << "\n"<<t1.gethour()<<":"<<t1.getminutes()<<":"<<t1.getseconds()<< endl;
    //t1.update(23,16,14);
    cout << "\n"<<t2.gethour()<<":"<<t2.getminutes()<<":"<<t2.getseconds()<< endl;
    cout << "\n"<<t3.gethour()<<":"<<t3.getminutes()<<":"<<t3.getseconds()<< endl;
    if(t2==t1){
        cout << "horários iguais" << endl;
    }
    else
        cout << "horários diferentes"<< endl;
    return 0;
}
