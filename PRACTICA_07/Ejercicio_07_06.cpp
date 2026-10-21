// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>
using namespace std;

vector<int> leerVector(int N) {
    vector<int> v(N);
    cout << "Ingrese " << N << " valores:" << endl;
    for (int i = 0; i < N; i++) cin >> v[i];
    return v;
}

vector<int> sumarVectores(const vector<int>& v1, const vector<int>& v2) {
    vector<int> v3(v1.size());
    for (int i = 0; i < v1.size(); i++) {
        v3[i] = v1[i] + v2[i];
    }
    return v3;
}

void mostrarVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int N = 5;
    vector<int> v1 = leerVector(N);
    vector<int> v2 = leerVector(N);
    vector<int> v3 = sumarVectores(v1, v2);

    cout << "Vector resultado: ";
    mostrarVector(v3);

    return 0;
}