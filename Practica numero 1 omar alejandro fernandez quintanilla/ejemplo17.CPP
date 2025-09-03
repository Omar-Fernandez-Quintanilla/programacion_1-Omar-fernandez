// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio: Crea un programa para verificar si un número ingresado es amigo.
//-----------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int suma1 = 0; 

   
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma1 += i;
        }
    }

    int suma2 = 0; 
    for (int j = 1; j <= suma1 / 2; j++) {
        if (suma1 % j == 0) {
            suma2 += j;
        }
    }

    if (suma2 == numero && numero != suma1) {
        cout << numero << " y " << suma1 << " son numeros amigos." << endl;
    } else {
        cout << numero << " no tiene numero amigo." << endl;
    }

    return 0;
}
