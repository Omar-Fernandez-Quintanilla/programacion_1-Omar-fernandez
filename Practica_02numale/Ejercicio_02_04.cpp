// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 4.Escribir un algoritmo que permita adivinar un número que se genere internamente 
//al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en 
//base a aproximaciones para lo cual se dispone de 5 intentos.
//Supongamos que el número “pensado” por la computadora sea el 42.Salida del programa:Estoy pensando un número entre 0 y 50
//Intento 1
//? 25 
//El numero esta entre 25 y 50
//Intento 2
//? 34
//El numero esta entre 34 y 50
//Intento 3
//? 45
//El numero esta entre 34 y 45
//Intento 4
//? 40
//El numero esta entre 40 y 45
//Intento 5
//? 42
//Felicitaciones Adivinaste el número
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numSecreto, intento, minimo = 0, maximo = 50;

    srand(time(0)); 
    numSecreto = rand() % 51; 

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    for(int i = 1; i <= 5; i++) {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> intento;

        if(intento == numSecreto) {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0;
        } else if(intento < numSecreto) {
            minimo = intento;
            cout << "El numero esta entre " << minimo << " y " << maximo << endl;
        } else {
            maximo = intento;
            cout << "El numero esta entre " << minimo << " y " << maximo << endl;
        }
    }

    cout << "Lo siento, no adivinaste. El numero era: " << numSecreto << endl;

    return 0;
}

