
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaración del vector y variables para la suma y media
    vector<int> numeros(10);
    int suma = 0;
    double media;

    // Ciclo para ingresar los números y calcular la suma
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un número entero: ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular la media aritmética
    media = (double)suma / numeros.size();

    // Mostrar los resultados
    cout << "La suma de los números es: " << suma << endl;
    cout << "La media aritmética de los números es: " << media << endl;

    return 0;
}