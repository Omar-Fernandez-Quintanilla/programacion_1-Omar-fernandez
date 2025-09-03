// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:Pedir un número y mostrar su tabla de multiplicar del 1 al 10.Al terminar, preguntar:“¿Desea calcular otra tabla? (s/n)”.Repetir mientras la respuesta sea ‘s’

#include <iostream>
using namespace std;

int main() {
    int opcion = 1;
    while (opcion == 1) {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        cout << "Desea calcular otra tabla? (1 = si, 0 = no): ";
        cin >> opcion;
    }

    cout << "Programa finalizado" << endl;
    return 0;
}
