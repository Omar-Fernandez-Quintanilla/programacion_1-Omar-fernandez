// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:Crea un programa para verificar si un número ingresado es primo.
//-----------------------------------------------------------------------


#include <iostream>

using namespace std;
int main() 
{ 
int esnumero_primo, noesnumero_primo;
int numero, i;
esnumero_primo=0;
noesnumero_primo=0;
cout<<"Ingrese un numero entero positivo: ";
cin>>numero;    
if(numero<=1){
    cout<<"El numero no es primo"<<endl;
}
else{
    for(i=2;i<=numero/2;i++){
        if(numero%i==0){
            noesnumero_primo++;
            
        }
    }
    if(noesnumero_primo==0){
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"El numero no es primo"<<endl;
    }
}
return 0;
}