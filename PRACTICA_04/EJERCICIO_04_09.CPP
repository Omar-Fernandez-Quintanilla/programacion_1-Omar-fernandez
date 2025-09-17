// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

int main() {
    int n;
    double sueldoBasico, precioProducto;
    double totalVendido, comision, sueldoTotal;

    cout << "Ingrese el numero de vendedoras: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\n--- Vendedora " << i << " ---" << endl;
        cout << "Ingrese el sueldo basico: ";
        cin >> sueldoBasico;
        cout << "Ingrese el precio unitario del producto: ";
        cin >> precioProducto;

        totalVendido = 10 * precioProducto;
        comision = totalVendido * 0.10;
        sueldoTotal = sueldoBasico + comision;

        cout << "Total vendido: " << totalVendido << " Bs" << endl;
        cout << "Comision (10%): " << comision << " Bs" << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << " Bs" << endl;
    }

    return 0;
}
