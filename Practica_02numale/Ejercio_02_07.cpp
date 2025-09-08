// Materia: Programación I, Paralelo 4
// Autor: Omar Alejandro Fernandez Quintanilla
// Carnet: 9127397 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 03/09/2025
// Número de ejercicio:7.En una guardería hay N niños de 1, 2 y 3 años: 
// Los niños de 1 año consumen 6 pañales al día- Los niños de 2 años consumen 3 pañales diarios
//Los niños de 3 años consumen 2 pañales diarios
//Se desea conocer cuántos pañales por día se consumen.
//La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la 
//suma no debe sobrepasar los N niños.
//Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma 
//aleatoria 5 niños de 1 año, 20 niños de 2 años y 3 niños de 3 años.
//De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90 
//PANALES
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    int n1, n2, n3; 
    int consumo;

    cout << "Ingrese la cantidad total de ninos: ";
    cin >> N;

    srand(time(0));

   
    n1 = rand() % (N + 1);         
    n2 = rand() % (N - n1 + 1);    
    n3 = N - (n1 + n2);            

    cout << "\nDistribucion generada:" << endl;
    cout << "Ninos de 1 anio: " << n1 << endl;
    cout << "Ninos de 2 anios: " << n2 << endl;
    cout << "Ninos de 3 anios: " << n3 << endl;

    consumo = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Consumo total de panales por dia: " << consumo << endl;

    return 0;
}
