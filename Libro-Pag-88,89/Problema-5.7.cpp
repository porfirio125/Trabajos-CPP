#include <iostream>
using namespace std;
 int main() {
    float radio;
    float area, volumen;
    const float PI = 3.1416; 
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    area = 4 * PI * radio * radio;
    volumen = (4.0/3.0) * PI * radio * radio * radio;
    cout << "El área de la esfera es: " << area << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}