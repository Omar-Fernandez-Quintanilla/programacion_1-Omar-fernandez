// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio: Pedir un número al usuario y mostrar su tabla de multiplicar del 1 al 10.


#include <iostream>
using namespace std;
int main() 
{
    int numero, i, resultado;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;    
    if(numero<0){
        cout<<"El numero no es positivo"<<endl;
    }
    else{
        cout<<"Tabla de multiplicar del "<<numero<<":"<<endl;
        for(i=1;i<=10;i++){
            resultado=numero*i;
            cout<<numero<<" x "<<i<<" = "<<resultado<<endl;
        }
    }
    return 0;
}