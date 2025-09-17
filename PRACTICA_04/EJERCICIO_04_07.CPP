// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main() {
    int m, n, m1, n1, r, MCD, MCM;

    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    m1 = m;
    n1 = n;

    // Algoritmo de Euclides
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    MCD = m;
    MCM = (m1 * n1) / MCD;

    cout << "El MCD es: " << MCD << endl;
    cout << "El MCM es: " << MCM << endl;

    return 0;
}
