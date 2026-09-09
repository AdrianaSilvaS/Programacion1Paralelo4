// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;

    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}
