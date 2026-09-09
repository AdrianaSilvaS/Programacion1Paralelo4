// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Realice un programa que solicite de la entrada un entero del 1 al 10 y
//muestre en la salida su tabla de multiplicar.

#include<iostream>
using namespace std;

int main(){

    int numero = 0;

    cout << "Ingrese un numero para ver su tabla de multiplicacion: "; cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    

    
    return 0;
}