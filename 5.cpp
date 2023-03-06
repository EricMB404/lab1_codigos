#include <iostream>

using namespace std;

int main() {
    int cantidad;
    cout << "escriba un numero impar: ";
    cin >> cantidad;

    // Imprimir la parte superior del rombo
    for (int i = 1; i <= cantidad; i += 2) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= (cantidad - i) / 2; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Imprimir la parte inferior del rombo
    for (int i = cantidad - 2; i >= 1; i -= 2) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= (cantidad - i) / 2; j++) {
            cout << " ";
        }
        // Imprimir asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
