// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
using namespace std;

int main() {

    int n = 0, suma = 0;
    cout << "Ingrese un numero: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "La suma es: " << suma << endl;

    return 0;
}