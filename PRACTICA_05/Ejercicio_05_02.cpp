// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

//Crea una función llamada “ModificarValores” que reciba dos parámetros: un entero
//por valor y un entero por referencia. La función debe multiplicar el valor por 2 (para el
//valor pasado por valor) y cambiar el valor por referencia (sumando 10). 

#include <iostream>
using namespace std;

void ModificarValores(int x, int &y) {
    x = x * 2;
    y = y + 10;

    cout << "Dentro de la funcion: x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 5, b = 20;

    cout << "Antes: a = " << a << ", b = " << b << endl;

    ModificarValores(a, b);

    cout << "Despues: a = " << a << ", b = " << b << endl;

    return 0;
}