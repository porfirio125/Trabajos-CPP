#include <iostream>
using namespace std;
 int main() {
    int n, num, mayor, menor, suma = 0;
    float media;
     do {
        cout << "Ingrese la cantidad de numeros: ";
        cin >> n;
    } while (n <= 0);
        cout << "Ingrese el numero 1: ";
        cin >> num;
        mayor = menor = suma = num;
     for (int i = 2; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;
         if (num > mayor) {
            mayor = num;
        }
         if (num < menor) {
            menor = num;
        }
         suma += num;
    }
     media = (float)suma / n;
     cout << "El numero mas grande es: " << mayor << endl;
    cout << "El numero mas pequenio es: " << menor << endl;
    cout << "La media de los numeros es: " << media << endl;
     return 0;
}