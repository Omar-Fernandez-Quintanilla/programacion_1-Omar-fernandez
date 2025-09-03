// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:Crea un programa para calcular para multiplicar dos números enteros, sin emplear el operador de la multiplicación, empleando sumas sucesivas

#include <iostream>
using namespace std;

int main() {
    int a, b, resultado = 0;

    cout << "Ingrese el primer numero entero: ";
    cin >> a;
    cout << "Ingrese el segundo numero entero: ";
    cin >> b;

    int positivoB;
    if (b < 0) {
        positivoB = -b;
    } else {
        positivoB = b;
    }

    for (int i = 0; i < positivoB; i++) {
        resultado += a;
    }

    if (b < 0) {
        resultado = -resultado;
    }

    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}

