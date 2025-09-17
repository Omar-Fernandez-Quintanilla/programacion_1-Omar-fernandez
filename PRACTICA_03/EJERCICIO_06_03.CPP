// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main() {
    int anio, mes;

    cout << "Ingrese el año: ";
    cin >> anio;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    if (mes == 1) {
        cout << "Enero tiene 31 dias" << endl;
    }
    if (mes == 2) {
        if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0)) {
            cout << "Febrero tiene 29 dias (año bisiesto)" << endl;
        }
        if (!((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0))) {
            cout << "Febrero tiene 28 dias" << endl;
        }
    }
    if (mes == 3) {
        cout << "Marzo tiene 31 dias" << endl;
    }
    if (mes == 4) {
        cout << "Abril tiene 30 dias" << endl;
    }
    if (mes == 5) {
        cout << "Mayo tiene 31 dias" << endl;
    }
    if (mes == 6) {
        cout << "Junio tiene 30 dias" << endl;
    }
    if (mes == 7) {
        cout << "Julio tiene 31 dias" << endl;
    }
    if (mes == 8) {
        cout << "Agosto tiene 31 dias" << endl;
    }
    if (mes == 9) {
        cout << "Septiembre tiene 30 dias" << endl;
    }
    if (mes == 10) {
        cout << "Octubre tiene 31 dias" << endl;
    }
    if (mes == 11) {
        cout << "Noviembre tiene 30 dias" << endl;
    }
    if (mes == 12) {
        cout << "Diciembre tiene 31 dias" << endl;
    }

    return 0;
}
