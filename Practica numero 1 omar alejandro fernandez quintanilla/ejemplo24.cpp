// Materia: Programación 1, Paralelo 4
// Autor: Omar Alejandro Fernández Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/09/2025
// Número de ejercicio:Mostrar un menú con opciones:1. Opción 12. Opción 23. Opción 30. Salir El programa muestra la opción seleccionada y luego el menú hasta que el usuario elija 0 Salir.
//
#include <iostream>
using namespace std;

int main() {
    int opcion = -1;

    while (opcion != 0) {
        cout << "MENU" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Seleccionaste la opcion 1" << endl;
        } else if (opcion == 2) {
            cout << "Seleccionaste la opcion 2" << endl;
        } else if (opcion == 3) {
            cout << "Seleccionaste la opcion 3" << endl;
        } else if (opcion != 0) {
            cout << "Opcion invalida" << endl;
        }
    }

    cout << "Saliendo del programa" << endl;
    return 0;
}
 