// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Escribba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir,
//debe leer 6 temperaturas.
//Calcule la temperatura media del dia, la temperatura mas alta y la mas baja

#include<iostream>

using namespace std;

int main(){
    
    float temp = 0, max = -9999, min = 9999, suma = 0, tempMedia = 0;

    for (int i = 0; i < 24; i += 4)
    {
        cout << "Ingrese la temperatura de la hora " << i << " h: "; cin >> temp;
        suma += temp;
        if (temp < min)
        {
            min = temp;
        }
        if (temp > max)
        {
            max = temp;
        }    
    }

    tempMedia = suma / 6;

    cout << "La temperatura media del dia es de: " << tempMedia;
    cout << "\nLa temperatura mas alta del dia es de: " << max;
    cout << "\nLa temperatura mas baja del dia es de: " << min;

    return 0;
}