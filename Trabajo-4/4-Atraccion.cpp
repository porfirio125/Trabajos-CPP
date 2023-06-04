#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
const float G = 6.673e-8;
float masa1, masa2, distancia, fuerza;
cout << " Introduzca La Masa De Los Dos Cuerpos En Gramos: " << endl;
cout << "Dato 1: " ;
cin >> masa1;
cout << "Dato 2; " ;
cin >> masa2;
cout<<" Introduzca La Distancia Entre Ellos En Centimetros: " << endl;
cout << "Dato 1: ";
cin >> distancia;
if (( masa1 <= 0 ) || ( masa2 <= 0) || ( distancia <= 0 ))
cout << " no solucion " << endl;
else
{
fuerza = G * masa1 * masa2 / (distancia * distancia);
cout << " La Solucion Es: " << endl;
cout << " Fuerza En Dinas = "<< fuerza << endl;
} 
return 0;
}