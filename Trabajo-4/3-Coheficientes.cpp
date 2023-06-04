#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;
    float x, y;

    cout << "Ingrese los coeficientes: " << endl;
    cout << "A: ";
    cin >> a ;
    cout << "B: ";
    cin >> b ;
    cout << "C: ";
    cin >> c ;
    cout << "D: ";
    cin >> d ;
    cout << "E: ";
    cin >> e ;
    cout << "F: ";
    cin >> f ;

    float det = a * e - b * d; // Calcula el determinante

    if (det == 0) {
        cout << "El sistema no tiene solucion unica." << endl;
    } else { // Si el determinante es diferente de cero, se puede resolver el sistema
        x = (c * e - b * f) / det;
        y = (a * f - c * d) / det;
        cout << "Las soluciones son: x = " << x << ", y = " << y << endl;
    }

    return 0;
}
