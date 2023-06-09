#include <iostream>

using namespace std;

int main() {
    // Pedir entrada al usuario de la medida en pies
    double pies;
    cout << "Ingrese La Medida: ";
    cin >> pies;

    // Definir las equivalencias de unidades
    const double pie_por_yarda = 3.0;
    const double pulgadas_por_pie = 12.0; // es necesario que se use constante / No, pero es una buena practica de programacion.
    const double yardas_por_pie = 1.0 / 3.0;
    const double centimetros_por_pulgada = 2.54;
    const double metros_por_centimetro = 0.01;

    // Convertir la medida a yardas, pulgadas, centímetros y metros
    double pie = pies * pie_por_yarda ;
    double yardas = pies * yardas_por_pie;
    double pulgadas = pies * pulgadas_por_pie;
    double centimetros = pulgadas * centimetros_por_pulgada;
    double metros = centimetros * metros_por_centimetro;

    // Mostrar el resultado al usuario
    cout << " Respuesta: " << endl;
    cout << " Yardas A Pies: " << pie << endl;
    cout << " Pie A Yardas: " << yardas << endl;
    cout << " Pies A Pulgadas: " << pulgadas << endl;
    cout << " Pulgadas A Centimetros: " << centimetros << endl;
    cout << " Centimetros A Metros: " << metros << endl;

    return 0;
} // REALIZAR LA TRANSFORMACION DE YARDAS A PIES
