// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026
//Sumatoria de Naturales: Realice una función que reciba un número entero
//positivo N y calcule la suma de todos los números desde 1 hasta N mediante un
//ciclo

#include <iostream>
using namespace std;

int sumatoria(int x);

int main(){

    int n = 0;
    cout << "Ingrese un numero N: "; cin >> n;
    cout << "La sumatoria es de: " << sumatoria(n);

    return 0;
}

int sumatoria(int x){

    int total = 0;
    
    for (int i = 1; i <= x; i ++)
    {
        total += i;
    }

    return total;
}