// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 1.Simular el lanzamiento de un dado n veces y determinar la frecuencia de repetición de las caras pares.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, dado, pares = 0;

    cout << "Cuantas veces lanzarás el dado: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        dado = 1 + rand() % 6;  
        cout << "Lanzamiento " << i << ": " << dado << endl;
        if(dado % 2 == 0) {
            pares = pares + 1;
        }
    }

    cout << "La cantidad de veces que salieron caras pares es: " << pares << endl;

    return 0;
}

