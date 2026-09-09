//// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Dado un número entero positivo N de cualquier cantidad de dígitos,
//imprimir una cuadrícula de tamaño d x d por cada dígito d del número.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese el numero para el cuadro: ";
    cin >> numero;

    for (int fila = 0; fila < numero; fila++) {
        for (int col = 0; col < numero; col++) {
            if (fila == 0 || fila == numero-1 || col == 0 || col == numero-1) {
                cout << numero;
            } 
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}