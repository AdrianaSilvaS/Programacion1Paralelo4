// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 2

#include <iostream>
using namespace std;

void mostrarVoltios(double voltios[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << voltios[i] << " ";
        if ((i+1) % 3 == 0) cout << endl;
    }
}

int main() {

    double voltios[] = {11.95, 16.32, 12.15,
                        8.22, 15.98, 26.22,
                        13.54, 6.45, 17.59};
    int tam = 9;

    cout << "Valores en el arreglo voltios:" << endl;
    mostrarVoltios(voltios, tam);

    return 0;
}