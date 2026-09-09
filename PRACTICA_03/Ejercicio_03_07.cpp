// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Crear un algoritmo que indique si un número es perfecto o no. Se dice que
//un número es perfecto si la suma de sus divisores es igual al número. Por
//ejemplo, 6 tiene como divisores 1, 2, y 3, entonces 1+2+3=6; el número 6 es
//perfecto. Si el número es 9, tiene como divisores 1, 3, entonces 1+3=4; no
//es perfecto.

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    if (suma == n) {
        cout << n << " es un numero perfecto." << endl;
    } else {
        cout << n << " no es un numero perfecto." << endl;
    }

    return 0;
}
