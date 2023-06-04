#include <iostream>

using namespace std;

int main() {
    // Pedir entrada al usuario de la masa en gramos
    float m;
    cout << "Ingrese La Masa En Gramos: ";
    cin >> m;

    // Definir la velocidad de la luz en metros por segundo
    const float c = 2.997925e10;  // m/s

    // Calcular la energía producida en unidades de ergios
    float E = m * c * c;  // g·cm²/s² = ergios

    // Mostrar el resultado al usuario
    cout << "La Cantidad De Energia Producida Es De " << E << " Ergios." << endl;

    return 0;
}