// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

//Determinación de Mayoría: Cree una función que reciba tres números enteros y
//devuelva el mayor de ellos. El programa principal debe capturar los tres valores y
//mostrar el resultado.

#include <iostream>
using namespace std;

int mayoria(int x, int y, int z);

int main(){

    int numero1 = 0, numero2 = 0, numero3 = 0;
    cout << "Ingrese primer numero: "; cin >> numero1;
    cout << "Ingrese segundo numero: "; cin >> numero2;
    cout << "Ingrese tercer numero: "; cin >> numero3;

    cout << "El numero mayor es: " << mayoria(numero1, numero2, numero3);

    return 0;
}

int mayoria(int x, int y, int z){

    int mayor = x;
    if (x < y)
    {
        mayor = y;
    }
    if (y < z)
    {
        mayor = z;
    }
    return mayor;
}