//// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escriba un programa que pida un número entero positivo N al usuario y
//mediante un bucle while, determine e imprima cuántos dígitos tiene dicho
//número y la suma de estos

#include <iostream>

using namespace std;

int main(){

    int numero = 0;
    int contador = 0;
    cout << "Ingrese un numero entero positivo: "; cin >> numero;
    if (numero > 0)
    {
        while (numero > 0)
        {
            numero /= 10;
            contador += 1;
        }
        cout << "El numero tiene " << contador << " digitos";
    }
    else
    {
        cout << "Numero invalido....";
    }
    

    return 0;
}