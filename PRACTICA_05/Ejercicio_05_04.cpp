// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

//Implemente una función llamada calcularArea. Debe sobrecargarla para tres casos
//distintos:
//• Un parámetro (double): Calcula el área de un cuadrado.
//• Dos parámetros (double, double): Calcula el área de un rectángulo.
//• Un parámetro (float, float PI): Calcula el área de un círculo.


#include <iostream>
using namespace std;

double calcularArea(double lado) {
    return lado * lado;
}

double calcularArea(double base, double altura) {
    return base * altura;
}

float calcularArea(float radio, float PI) {
    return PI * radio * radio;
}

int main() {

    cout << "Area del cuadrado (lado=5): " << calcularArea(5.0) << endl;
    cout << "Area del rectangulo (base=4, altura=6): " << calcularArea(4.0, 6.0) << endl;
    cout << "Area del circulo (radio=3, PI=3.1416): " << calcularArea(3.0f, 3.1416f) << endl;

    return 0;
}