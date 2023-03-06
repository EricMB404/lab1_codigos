#include <iostream>
using namespace std;

int main() {
    int numero, digito, suma = 0;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    //almacen=almacena el valor del dígito elevado a sí mismo.

    while (numero != 0) {
        digito = numero % 10;
        int almacen = 1;
        for (int i = 1; i <= digito; i++) {
            almacen *= digito;
        }
        suma += almacen;
        numero /= 10;
    }

    cout << "La suma de los dígitos elevados a sí mismos es: " << suma << endl;
    return 0;
}
