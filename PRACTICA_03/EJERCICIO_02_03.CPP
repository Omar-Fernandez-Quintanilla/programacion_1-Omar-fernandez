// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

int main() {
    int celsius, fahrenheit;

    cout << "Ingrese grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    if (celsius >= -1000) {
        cout << "Equivalen a " << fahrenheit << " grados Fahrenheit" << endl;
    }

    return 0;
}
