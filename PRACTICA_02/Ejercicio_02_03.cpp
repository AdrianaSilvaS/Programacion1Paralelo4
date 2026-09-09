// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escrina un programa que calcule x elevado a y, donde son enteros positivos, sin usar la funcion del pow

#include<iostream>

using namespace std;

int main(){
    
    int base = 0, exponente = 0, resultado = 1;

    cout << "Ingrese el numero base: "; cin >> base;
    cout << "Ingrese el numero exponente: "; cin >> exponente;

    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }

    cout << "La nase elevada al exponente es igual a: " << resultado; 

    return 0;
}