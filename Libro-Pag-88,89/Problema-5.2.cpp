#include <iostream>
using namespace std;
 int main() {
    // Imprime las líneas del 1 al 4
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
     // Imprime las líneas del 3 al 1
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
     return 0;
}