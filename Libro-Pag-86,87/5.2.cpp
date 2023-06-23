#include <iostream>
using namespace std;
 int main() {
        // Primer Bucle
    for (int n = 10; n > 0; n = n - 2) {
        cout << "Hola ";
        cout << n << endl; 
    }   // Salida Del Primer Bucle: Hola 10, Hola 8, Hola 6, Hola 4, Hola 2.
    cout << endl;


        // Segundo Bucle
    for (double n = 2; n > 0; n = n - 0.5) {
        cout << n << " "<< endl;
    }   // Salida Del Segundo Bucle: 2, 1.5, 1, 0.5.
    return 0;
}