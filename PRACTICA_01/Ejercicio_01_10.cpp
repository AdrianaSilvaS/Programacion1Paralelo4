// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y
//mostrar el mes al que corresponde.

#include <iostream>

using namespace std;

int main(){

    int numero;
    cout << "Ingrese un numero del 1 al 12: "; cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Enero";
        break;
    case 2:
        cout << "Febrero";
        break;
    case 3:
        cout << "Marzo";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Mayo";
        break;
    case 6:
        cout << "Junio";
        break;
    case 7:
        cout << "Julio";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Septiembre";
        break;
    case 10:
        cout << "Octubre";
        break;
    case 11:
        cout << "Noviembre";
        break;
    case 12:
        cout << "Diciembre";
        break;
    default:
        cout << "Error, numero invalido...";
        break;
    }

    return 0;
}