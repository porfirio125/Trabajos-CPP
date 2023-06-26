#include <iostream>
using namespace std;
 int main() {
    int limite_maximo, base, potencia = 1;
    do {
        cout << "Ingrese un límite máximo entero positivo: ";
        cin >> limite_maximo;
    } while (limite_maximo <= 0);
    do {
        cout << "Ingrese una base entera positiva: ";
        cin >> base;
    } while (base <= 0);
    
    for (potencia = 1; potencia <= limite_maximo; potencia *= base) {
        cout << potencia << endl;
    }
     return 0;
}