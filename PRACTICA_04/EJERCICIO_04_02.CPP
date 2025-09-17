// Materia: Programación I, Paralelo 4
// Autor: OMAR ALEJANDRO FERNANDEZ QUINTANILLA
// Fecha creación: 15/09/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

// Función que calcula el volumen de un cilindro (entero)
int CalcularVolumen(int radio, int altura = 10) {
    const int PI = 3; // aproximamos π como 3 para trabajar con enteros
    int volumen = PI * radio * radio * altura;
    return volumen;
}

int main() {
    int r, h;

    cout << "Ingresa el radio: ";
    cin >> r;

    cout << "Ingresa la altura (0 para usar valor por defecto 10): ";
    cin >> h;

    int volumen;

    if (h == 0) {
        volumen = CalcularVolumen(r); // usa altura por defecto
    } else {
        volumen = CalcularVolumen(r, h);
    }

    cout << "\nEl volumen del cilindro es: " << volumen << endl;

    return 0;
}
