// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
using namespace std;

vector<double> leerPrecios(int N) {
    vector<double> precios(N);
    cout << "Ingrese " << N << " precios:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> precios[i];
    }
    return precios;
}

void mostrarVector(const vector<double>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void selectionSort(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        double temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }
}

double obtenerMasBarato(const vector<double>& v) {
    return v[0];
}

double obtenerMasCaro(const vector<double>& v) {
    return v[v.size()-1];
}

double calcularMediana(const vector<double>& v) {
    int n = v.size();
    if (n % 2 == 1) {
        return v[n/2];
    } else {
        return (v[n/2 - 1] + v[n/2]) / 2.0;
    }
}

int main() {
    int N;
    cout << "Ingrese cantidad de productos: ";
    cin >> N;

    vector<double> precios = leerPrecios(N);

    cout << "Lista original:" << endl;
    mostrarVector(precios);

    selectionSort(precios);

    cout << "Lista ordenada (ascendente):" << endl;
    mostrarVector(precios);

    cout << "Producto mas barato: " << obtenerMasBarato(precios) << endl;
    cout << "Producto mas caro: " << obtenerMasCaro(precios) << endl;
    cout << "Mediana: " << calcularMediana(precios) << endl;

    return 0;
}