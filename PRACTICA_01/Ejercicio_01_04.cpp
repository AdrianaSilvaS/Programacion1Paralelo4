// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//La calificación final de un estudiante es el promedio de tres notas: la nota
//de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
//60% y la nota de participación que cuenta el 10% restante. Escriba un
//programa que lea las tres notas del alumno y escriba su nota final. 

#include <iostream>

using namespace std;

int main(){
    float practica = 0, participacion = 0, teorico = 0, notaFinal;

    cout << "Ingrese la nota de las practicas: "; cin >> practica;
    cout << "Ingrese la nota teorica: "; cin >> teorico;
    cout << "Ingrese la nota de participacion: "; cin >> participacion;

    practica *= 0.30;
    teorico *= 0.60;
    participacion *= 0.10;

    notaFinal = practica + teorico + participacion;

    cout << "La nota final es de: " << notaFinal;

    return 0;
}