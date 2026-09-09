// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>

using namespace std;

int main(){
    
    int n, suma = 0;
    cout << "Ingrese el numero limite: "; cin >> n;
    for(int i = 1; i <= n; i += 2)
    {

        suma += i;

    }
    cout << "El resultado de la suma de los numeros es de: " << suma;

    return 0;
}