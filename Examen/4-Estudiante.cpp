#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, programa;
    float nota;
    int semestre;

    // Pide al usuario que introduzca los datos

    cout << "nombre del estudiante: ";
    getline(cin, nombre);
    cout << "nota del estudiante: ";
    cin >> nota;
    cout << "programa de estudios del estudiante: ";
    cin >> programa;
    cout << "semestre del estudiante: ";
    cin >> semestre;

    // Imprime los datos del estudiante
    
    cout << "Nombre del estudiante: " << nombre << endl;
    cout << "Nota del estudiante: " << nota << endl;
    cout << "Programa de estudios del estudiante: " << programa << endl;
    cout << "Semestre del estudiante: " << semestre << endl;

    return 0;
}