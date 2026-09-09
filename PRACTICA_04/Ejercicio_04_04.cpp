// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

// Conversión de Divisas: Escriba una función que convierta un monto dado en
//bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio
//oficial y paralelo

#include <iostream>
using namespace std;

float cambioPar(float x);
float cambioOf(float y);

int main(){

    float usd = 0;
    cout << "Ingrese monto en dolares: "; cin >> usd;

    cout << "Conversion a bolivianos al paralelo es de: " << cambioPar(usd) << endl;
    cout << "Conversion a bolivianos al oficial es de: " << cambioOf(usd) << endl;

    return 0;
}
float cambioPar(float x){

    float paralelo = x * 12.43;
    
    return paralelo;
}
float cambioOf(float y){

    float oficial = y * 12.60;
    
    return oficial;
}