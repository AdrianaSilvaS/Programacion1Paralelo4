// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Escribir un programa que de la entrada estándar el precio de un producto y
//muestre en la salida estándar el precio del producto al aplicarle el IVA
//(IVA=13%).

#include <iostream>

using namespace std;

int main(){
    float precio, precioFinal, iva = 0.13;

    cout << "Ingrese el precio inicial: "; cin >> precio;

    precioFinal = precio * (1 + iva);

    cout << "El precio con IVA aplicado es de: " << precioFinal;

    return 0;
}