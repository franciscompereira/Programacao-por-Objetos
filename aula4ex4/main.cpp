#include <iostream>
#include "ship.h"
using namespace std;

int main() {
    ship s1,s2,s3;
    string name1,name2,name3;
    float lat1, lat2, lat3;
    float lon1, lon2, lon3;

        cout << "Write 3 ships' caracteristics" << endl;
        cout << "--First ship--"<< endl;
        cout << "Name: " << endl;
        cin >> name1;
        cout << "Latitude: " << endl;
        cin >> lat1;
        cout << "Longitude: " << endl;
        cin >> lon1;

        s1.update(name1,lat1, lon1); //upload dos dados utilizados

        cout << "--Second ship--"<< endl;
        cout << "Name: " << endl;
        cin >> name2;
        cout << "Latitude: " << endl;
        cin >> lat2;
        cout << "Longitude: " << endl;
        cin >> lon2;

        s2.update(name2, lat2, lon2);

        cout << "--Third ship--"<< endl;
        cout << "Name: " << endl;
        cin >> name3;
        cout << "Latitude: " << endl;
        cin >> lat3;
        cout << "Longitude: " << endl;
        cin >> lon3;

        s3.update(name3, lat3, lon3);

        s1.show();

        s2.show();

        s3.show();

    return 0;
}
