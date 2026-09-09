// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

//Crea una función llamada “IntercambiarValores” que reciba dos parámetros por
//referencia y los intercambie entre sí. Imprime los valores antes y después de la llamada a
//la función. 

#include <iostream>
using namespace std;

void IntercambiarValores(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    
    int a = 0, b = 0;
    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    
    cout << "Antes: a = " << a << ", b = " << b << endl;

    IntercambiarValores(a, b);

    cout << "Despues: a = " << a << ", b = " << b << endl;

    return 0;
}
