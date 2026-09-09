// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Realice un programa que calcule la descomposicion en factores primos de un numero entero

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;

    cout << "La descomposicion en factores primos de " << n << " es: ";

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    cout << endl;
    return 0;
}