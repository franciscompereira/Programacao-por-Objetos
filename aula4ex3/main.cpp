#include <iostream>
#include "club.h"

using namespace std;

int main() {
    club c2;
    club c1;
    club c3;
    c1.update("Francisco","Member");
    cout << c1.getname() << " / " << c1.getgrade() << " / " << c1.getID() << endl ;
    c2.update("Guilherme","Junior Member");
    cout << c2.getname() << " / " << c2.getgrade() << " / " << c2.getID() << endl;
    c3.update("Bruno","Life Member");
    cout << c3.getname() << " / " << c3.getgrade() << " / " << c3.getID() << endl;

    return 0;
}
