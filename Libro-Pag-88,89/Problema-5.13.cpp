#include <iostream>
using namespace std;
 int main() {
    cout << "Lista de numeros que cumplen la condicion: " << endl;
    for (int num = 100; num < 1000; num++) {
        int dig1 = num / 100;
        int dig2 = (num / 10) % 10;
        int dig3 = num % 10;
        int suma = dig1 * dig1 + dig2 * dig2 + dig3 * dig3;
        if (suma == num / 3) {
            
            cout <<"Numero: "<< num << endl;
        }
    }
    return 0;
}