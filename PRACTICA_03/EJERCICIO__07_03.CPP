// Materia: Programación I, Paralelo 4
// Autor:OMAR ALEJANDRTO FERNANDEZ QUINTANILLA
// Carnet: 9127397
// Fecha creación: 05/09/2025
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N, edad, altura;
    int sumaEdades = 0, sumaAlturas = 0;
    int mayores18 = 0, mas175 = 0;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> N;

    srand(time(0));

    for (int i = 1; i <= N; i++) {
        edad = 1 + rand() % 35;       
        altura = 120 + rand() % 81;  

        cout << "Alumno " << i << ": Edad = " << edad << ", Altura = " << altura << endl;

        sumaEdades = sumaEdades + edad;
        sumaAlturas = sumaAlturas + altura;

        if (edad > 18) {
            mayores18 = mayores18 + 1;
        }
        if (altura > 175) {
            mas175 = mas175 + 1;
        }
    }

    cout << "Edad media: " << sumaEdades / N << endl;
    cout << "Altura media: " << sumaAlturas / N << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos con altura mayor a 175: " << mas175 << endl;

    return 0;
}
