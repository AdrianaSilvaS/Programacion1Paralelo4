// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>
using namespace std;

int main() {

    int suma = 0, total = 1, n = 0;
    cout << "Ingrese un numero n: "; cin >> n;

    for(int i = 0; i <= n; i++)
    {
        suma += i;
    }

    for (int i = 1; i <= suma; i++)
    {
        total *= i;
    }
    
    cout << "El resultado de la suma fue de: " << suma << "!   " << "Que de resultado da: " << total;

    return 0;
}