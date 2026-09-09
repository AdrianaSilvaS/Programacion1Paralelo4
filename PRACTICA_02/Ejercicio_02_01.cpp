// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
//En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.


#include<iostream>

using namespace std;

int main(){
    
    int i = -1;
    int contador = 0;
    int cero = 0;

    while (i != 0)
    {
        cout << "Ingrese numeros al azar(presione 0 para finalizar): "; cin >> i;
        if (i > cero)
        {
           contador += 1; 
        }
    }
    
    
    cout << "Los numeros mayores que 0 fueron: " << contador;

    return 0;
}