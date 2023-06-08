#include <iostream>

using namespace std;

int main() {
    // Pedir entrada al usuario de la medida en pies
    double pies;
    cout << "Ingrese La Medida En Pies: ";
    cin >> pies;

    // Definir las equivalencias de unidades
    const double pulgadas_por_pie = 12.0; // es necesario que se use constante
    const double yardas_por_pie = 1.0 / 3.0;
    const double centimetros_por_pulgada = 2.54;
    const double metros_por_centimetro = 0.01;

    // Convertir la medida a yardas, pulgadas, centímetros y metros
    double yardas = pies * yardas_por_pie;
    double pulgadas = pies * pulgadas_por_pie;
    double centimetros = pulgadas * centimetros_por_pulgada;
    double metros = centimetros * metros_por_centimetro;

    // Mostrar el resultado al usuario
    cout << pies << " Pies Equivalen A: " << endl;
    cout << " Yardas: " << yardas << endl;
    cout << " Pulgadas: " << pulgadas << endl;
    cout << " Centimetros: " << centimetros << endl;
    cout << " Metros: " << metros << endl;

    return 0;
} // REALIZAR LA TRANSFORMACION DE YARDAS A PIES
