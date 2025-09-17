// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    int n, digito, suma = 0, original;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    original = n;  // guardo el número para no perderlo al final

    while (n > 0) {
        digito = n % 10;
        if (digito != 0) {
            suma = suma + digito;
        }
        n = n / 10;
    }

    int es_primo = 1; // 1 = primo, 0 = no primo
    if (suma < 2) {
        es_primo = 0;
    } else {
        for (int i = 2; i <= suma / 2; i++) {
            if (suma % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo == 1) {
        cout << "La suma de los digitos distintos de cero de " << original
             << " es " << suma << " y es un numero primo" << endl;
    } else {
        cout << "La suma de los digitos distintos de cero de " << original
             << " es " << suma << " y no es primo" << endl;
    }

    return 0;
}

