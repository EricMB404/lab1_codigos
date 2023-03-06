#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            cout <<letra<< "  es una vocal " << endl;
        } else {
            cout <<letra<< " es una consonante " << endl;
        }
    } else {
        cout << "no ingresaste una letra" << endl;
    }

    return 0;
}
