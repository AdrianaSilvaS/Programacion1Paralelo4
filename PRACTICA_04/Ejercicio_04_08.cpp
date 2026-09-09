// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

//Contador de Dígitos: Desarrolle una función que reciba un número entero positivo
//y devuelva la cantidad de dígitos que lo componen (utilizando divisiones
//sucesivas entre 10)

#include <iostream>
using namespace std;

int digitos(int n) {
    if (n == 0) return 1;

    int contador = 0;
    while (n > 0) {
        n = n / 10;
        contador++;
    }
    return contador;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El numero tiene: " << digitos(numero) << " digitos" << endl;

    return 0;
}