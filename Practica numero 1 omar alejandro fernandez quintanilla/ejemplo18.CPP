// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio: Crea un programa para mostrar los primero 100 número primos.


#include <iostream>
using namespace std;

int main() {
    int contador = 0;  

    cout << "Los primeros 100 numeros primos son:" << endl;

    for (int numero = 2; contador < 100; numero++) {
        int divisores = 0;

        
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        
        
        if (divisores == 2) {
            cout << numero << " ";
            contador++;
        }
    }

    cout << endl;
    return 0;
}
