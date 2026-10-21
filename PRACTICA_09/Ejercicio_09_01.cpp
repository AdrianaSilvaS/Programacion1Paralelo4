// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano de la matriz (n x n): ";
    cin >> n;

    int matriz[50][50];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = temp;
    }

    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
