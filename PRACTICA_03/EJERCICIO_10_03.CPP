// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

int main() {
    int km;
    int tarifaBase = 10;
    int precioKm = 2;
    int total;

    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;

    total = tarifaBase + (precioKm * km);

    if (km > 10) {
        total = total - (total * 10 / 100); 
    }

    if (km <= 10) {
        total = total; 
    }

    cout << "El precio del viaje es: " << total << " Bs" << endl;

    return 0;
}
