#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "escriba un numero: ";
    cin >> numero;

    int a = 0, b = 1, c = 1, suma = 0;
    while (c < numero) {
        if (c % 2 == 0) {
            suma += c;
        }
        a = b;
        b = c;
        c = a + b;
    }

    cout << "el resultado de la suma es: " << suma << endl;

    return 0;
}
