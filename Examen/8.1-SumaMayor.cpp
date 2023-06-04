
#include <iostream>
using namespace std;

int main() {
    float matriz[4][4] = {{1.2, 4.8, 3.1, 7.9}, {2.3, 9.2, 6.4, 8.1}, {3.8, 1.6, 10.5, 5.3}, {8.7, 6.5, 2.9, 4.2}};
    float sumaFila[4] = {0}; //arreglo para guardar las sumas de cada fila
    int filaMenorSuma = 0; //fila con la suma menor
    float menorSuma = 0; //guardamos la suma menor aquí
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            sumaFila[i] += matriz[i][j]; //sumamos los valores de la fila i a sumaFila[i]
        }
        //imprimimos la suma de la fila i
        cout << "La suma de la fila " << i+1 << " es: " << sumaFila[i] << endl;

        //comparamos la suma de la fila i con la suma menor actual
        if(i == 0 || sumaFila[i] < menorSuma) {
            menorSuma = sumaFila[i];
            filaMenorSuma = i;
        }
    }
    //imprimimos la fila con la menor suma
    cout << "La fila con la menor suma es la " << filaMenorSuma+1 << " con una suma de " << menorSuma << endl;
    return 0;
}

