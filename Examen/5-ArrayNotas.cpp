#include <iostream>
using namespace std;

int main() {
    const int n = 10; // Tamaño del array
    float nota[n] = {7, 8, 9, 6, 8, 7, 10, 8, 7.5, 8.1}; // Asignación de valores
    float promedio = 0;

    // Recorre el array y calcula el promedio de las notas
    
    for (int i = 0; i < n; i++) {
        promedio += nota[i];
    }

    promedio /= n; // Divide la suma de las notas por el número de elementos en el array

    cout << "Promedio de notas: " << promedio << endl; // Muestra el promedio de las notas

    return 0;
}