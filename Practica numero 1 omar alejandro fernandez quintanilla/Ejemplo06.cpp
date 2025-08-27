// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:6)
//-----------------------------------------------------------------------
#include <iostream>

using namespace std;

int main(){
    int positivo,negativo,cero;
    
    cout<<"Ingrese un numero entero:";
    
    cin>>positivo;
    if(positivo>0){
        cout<<"El numero es positivo"<<endl;
    }
    
    else if(positivo<0){
        cout<<"El numero es negativo"<<endl;
    }
    
    else{
        cout<<"El numero es cero"<<endl;
    }
    return 0;
}
   