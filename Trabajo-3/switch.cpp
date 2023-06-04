#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float num1, num2, resultado;
  int opcion;

  cout << "INGRESE EL PRIMER NUMERO: ";
  cin >> num1;

  cout << "INGRESE EL SEGUNDO NUMERO: ";
  cin >> num2;

  cout << "OPERACIONES" << endl;
  cout << "1. Suma" << endl;
  cout << "2. Resta" << endl;
  cout << "3. Multiplicación" << endl;
  cout << "4. División" << endl;
  cout << "5. Potencia" << endl;

  cout << "INGRESE LA OPCION : ";
  cin >> opcion;

  switch (opcion) {
    case 1:
      resultado = num1 + num2;
      cout << "LA SUMA DE  " << num1 << " Y " << num2 << " ES " << resultado << endl;
      break;
    case 2:
      resultado = num1 - num2;
      cout << "LA RESTA DE " << num1 << " Y " << num2 << " ES " << resultado << endl;
      break;
    case 3:
      resultado = num1 * num2;
      cout << "LA MULTIPLICACION DE  " << num1 << " Y " << num2 << " ES " << resultado << endl;
      break;
    case 4:
      if (num2 == 0) {
        cout << "NO SE PUEDE DIVIDIR 0" << endl;
      }
      else {
        resultado = num1 / num2;
        cout << "LA DIVICION DE " << num1 << " Y " << num2 << " ES " << resultado << endl;
      }
      break;
    case 5:
      resultado = pow(num1, num2);
      cout << num1 << " ELEVADO A " << num2 << " ES " << resultado << endl;
      break;
    default:
      cout << "OPCION INVALIDA" << endl;
  }

  return 0;
}