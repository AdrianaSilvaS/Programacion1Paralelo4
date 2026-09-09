// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include <iostream>

using namespace std;

int main(){

    float notaEst1 = 0;
    float notaEst2 = 0;
    float notaEst3 = 0;
    float notaEst4 = 0;
    float notaMedia = 0;
            
    cout << "Ingrese nota de alumno 1: "; cin >> notaEst1;
    cout << "Ingrese nota de alumno 2: "; cin >> notaEst2;
    cout << "Ingrese nota de alumno 3: "; cin >> notaEst3;
    cout << "Ingrese nota de alumno 4: "; cin >> notaEst4;

    notaMedia = (notaEst1 + notaEst2 + notaEst3 + notaEst4) / (4);

    cout << "La nota media de los cuatro estudiantes es de: " << notaMedia;

    return 0;
}