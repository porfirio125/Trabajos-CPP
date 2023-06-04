#include <iostream>
using namespace std;

int main() {
  float promedio, distancia, ingresos_familiares;

  cout << "PROMEDIO DEL ESTUDIANTE: ";
  cin >> promedio;

  cout << "DISTANCIA DE DOMICILIO (EN KM): ";
  cin >> distancia;

  cout << "INGRESOS FAMILIAR (EN S/): ";
  cin >> ingresos_familiares;


  if (promedio >= 18 || distancia >= 40 && ingresos_familiares <= 700) {
    cout << "EL ESTUDIANTE PUEDE OBTENER UNA BECA" << endl;
  }
  else {
    cout << "EL ESTUDIANTE NO PUEDE OBTENER UNA BECA" << endl;
  }

  return 0;
}