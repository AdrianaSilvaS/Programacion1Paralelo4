// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
using namespace std;

vector<int> leerVector(int N) {
    vector<int> v(N);
    cout << "Ingrese " << N << " valores:" << endl;
    for (int i = 0; i < N; i++) cin >> v[i];
    return v;
}

vector<int> multiplicarVectores(const vector<int>& v1, const vector<int>& v2) {
    vector<int> resultado(v1.size());
    for (int i = 0; i < v1.size(); i++) {
        resultado[i] = v1[i] * v2[i];
    }
    return resultado;
}

void mostrarVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese dimension N: ";
    cin >> N;

    vector<int> v1 = leerVector(N);
    vector<int> v2 = leerVector(N);
    vector<int> resultado = multiplicarVectores(v1, v2);

    cout << "Resultado de la multiplicacion: ";
    mostrarVector(resultado);

    return 0;
}