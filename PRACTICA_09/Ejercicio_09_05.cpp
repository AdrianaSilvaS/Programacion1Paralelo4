// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

const int FILAS = 5, ASIENTOS = 5;

void mostrarSala(int sala[FILAS][ASIENTOS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < ASIENTOS; j++) {
            if (sala[i][j] == 0) cout << "L ";
            else cout << "O ";
        }
        cout << endl;
    }
}

void comprarEntrada(int sala[FILAS][ASIENTOS]) {
    int f, a;
    cout << "Ingrese fila (0-4) y asiento (0-4): ";
    cin >> f >> a;
    if (sala[f][a] == 0) {
        sala[f][a] = 1;
        cout << "Reserva exitosa." << endl;
    } else {
        cout << "Asiento no disponible." << endl;
    }
}

void estadisticas(int sala[FILAS][ASIENTOS]) {
    int libres = 0, ocupados = 0;
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < ASIENTOS; j++)
            if (sala[i][j] == 0) libres++;
            else ocupados++;
    int total = FILAS * ASIENTOS;
    cout << "Libres: " << (libres*100)/total << "%, Ocupados: " << (ocupados*100)/total << "%" << endl;
}

int main() {
    int sala[FILAS][ASIENTOS] = {0};
    int opcion;
    do {
        cout << "\n1. Mostrar sala\n2. Comprar entrada\n3. Estadisticas\n4. Salir\nOpcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1: mostrarSala(sala); break;
            case 2: comprarEntrada(sala); break;
            case 3: estadisticas(sala); break;
        }
    } while(opcion != 4);
    return 0;
}