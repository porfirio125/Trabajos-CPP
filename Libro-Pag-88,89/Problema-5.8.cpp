#include <iostream>
#include <cmath>
 using namespace std;
 int main() {
    for (float x = 0; x <= 5; x += 0.5) {
        float y = cos(3*x) - 2*x;
        cout << " X = " << x << ", Y = " << y << endl;
    }
    return 0;
}