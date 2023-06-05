#include <iostream>

using namespace std;

int main() {

    float precioGeneral = 50.00;
    float precioPreferencia = 80.00;
    float precioPlatea = 120.00;
    float precioVip = 160.00;
    float totalPagar = 0.00;
    int cantidadEntradas = 0;
    char seleccionBebida;

    cout << "ENTRADAS DESEADAS: ";
    cin >> cantidadEntradas;

    cout << "SELECCIONE LA UBICACION: " << endl;
    cout << "1 - General" << endl;
    cout << "2 - Preferencia" << endl;
    cout << "3 - Platea" << endl;
    cout << "4 - VIP" << endl;
    cout << "OPCION: " ;

    int opcionUbicacion;
    cin >> opcionUbicacion;

    switch(opcionUbicacion) {
        case 1:
            totalPagar = cantidadEntradas * precioGeneral;
            break;

        case 2:
            totalPagar = cantidadEntradas * precioPreferencia;
            break;

        case 3:
            totalPagar = cantidadEntradas * precioPlatea;
            break;

        case 4:
            totalPagar = cantidadEntradas * precioVip;
            cout << "SELECCIONE LA BEBIDA: " << endl;
            cout << "1 - Gaseosa" << endl;
            cout << "2 - Cerveza" << endl;
            cout << "3 - Agua" << endl;
            cout << "OPCION: ";
            cin >> seleccionBebida;
            break;

        default:
            cout << "Opcion invalida" << endl;
            return 0;
    }

    cout << "Total a pagar: $ " << totalPagar << endl;

    if(opcionUbicacion == 4) {
        switch(seleccionBebida) {
            case '1':
                cout << "Ha seleccionado Gaseosa" << endl;
                break;

            case '2':
                cout << "Ha seleccionado Cerveza" << endl;
                break;

            case '3':
                cout << "Ha seleccionado Agua" << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
                return 0;
        }
    }

    return 0;
}
