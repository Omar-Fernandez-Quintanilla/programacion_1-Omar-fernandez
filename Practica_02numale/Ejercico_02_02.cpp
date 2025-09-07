
// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio: 2.Simular el lanzamiento de una moneda n veces y determinar el porcentaje de 
//caras y el porcentaje de cruz.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, moneda, caras = 0, cruces = 0, porcentajeCaras, porcentajeCruces;

    cout << "Cuantas veces lanzarás la moneda: ";
    cin >> n;

    srand(time(0)); 

    for(int i = 1; i <= n; i++) {
        moneda = rand() % 2;  

        if(moneda == 1) {
            caras++;
        } else {
            cruces++;
        }
    }

    porcentajeCaras = (caras * 100) / n;
    porcentajeCruces = (cruces * 100) / n;

    cout << "Caras: " << caras << " == " << porcentajeCaras << "%" << endl;
cout << "Cruces: " << cruces << " == " << porcentajeCruces << "%" << endl;

    return 0;
}
