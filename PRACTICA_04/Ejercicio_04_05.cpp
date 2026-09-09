// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026
//Verificación de Paridad: Diseñe una función booleana que determine si un número
//entero es par. La función debe retornar true si es par y false en caso contrario.

#include <iostream>
using namespace std;

bool cambioPar(int x);

int main(){

    int numero = 0;
    cout << "Ingrese un numero: "; cin >> numero;
    if (cambioPar(numero))
    {
        cout << "Es par ";
    }
    else
    {
        cout << "Es impar ";
    }

    return 0;
}

bool cambioPar(int x){

    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}