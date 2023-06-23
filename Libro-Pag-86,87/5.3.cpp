#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
return EXIT_SUCCESS;
}

//a) ¿Cuál es la salida si se introduce como v alor de n, 0?    La salida sera 1.  


//b) ¿Cuál es la salida si se introduce como v alor de n, 1?    La salida sera 2.


//c) ¿Cuál es la salida si se introduce como v alor de n, 3?    No hay salida el bucle sera infinito.