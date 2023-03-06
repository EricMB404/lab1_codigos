#include <iostream>

bool primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int suma_de_primos(int numero) {
    int suma = 0;
    for (int i = 2; i < numero; i++) {
        if (primo(i)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;
    int resultado = suma_de_primos(numero);
    std::cout << "el resultado de la suma es: " << resultado << std::endl;
    return 0;
}
