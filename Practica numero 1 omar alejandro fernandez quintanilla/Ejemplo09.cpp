// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:9)
//--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout <<"Ingrese su edad:";
    cin >> edad;

   if (edad <= 12) {
        
        cout<<"Es un niño"<<endl;
    } 
    else if (edad <= 18) {
        cout<<"Es un adolescente"<<endl;
    } 
    else if (edad <=60) {
        cout<< "Es mayor de edad"<<endl;
    } 
    else {
        cout << "Es un adulto mayor"<<endl;
    }

    return 0;
}