#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    complex c1(2,3);
    complex c2(4,5);
    // cout << c1.geta() << "+" << c1.getb() << "i" << endl;
    complex c3=c1+c2;
    cout << c3.geta() << "+" << c3.getb() << "i" << endl;
    return 0;
}
