#include <iostream>
using namespace std;
 int main() {
    int n;
    cout << "Ingrese un número no negativo: ";
    cin >> n;
    // Imprime las líneas del n al 1
    for (int i = n ; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
     return 0;
}