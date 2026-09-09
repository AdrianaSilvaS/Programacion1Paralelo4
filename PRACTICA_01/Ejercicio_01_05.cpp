// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Realice un programa que pida al usuario un número entero entre el 1 y el 7.
//Mediante una estructura switch, muestre el día de la semana
//correspondiente (1 para Lunes, 2 para Martes, etc.). Si el número está fuera
//del rango, debe mostrar un mensaje de error.

#include <iostream>

using namespace std;

int main(){

    int numero;
    cout << "Ingrese un numero del 1 al 7: "; cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Dia Lunes";
        break;
    case 2:
        cout << "Dia Martes";
        break;
    case 3:
        cout << "Dia Miercoles";
        break;
    case 4:
        cout << "Dia Jueves";
        break;
    case 5:
        cout << "Dia Viernes";
        break;
    case 6:
        cout << "Dia Sabado";
        break;
    case 7:
        cout << "Dia Domingo";
        break;
    default:
        cout << "Error, numero invalido...";
        break;
    }

    return 0;
}