// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio: Crea un programa para calcular la cantidad de dígitos que tiene un número entero.

#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El numero no es positivo" << endl;
    } else {
        if (numero == 0) {
            contador = 1; 
        } else {
            while (numero != 0) {
                numero = numero / 10;
                contador++;
            }
        }
        cout << "El numero tiene " << contador << " digitos" << endl;
    }

    return 0;
}
