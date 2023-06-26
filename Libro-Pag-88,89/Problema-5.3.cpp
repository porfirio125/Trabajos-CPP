#include <iostream>
using namespace std;
 int main() {
    int num, pos = 0, neg = 0, zero = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> num;
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    cout << "El número de entradas positivas es: " << pos << endl;
    cout << "El número de entradas negativas es: " << neg << endl;
    cout << "El número de entradas que son cero es: " << zero << endl;
    return 0;
}
