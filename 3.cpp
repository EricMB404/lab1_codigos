#include <iostream>

using namespace std;

int main() {
    int mes, dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el dia: ";
    cin >> dia;

    if (mes < 1 || mes > 12) {
        cout << "El mes "<<mes<<" es invalido" << endl;
    } else {
        switch (mes) {
            case 2:
                if (dia >= 1 && dia <= 28) {
                    cout <<dia<<"/"<<mes<< " son validos"<< endl;
                } else if (dia == 29) {
                    cout <<dia<<"/"<<mes<< " son validos en año bisiesto" << endl;
                } else {
                    cout<<dia<<"/"<<mes<<" no son validos "  << endl;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (dia >= 1 && dia <= 30) {
                    cout <<dia<<"/"<<mes<< " son validos" << endl;
                } else {
                    cout <<dia<<"/"<<mes<<" no son validos "  << endl;
                }
                break;
            default:
                if (dia >= 1 && dia <= 31) {
                    cout <<dia<<"/"<<mes<< " son validos" << endl;
                } else {
                    cout <<dia<<"/"<<mes<<" no son validos "   << endl;
                }
                break;
        }
    }

    return 0;
}
