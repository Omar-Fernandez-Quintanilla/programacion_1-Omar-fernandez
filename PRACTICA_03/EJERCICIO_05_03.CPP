// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int nota1, nota2, nota3, nota4;
    int promedio;

    srand(time(0)); 

    nota1 = 1 + rand() % 100;
    nota2 = 1 + rand() % 100;
    nota3 = 1 + rand() % 100;
    nota4 = 1 + rand() % 100;

    promedio = (nota1 * 10 + nota2 * 20 + nota3 * 30 + nota4 * 40) / 100;

    cout << "Nota 1 = " << nota1 << " (peso 10)" << endl;
    cout << "Nota 2 = " << nota2 << " (peso 20)" << endl;
    cout << "Nota 3 = " << nota3 << " (peso 30)" << endl;
    cout << "Nota 4 = " << nota4 << " (peso 40)" << endl;

    if (promedio >= 0) {
        cout << "El promedio ponderado es: " << promedio << endl;
    }

    return 0;
}
