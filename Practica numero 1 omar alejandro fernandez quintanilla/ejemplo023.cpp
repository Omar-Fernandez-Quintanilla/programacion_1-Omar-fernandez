// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:. Crea un programa para leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    cout << "Numero invertido: " << invertido << endl;
    return 0;
}

