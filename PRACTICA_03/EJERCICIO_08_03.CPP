// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

int main() {
    int monto;

    cout << "Ingrese el monto en Bs: ";
    cin >> monto;

    int b200 = monto / 200;
    monto = monto % 200;

    int b100 = monto / 100;
    monto = monto % 100;

    int b50 = monto / 50;
    monto = monto % 50;

    int b20 = monto / 20;
    monto = monto % 20;

    int b10 = monto / 10;
    monto = monto % 10;

    int m5 = monto / 5;
    monto = monto % 5;

    int m2 = monto / 2;
    monto = monto % 2;

    int m1 = monto;

    if (b200 > 0) {
        cout << b200 << " billetes de 200 Bs" << endl;
    }
    if (b100 > 0) {
        cout << b100 << " billetes de 100 Bs" << endl;
    }
    if (b50 > 0) {
        cout << b50 << " billetes de 50 Bs" << endl;
    }
    if (b20 > 0) {
        cout << b20 << " billetes de 20 Bs" << endl;
    }
    if (b10 > 0) {
        cout << b10 << " billetes de 10 Bs" << endl;
    }
    if (m5 > 0) {
        cout << m5 << " monedas de 5 Bs" << endl;
    }
    if (m2 > 0) {
        cout << m2 << " monedas de 2 Bs" << endl;
    }
    if (m1 > 0) {
        cout << m1 << " moneda de 1 Bs" << endl;
    }

    return 0;
}

