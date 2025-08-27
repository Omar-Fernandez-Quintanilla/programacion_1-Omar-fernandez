// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:10)
//--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingrese la nota del estudiante (0-100): ";
    cin >> nota;

    if (nota >= 51) {
        cout <<"Aprobado,";

        if (nota < 60) {
            cout <<"Calificacion = C"<<endl;
        } 
        else if (nota < 70) {
            cout <<"Calificacion = C+"<<endl;
        } 
        else if (nota < 80) {
            cout <<"Calificacion = B"<<endl;
        } 
        else if (nota < 90) {
            cout <<"Calificacion = B+"<<endl;
        } 
        else if (nota < 95) {
            cout <<"Calificacion = A"<<endl;
        } 
        else if (nota <= 100) {
            cout <<"Calificacion = A+"<< endl;
        }
    } 
    else {
        cout <<"Reprobado"<<endl;
    }

    return 0;
}
