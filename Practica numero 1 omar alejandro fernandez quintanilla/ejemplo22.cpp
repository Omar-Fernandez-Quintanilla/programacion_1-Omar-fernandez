// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:Crea un programa para leer dos números y verificar si uno es múltiplo del otro o no lo es.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (b != 0 && a % b == 0) {
        cout << a << " es multiplo de " << b << endl;
    } else if (a != 0 && b % a == 0) {
        cout << b << " es multiplo de " << a << endl;
    } else {
        cout << "Ninguno es multiplo del otro" << endl;
    }

    return 0;
}
