// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 5


#include <iostream>
using namespace std;

int main() {
    int horasTrabajadas, tarifa, bonificacion;
    int salario = 0, salarioBonificacion = 0;

    cout << "Ingresa las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingresa la tarifa por hora: ";
    cin >> tarifa;

    cout << "Ingresa la bonificacion por hora extra: ";
    cin >> bonificacion;

    // Calculamos salario normal
    if (horasTrabajadas <= 8) {
        salario = horasTrabajadas * tarifa;
        salarioBonificacion = 0; // no hay bonificación
    } else {
        salario = horasTrabajadas * tarifa;
        int horasExtra = horasTrabajadas - 8;
        salarioBonificacion = horasExtra * bonificacion;
    }

    cout << "\nSalario del trabajador: " << salario << endl;

    if (salarioBonificacion > 0) {
        cout << "Salario por bonificacion: " << salarioBonificacion << endl;
    } else {
        cout << "No hay bonificacion." << endl;
    }

    return 0;
}
