// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Realice un programa que lea de la entrada estándar los siguientes datos de
//una persona:
//a. Edad: dato de tipo entero.
//b. Sexo: dato de tipo carácter.
//c. Altura en metros: dato de tipo real.
//Tras leer los datos, el programa debe mostrarlos en la salida estándar. 

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