#include <iostream>
using namespace std;
 int main() {
    float suma = 0;
    for (int i = 1; i <= 20; i++) {
        suma += i * i / (3.0 * i);
    }
    cout << "La suma de los 20 primeros terminos de la serie es: " << suma << endl;
    return 0;
}