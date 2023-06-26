#include <iostream>
 using namespace std;
 int main() {
   int m = 30;
   int suma = 0;
   for (int i = 2; i <= m*2; i+=2) {
      suma = suma + i;
   }
   cout << "La suma de los primeros " << m << " números pares es: " << suma << endl;
   return 0;
}