// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escriba un programa para leer dos valores enteros distintos entre sí, de tal
//forma que si el primer número es mayor al segundo, genere una serie
//descendente, caso contrario, muestre una serie ascendente; el factor de
//incremento o decremento es la unidad.

#include <iostream>
using namespace std;

int main(){

    int numero1 = 0, numero2 = 0;

    cout << "Ingrese primer numero: "; cin >> numero1;
    cout << "Ingrese segundo numero: "; cin >> numero2;

    if (numero1 != numero2)
    {
        if (numero1 > numero2)
        {
            for (int i = numero1; i >= numero2; i--)
            {
                cout << i << endl;
            }
            
        }
        else if (numero1 < numero2)
        {
            for (int i = numero1; i <= numero2; i++)
            {
                cout << i << endl;
            }
            
        } 
    }
    else
    {
        cout << "Error, ambos numeros son iguales...";
    }
    

    return 0;
}