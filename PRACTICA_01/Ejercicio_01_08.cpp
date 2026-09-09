//// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Realice un programa que solicite al usuario ingresar una nota numérica en
//el rango de [0 a 100]. El programa debe repetir la solicitud mediante un
//bucle while mientras el usuario ingrese un valor inválido (menor a 0 o mayor
//a 100). Una vez ingresada una nota válida, debe mostrar el mensaje: "Nota
//registrada correctamente".

#include <iostream>

using namespace std;

int main(){

    int numero;
    cout << "Ingrese una nota entre 0 al 100: "; cin >> numero;

    while (numero < 0 || numero > 100)
    {
        cout << "Nota invalida, ingrese una nota entre el 0 al 100: "; cin >> numero;

    }
    cout << "Nota registrada correctamente";

    return 0;
}