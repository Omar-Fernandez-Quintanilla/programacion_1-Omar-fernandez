// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

// Función que convierte Celsius a Fahrenheit
int ConvertirCelsiusAFahrenheit(int celsius) {
    int fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

// Función que devuelve la mayor de dos temperaturas
int MayorTemperatura(int t1, int t2) {
    if (t1 > t2) {
        return t1;
    } else {
        return t2;
    }
}

int main() {
    int c1, c2;

    cout << "Ingresa la primera temperatura en Celsius: ";
    cin >> c1;

    cout << "Ingresa la segunda temperatura en Celsius: ";
    cin >> c2;

    int f1 = ConvertirCelsiusAFahrenheit(c1);
    int f2 = ConvertirCelsiusAFahrenheit(c2);

    cout << "\nTemperaturas en Fahrenheit:" << endl;
    cout << "F1 = " << f1 << endl;
    cout << "F2 = " << f2 << endl;

    int mayor = MayorTemperatura(f1, f2);
    cout << "\nLa mayor temperatura es: " << mayor << " F" << endl;

    return 0;
}
