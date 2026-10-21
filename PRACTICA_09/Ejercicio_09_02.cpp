// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarMatriz(int matriz[50][50], int N, int A, int B) {
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
        }
    }
}

void mostrarMatriz(int matriz[50][50], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int sumaUltimaColumna(int matriz[50][50], int N) {
    int suma = 0;
    for (int i = 0; i < N; i++) suma += matriz[i][N-1];
    return suma;
}

long long productoUltimaFila(int matriz[50][50], int N) {
    long long producto = 1;
    for (int j = 0; j < N; j++) producto *= matriz[N-1][j];
    return producto;
}

void mayorValor(int matriz[50][50], int N, int &maxVal, int &fila, int &col) {
    maxVal = matriz[0][0];
    fila = col = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > maxVal) {
                maxVal = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }
}

double promedioMatriz(int matriz[50][50], int N) {
    int suma = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            suma += matriz[i][j];
    return (double)suma / (N*N);
}

int main() {
    int N, A, B, matriz[50][50];
    cout << "Ingrese tamano N: ";
    cin >> N;
    cout << "Ingrese rango A y B: ";
    cin >> A >> B;

    generarMatriz(matriz, N, A, B);
    mostrarMatriz(matriz, N);

    cout << "Suma ultima columna: " << sumaUltimaColumna(matriz, N) << endl;
    cout << "Producto ultima fila: " << productoUltimaFila(matriz, N) << endl;

    int maxVal, fila, col;
    mayorValor(matriz, N, maxVal, fila, col);
    cout << "Mayor valor: " << maxVal << " en (" << fila << "," << col << ")" << endl;

    cout << "Promedio: " << promedioMatriz(matriz, N) << endl;

    return 0;
}