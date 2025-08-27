// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:8)
//--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout <<"El numero es par"<< endl;
    } else {
        cout <<"El numero es impar"<< endl;
    }

    return 0;
}
