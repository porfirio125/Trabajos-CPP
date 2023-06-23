#include <iostream>
using namespace std;
 int main() {
    int n = 5, m=3;
    //primer bucle n=5
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }//La salida será un patrón de asteriscos en forma de triángulo ascendente.        * 
                                                                                    // * * 
                                                                                    // * * * 
                                                                                    // * * * * 
cout << endl;


    //segundo bucle m=3
    for (int i = n; i > 0; i--){
        for (int j = m; j > 0; j--) {
            cout << "* ";
            };
        cout << endl;
    }//La salida será un patrón de asteriscos descendente:  
    return 0;                                               // * * * 
    }                                                       // * * * 
                                                            // * * * 
                                                            // * * * 
                                                            // * * *