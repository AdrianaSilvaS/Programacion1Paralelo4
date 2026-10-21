// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarMatriz(int matriz[50][50], int n, int m) {
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matriz[i][j] = 1 + rand() % 10;
}

void mostrarMatriz(int matriz[50][50], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
}

void buscarPuntoSilla(int matriz[50][50], int n, int m) {
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int valor = matriz[i][j];
            bool menorFila = true;
            for (int k = 0; k < m; k++)
                if (matriz[i][k] < valor) menorFila = false;
            bool mayorCol = true;
            for (int k = 0; k < n; k++)
                if (matriz[k][j] > valor) mayorCol = false;

            if (menorFila && mayorCol) {
                cout << "Punto de silla encontrado: " << valor
                     << " en (" << i << "," << j << ")" << endl;
                encontrado = true;
            }
        }
    }
    if (!encontrado) cout << "No se encontro ningun punto de silla." << endl;
}

int main() {
    int n, m;
    cout << "Ingrese filas y columnas: ";
    cin >> n >> m;

    int matriz[50][50];
    generarMatriz(matriz, n, m);
    mostrarMatriz(matriz, n, m);
    buscarPuntoSilla(matriz, n, m);

    return 0;
}