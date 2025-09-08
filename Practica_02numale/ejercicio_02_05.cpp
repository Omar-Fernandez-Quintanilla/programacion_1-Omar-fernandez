// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio:5.Genere N números aleatorios entre 1 y 1000 y realice los siguientes cálculos:
//a. Sumatoria de todos los números
//b. Promedio
//c. Mayor valor generado
//d. Menor valor generado

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, num, suma = 0, mayor, menor, promedio;

    cout << "Cuantos numeros aleatorios quieres generar: ";
    cin >> N;

    srand(time(0)); 

    for(int i = 1; i <= N; i++) {
        num = 1 + rand() % 1000; 
        cout << "Numero " << i << ": " << num << endl;

        suma = suma + num;

        if(i == 1) { 
            mayor = num;
            menor = num;
        } else {
            if(num > mayor) {
                mayor = num;
            }
            if(num < menor) {
                menor = num;
            }
        }
    }

    promedio = suma / N;

    cout << "Resultados:" << endl;
    cout << "a. Sumatoria = " << suma << endl;
    cout << "b. Promedio = " << promedio << endl;
    cout << "c. Mayor valor = " << mayor << endl;
    cout << "d. Menor valor = " << menor << endl;

    return 0;
}
