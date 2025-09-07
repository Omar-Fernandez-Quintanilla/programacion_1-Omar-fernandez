// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 3.Genera un número aleatorio entre 1 y 10 y calcula su factorial.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num, factorial = 1;

    srand(time(0)); 
    num = 1 + rand() % 10; 

    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "Numero aleatorio: " << num << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}

