// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio:6.Genere N número aleatorios entre 1 y 10000, muéstrelos en pantalla y cuente cuantos números son primos.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, num, contadorPrimos = 0;
    bool esPrimo;

    cout << "Cuantos numeros aleatorios quieres generar: ";
    cin >> N;

    srand(time(0)); 

    for(int i = 1; i <= N; i++) {
        num = 1 + rand() % 10000; 
        cout << "Numero " << i << ": " << num << endl;

        if(num < 2) {
            esPrimo = false;
        } else {
            esPrimo = true;
            for(int j = 2; j * j <= num; j++) {
                if(num % j == 0) {
                    esPrimo = false;
                    break;
                }
            }
        }

        if(esPrimo) {
            contadorPrimos++;
        }
    }

    cout << "\nCantidad de numeros primos: " << contadorPrimos << endl;

    return 0;
}
