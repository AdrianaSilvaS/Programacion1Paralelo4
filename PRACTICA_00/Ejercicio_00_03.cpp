// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Ejecutar el ejercicio del video con entradas erroneas para observar los resultados

#include <iostream>

using namespace std;

int main(){
    int edad = 0;
    char sexo;
    float altura;

    cout << "Ingrese su edad: "; cin >> edad;
    cout << "Ingrese su sexo (f/m): "; cin >> sexo;
    cout << "Ingrese su altura: "; cin >> altura;

    cout << "\n\n";

    cout << "a. Edad: " << edad << "anios";
    cout << "\nb. Sexo: " << sexo;
    cout << "\nc. Altura: " << altura << "mts";
    

    return 0;
}