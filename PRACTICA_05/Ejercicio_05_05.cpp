// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

// Cree una función void calcularTiempo(int totalSegundos, int &horas, int &minutos, int
//&segundos). La función recibe un número entero de segundos y debe modificar las
//variables de referencia para que contengan las horas, minutos y segundos y desplegarlos
//en el main().


#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int totalSegundos;
    int horas, minutos, segundos;

    cout << "Ingrese el total de segundos: ";
    cin >> totalSegundos;

    calcularTiempo(totalSegundos, horas, minutos, segundos);

    cout << "Equivale a: " << horas << " horas, "
         << minutos << " minutos y "
         << segundos << " segundos." << endl;

    return 0;
}