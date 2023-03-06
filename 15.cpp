#include <iostream>
using namespace std;

int main() {
    int num, sum = 1, c = 1, paso = 2;

    cout << "Ingrese un número impar : ";
    cin >> num;

    for (int i = 1; i <= (num-1)/2; i++) {
        for (int j = 1; j <= 4; j++) {
            c += paso;
            sum += c;
        }
        paso+= 2;
    }

    cout << "En una espiral de "<<num<<"x"<<num<< " ,la suma es: " << sum << endl;

    return 0;
}
