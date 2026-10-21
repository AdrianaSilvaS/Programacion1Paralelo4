// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
using namespace std;

vector<int> leerPuntajes(int N) {
    vector<int> puntajes(N);
    cout << "Ingrese " << N << " puntajes (1 a 100):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> puntajes[i];
    }
    return puntajes;
}

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] < v[j+1]) { // mayor a menor
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void mostrarVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void mostrarPodio(const vector<int>& v) {
    cout << "Podio:" << endl;
    for (int i = 0; i < 3 && i < v.size(); i++) {
        cout << "Posicion " << i+1 << ": " << v[i] << endl;
    }
}

int main() {
    int N;
    cout << "Ingrese cantidad de jugadores: ";
    cin >> N;

    vector<int> puntajes = leerPuntajes(N);

    bubbleSort(puntajes);

    cout << "Puntajes de mayor a menor:" << endl;
    mostrarVector(puntajes);

    mostrarPodio(puntajes);

    return 0;
}