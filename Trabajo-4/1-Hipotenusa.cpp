#include <iostream>
#include <cmath> // Librería necesaria para usar la función sqrt()

using namespace std;

int main() {
    float a, b, h; // Declaramos las variables como números de punto flotante

    // Pedimos al usuario que ingrese la longitud de los lados
    cout << "Ingresa La Longitud Del Lado A: ";
    cin >> a;
    cout << "Ingresa La Longitud Del Lado B: ";
    cin >> b;

    // Calculamos la hipotenusa utilizando la fórmula
    h = sqrt(pow(a, 2) + pow(b, 2));

    // Imprimimos el resultado
    cout << "La hipotenusa del triángulo es: " << h << endl;

    return 0;
}