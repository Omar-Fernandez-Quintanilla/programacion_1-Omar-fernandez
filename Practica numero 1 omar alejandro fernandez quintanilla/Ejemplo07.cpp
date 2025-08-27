// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 27/08/2025
// Número de ejercicio:7)
//-----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese un caracter: ";
    cin >> letra;
    
    if ((letra >='a' ,letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        
        if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' ||
            letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
            cout <<"Es una vocal" <<endl;
        } 
        else {
            cout <<"Es una consonante"<<endl;
        }

    } else {
        cout <<"Es un caracter especial"<< endl;
    }

    return 0;
}
