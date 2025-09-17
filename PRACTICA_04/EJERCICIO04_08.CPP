// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, precio;
    double suma = 0, total, iva, descuento = 0;

    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    srand(time(0)); // inicializar generador aleatorio

    cout << "\nPrecios generados:\n";
    for (int i = 1; i <= n; i++) {
        precio = 20 + rand() % 31; 
        cout << "Producto " << i << ": " << precio << " Bs" << endl;
        suma = suma + precio;
    }

    iva = suma * 0.13;
    total = suma + iva;

    if (total > 2500) {
        descuento = total * 0.05;
        total = total - descuento;
    }

    cout << "\nSuma de ventas (sin IVA): " << suma << " Bs" << endl;
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Descuento aplicado: " << descuento << " Bs" << endl;
    cout << "Total final a cobrar: " << total << " Bs" << endl;
    cout << "IVA a declarar al SIN: " << iva << " Bs" << endl;

    return 0;
}
