// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escribe la siguiente expresion del video en C++

#include <iostream>

using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout << "Ingrese numero a: "; cin >> a;
    cout << "Ingrese numero b: "; cin >> b;
    cout << "Ingrese numero c: "; cin >> c;
    cout << "Ingrese numero d: "; cin >> d;
    cout << "\n\n";

    resultado = a + ((b) / (c - d));
    cout << "El resultado es: " << resultado;
    

    return 0;
}