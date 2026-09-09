// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

//Cálculo de Física (MRU): Cree una función para calcular la distancia recorrida por
//un objeto, recibiendo como parámetros la velocidad constante y el tiempo (d=v * t)

#include <iostream>
using namespace std;

int MRU(int x, int y);

int main(){

    int velocidad = 0, tiempo = 0;
    cout << "Ingrese velocidad: "; cin >> velocidad;
    cout << "Ingrese tiempo: "; cin >> tiempo;


    cout << "La distancia recorrida por el objeto es de: " << MRU(velocidad, tiempo);

    return 0;
}

int MRU(int x, int y){

    int total = 0;
    
    total = x * y;

    return total;
}