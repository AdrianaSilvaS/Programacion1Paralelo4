// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Realice un programa que solicite al usuario que piense un número entero
//entre el 1 y el 100. El programa debe generar un numero aleatorio en ese
//mismo rango [1-100], e indicarle al usuario si el número que digito es menor
//o mayor al número aleatorio, así hasta que lo adivine. Y por ultimo
//mostrarle el número de intentos que le llevo.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    int numero = 0, numeroSecreto = 0, intentos = 0;

    numeroSecreto = 1 + rand() % 100;

    while (numero != numeroSecreto)
    {
        cout << "Adivine el numero: "; cin >> numero;
        intentos += 1;
        if (numero > numeroSecreto)
        {
            cout << "El numero secreto es menor ";
        }
        else if (numero < numeroSecreto)
        {
            cout << "El numero secreto es mayor ";
        }
    }

    cout << "Numero correcto! El numero fue: " << numeroSecreto << endl;
    cout << "Numero de intentos: " << intentos;

    return 0;
}