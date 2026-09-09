// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escriba un programa que lea un año (un número entero de 4 dígitos) e
//indique mediante una condición if si el año introducido es bisiesto.

#include <iostream>

using namespace std;

int main(){
    int gestion;
    cout << "Ingrese un anio para verificar si es bisiesto: ";
    cin >> gestion;

    if (gestion >= 1000 && gestion <= 9999)
    {
        if (gestion % 4 == 0 && gestion % 100 != 0 || gestion % 400 == 0)
        {
            cout << "La gestion ingresada es bisiesta";
        }
        else
        {
            cout << "La gestion ingresada no es bisiesta";
        } 
    }
    else
    {
        cout << "Gestion invalida, por favor ingrese una gestion valida...";
    }

    return 0;
} 