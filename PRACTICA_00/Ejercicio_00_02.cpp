// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Ejecutar el ejercicio del video con entradas erroneas para observar los resultados

#include<iostream>

using namespace std;

int main(){
    int a, b, c, d, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout << "Ingrese el cuarto numero: ";
    cin >> d;

    resultado = (a + b) / (c + d);
    
    cout << "El resultado es: " << resultado;

    return 0;
}