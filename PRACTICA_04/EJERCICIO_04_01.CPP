// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

// Función que intercambia valores con if
int IntercambiarValores(int a, int b, bool devolverPrimero) {
    if (devolverPrimero == true) {
        return b;  // si quiero el primero, regreso el segundo
    } else {
        return a;  // si quiero el segundo, regreso el primero
    }
}

int main() {
    int x, y;

    cout << "Ingresa el primer valor: ";
    cin >> x;
    cout << "Ingresa el segundo valor: ";
    cin >> y;

    cout << "\nAntes de la llamada a la funcion:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Llamadas a la función
    int nuevoX = IntercambiarValores(x, y, true);   // devuelve b
    int nuevoY = IntercambiarValores(x, y, false);  // devuelve a

    x = nuevoX;
    y = nuevoY;

    cout << "\nDespues de la llamada a la funcion:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
