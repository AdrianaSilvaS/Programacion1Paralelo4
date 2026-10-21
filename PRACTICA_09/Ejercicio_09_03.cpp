#include <iostream>
using namespace std;

// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 3

void generarPatron(int matriz[50][50], int n) {
    for (int i = 0; i < n; i++) {
        int inicio = 1 + 2*i;
        for (int j = 0; j < n; j++) {
            matriz[i][j] = inicio + j;
        }
    }
}

void mostrarMatriz(int matriz[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, matriz[50][50];
    cout << "Ingrese tamano n: ";
    cin >> n;

    generarPatron(matriz, n);
    mostrarMatriz(matriz, n);

    return 0;
}