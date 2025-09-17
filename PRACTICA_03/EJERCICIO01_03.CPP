// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero es par" << endl;
    }
    if (numero % 2 != 0) {
        cout << "El numero es impar" << endl;
    }

    return 0;
}
