// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int main() {
    int minutos, jornada, diferencia;

    cout << "Ingrese el tiempo trabajado (en minutos): ";
    cin >> minutos;

    jornada = 8 * 60; // 8 horas = 480 minutos
    diferencia = minutos - jornada;

    if (diferencia > 0) {
        cout << "Trabajo " << diferencia << " minutos extra" << endl;
    }
    if (diferencia < 0) {
        cout << "Debe " << -diferencia << " minutos a la empresa" << endl;
    }
    if (diferencia == 0) {
        cout << "Cumplio exactamente la jornada laboral" << endl;
    }

    return 0;
}
