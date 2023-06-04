#include <iostream>
using namespace std;

int main() {
    int n; // Declaramos la variable como un número entero

    // Pedimos al usuario que ingrese un entero
    cout << "Ingresa un numero entero: ";
    cin >> n;

    // Calculamos el doble y el triple del número ingresado
    int doble = 2 * n;
    int triple = 3 * n;

    // Imprimimos el resultado
    cout << "El doble de " << n << " es: " << doble << endl;
    cout << "El triple de " << n << " es: " << triple << endl;

    return 0;
}
