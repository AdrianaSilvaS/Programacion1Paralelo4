// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)

#include<iostream>

using namespace std;

int main(){
    
    int n, sumaBase = 0, factorial = 1;
    cout << "Ingrese el numero limite para hacer la suma de factoriales: "; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sumaBase += i;
    }

    for(int i = 1; i <= sumaBase; i++)
    {
        factorial *= i;
    }

    cout << "El resultado de la suma de factoriales es de: " << sumaBase << ", el cual su factorial da resultado: " << factorial;

    return 0;
}