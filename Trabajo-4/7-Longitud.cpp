#include <iostream>

using namespace std;

int main() {
    // Pedir entrada al usuario de la longitud del perímetro en hectómetros, decámetros y metros
    int h, da, m;
    cout << "Ingrese La Longitud En: " << endl ;
    cout << "Hectometros: " ;
    cin >> h ;
    cout << "Decametros: " ;
    cin >> da ;
    cout << "Metros: " ;
    cin >> m ;

    // Convertir la longitud del perímetro a decímetros
    int perimetro_en_decimetros = (h * 10000) + (da * 100) + (m * 10);

    // Mostrar el resultado al usuario
    cout << "El perimetro es de " << perimetro_en_decimetros << " decimetros." << endl;

    return 0;
}