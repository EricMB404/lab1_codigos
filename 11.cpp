#include <iostream>
using namespace std;

int mcm() {
    int numero, cm = 1;
    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 2; i <= numero; i++) {
        int a = i, b = cm;
        while (a != b) {
            if (a > b) {
                a= a - b;
            } else {
                b = b - a;
            }
        }
        cm = (i * cm) / a;
    }

    cout <<"el minimo comun multiplo es: " << cm << endl;

    return 0;
}

