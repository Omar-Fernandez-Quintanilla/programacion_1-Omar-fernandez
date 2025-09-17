// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido, resto;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;
    invertido = 0;

    while (numero > 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero = numero / 10;
    }

    if (original == invertido) {
        cout << "El numero es capicua" << endl;
    }
    if (original != invertido) {
        cout << "El numero no es capicua" << endl;
    }

    return 0;
}
