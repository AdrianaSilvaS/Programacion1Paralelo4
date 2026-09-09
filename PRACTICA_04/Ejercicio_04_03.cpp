// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

// Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de
//un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor
//de π.

#include <iostream>
using namespace std;

float volumen(float x, float y);

int main(){

    float radio = 0, altura = 0;
    cout << "Ingrese radio: "; cin >> radio;
    cout << "Ingrese altura : "; cin >> altura;

    cout << "El volumen del cilindro es: " << volumen(radio, altura);

    return 0;
}
float volumen(float x, float y){

    float PI = 3.141592653589793;
    float vol = 1;
    vol = PI * x * x * y;
    return vol;
}