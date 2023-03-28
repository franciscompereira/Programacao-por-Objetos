#include <iostream>
#include "Person.h"
#include "Date.h"
#include "Student.h"

using namespace std;

int main() {
  Student S1("Francisco", 12345678, Date(29, 06, 2004),Date(16,03,2023));
  S1.show_student();
  return 0;
}

