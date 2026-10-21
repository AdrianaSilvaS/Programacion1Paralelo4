// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
using namespace std;

vector<float> leerTiempos(int N) {
    vector<float> tiempos(N);
    cout << "Ingrese " << N << " tiempos (entre 10.00 y 20.00 seg):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> tiempos[i];
    }
    return tiempos;
}

void mostrarVector(const vector<float>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<float>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        float clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = clave;
    }
}

int main() {
    int N;
    cout << "Ingrese cantidad de corredores: ";
    cin >> N;

    vector<float> tiempos = leerTiempos(N);

    cout << "Lista original:" << endl;
    mostrarVector(tiempos);

    insertionSort(tiempos);

    cout << "Lista ordenada (menor a mayor):" << endl;
    mostrarVector(tiempos);

    return 0;
}