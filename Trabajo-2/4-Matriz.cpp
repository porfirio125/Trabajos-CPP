#include <iostream>
#include <vector>

using namespace std;

void encontrarMayorMenor(vector<vector<int>> matriz) {
    int mayor = matriz[0][0]; // Empezamos asumiendo que el mayor elemento es el primer elemento de la matriz
    int menor = matriz[0][0]; // Empezamos asumiendo que el menor elemento es el primer elemento de la matriz
    vector<int> posMayor = {0, 0}; // Vector para almacenar las posiciones del mayor elemento
    vector<int> posMenor = {0, 0}; // Vector para almacenar las posiciones del menor elemento
    for(int i=0; i<matriz.size(); i++) {
        for(int j=0; j<matriz[i].size(); j++) {
            if(matriz[i][j] > mayor) { // Si encontramos un elemento mayor al actual, actualizamos el mayor y su posición
                mayor = matriz[i][j];
                posMayor = {i, j};
            }
            if(matriz[i][j] < menor) { // Si encontramos un elemento menor al actual, actualizamos el menor y su posición
                menor = matriz[i][j];
                posMenor = {i, j};
            }
        }
    }
    // Imprimimos el mayor elemento y su posición
    cout << "El mayor elemento es " << mayor << " y se encuentra en la posición (" << posMayor[0] << ", " << posMayor[1] << ")" << endl;
    // Imprimimos el menor elemento y su posición
    cout << "El menor elemento es " << menor << " y se encuentra en la posición (" << posMenor[0] << ", " << posMenor[1] << ")" << endl;
}

int main() {
    // Creamos una matriz de ejemplo
    vector<vector<int>> matriz = {{5, 6, 7, 5, 10, 20},
                                  {2, 2, 9, 15, 2, 19},
                                  {8, 4, 3, 2, 11, 22}};
    encontrarMayorMenor(matriz); // Llamamos a la función para encontrar el mayor y menor elemento de la matriz
    return 0;
}
