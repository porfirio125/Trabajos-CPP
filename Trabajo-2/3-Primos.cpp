
#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int num) {
    if(num < 2)
        return false; // Los números menores que 2 no son primos
    for(int i=2; i*i<=num; i++) {
        if(num%i == 0)
            return false; // Si se encuentra un divisor, el número no es primo
    }
    return true; // Si ningún número lo divide, es primo
}

vector<int> encontrarPrimos(int limite) {
    vector<int> primos; // Vector para almacenar los números primos encontrados
    int numero = 2; // Empezamos con el primer número primo
    while(primos.size() < limite) { // Iteramos hasta encontrar los primeros "limite" números primos
        if(esPrimo(numero)) { // Si el número actual es primo, lo agregamos al vector
            primos.push_back(numero);
        }
        numero++;
    }
    return primos;
}

int main() {
    int limite = 100;
    vector<int> primos = encontrarPrimos(limite);
    cout << "Los primeros " << limite << " números primos son: " << endl;
    for(int i=0; i<limite; i++) {
        cout << primos[i] << "\t";
        if((i+1)%10 == 0) // Hacemos un salto de línea cada 10 números
            cout << endl;
    }
    return 0;
}
