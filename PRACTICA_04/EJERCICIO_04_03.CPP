// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

// Función que modifica valores
int ModificarValores(int valor, int &referencia) {
    valor = valor * 2;       // este se modifica dentro de la función, pero no afecta al original
    referencia = referencia + 10; // este sí cambia porque es por referencia
    return valor;            // devolvemos el valor modificado
}

int main() {
    int x, y;

    cout << "Ingresa el primer valor (por valor): ";
    cin >> x;

    cout << "Ingresa el segundo valor (por referencia): ";
    cin >> y;

    cout << "\nAntes de la llamada a la funcion:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    int resultado = ModificarValores(x, y);

    cout << "\nDespues de la llamada a la funcion:" << endl;
    cout << "x (original) = " << x << endl;
    cout << "x (modificado dentro de la funcion) = " << resultado << endl;
    cout << "y (referencia) = " << y << endl;

    return 0;
}
