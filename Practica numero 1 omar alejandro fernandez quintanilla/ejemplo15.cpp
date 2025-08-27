// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:15)
//--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int N, nota, suma = 0, promedio;

    cout << "Ingrese el numero de notas: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio=suma/N;  

    cout <<"El promedio de las notas es:"<< promedio << endl;

    return 0;
}
