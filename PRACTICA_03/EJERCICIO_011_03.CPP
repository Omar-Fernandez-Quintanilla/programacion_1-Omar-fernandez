// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;

int main() {
    int saldo = 1000;
    int retiro;

    cout << "Ingrese la cantidad a retirar: ";
    cin >> retiro;

    if (retiro > saldo) {
        cout << "Saldo insuficiente" << endl;
    }
    if (retiro <= saldo) {
        if (retiro % 10 != 0) {
            cout << "El monto debe ser multiplo de 10" << endl;
        }
        if (retiro % 10 == 0) {
            saldo = saldo - retiro;
            cout << "Retiro exitoso. Saldo actual: " << saldo << " Bs" << endl;
        }
    }

    return 0;
}
