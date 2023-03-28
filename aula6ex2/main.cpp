#include <iostream>
#include "Car.h"
#include "Travel_agency.h"
#include "Lodging.h"
#include "Apartment.h"

using namespace std;

int main() {

    // método para mostrar os carros disponiveis e não disponiveis
    /*
    Car buffer;

    Travel_agency agencia("Sol Ardente", "Coimbra");

    buffer.update_car("10/ZE/11", "luxury", "diesel", 8.50);
    agencia.load_vehicles(&buffer);

    buffer.update_car("12/IE/15", "economic", "gasoline", 8.90);
    agencia.load_vehicles(&buffer);

    buffer.update_car("15/ZP/16", "family", "electric", 2.50);
    agencia.load_vehicles(&buffer);

    buffer.update_car("18/ZG/19", "luxury", "hybrid", 4.50);
    agencia.load_vehicles(&buffer);

    //buffer.choose_a_car("15/ZP/16", "family", "electric", 2.50);  COMPLETAMENTE CAGATIVO, TESTE ESTUPIDO
    //agencia.load_vehicles(&buffer);

    agencia.rent_vehicle("12/IE/15");
    agencia.rent_vehicle("18/ZG/19");
    agencia.show_vehicles_non_available();

    */
    Apartment buffer2;
    Travel_agency agencia("Sol Ardente", "Coimbra");

    buffer2.update_apartment("1234", "Lisboa", 30.00, 4);
    agencia.load_apartments(&buffer2);

    buffer2.update_apartment("2345", "Shangai", 19.50, 3);
    agencia.load_apartments(&buffer2);

    buffer2.update_apartment("3456", "Praga", 25.00, 6);
    agencia.load_apartments(&buffer2);

    buffer2.update_apartment("4567", "Minsk", 12.60, 2);
    agencia.load_apartments(&buffer2);

    //agencia.rent_apartment("3456");

    agencia.show_apartments_available();

    return 0;
}
