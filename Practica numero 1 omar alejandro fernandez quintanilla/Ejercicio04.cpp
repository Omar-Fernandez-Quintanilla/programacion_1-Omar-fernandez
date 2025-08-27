// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 24512548 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 21/08/2025
// Número de ejercicio:4)

#include <iostream>
using namespace std;

int main() {
    int radio, volumen;
    int PI = 31416; 

    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    volumen = (4 * PI * radio * radio * radio) / (3 * 10000);

    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}

