// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026


//Realice un programa que lea un valor entero y determine si se trata de un
//número par o impar.


#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero entero: "; cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "Es numero par";
    }
    else if (numero % 2 != 0)
    {
        cout << "Es numero impar";
    }
    
    

    return 0;
}