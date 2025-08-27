// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:12)
//--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entre 1 y 5: ";
    cin >> numero;

    while (numero < 1 || numero > 5) {
        cout << "Numero invalido. Intente de nuevo: ";
        cin >> numero;
    }

    cout << "Numero valido: " << numero << endl;

    return 0;
}
