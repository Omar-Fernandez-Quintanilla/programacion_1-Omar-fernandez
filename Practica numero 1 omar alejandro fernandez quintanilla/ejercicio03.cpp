// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 24/08/2025
// Número de ejercicio:3)
//-----------------------------------------------------------------------


#include <iostream>

using namespace std;
int main() 
{
    int base, altura, area;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
