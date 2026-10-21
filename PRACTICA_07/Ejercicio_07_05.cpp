// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>
using namespace std;

vector<int> leerVector(int N) {
    vector<int> v(N);
    cout << "Ingrese " << N << " valores:" << endl;
    for (int i = 0; i < N; i++) cin >> v[i];
    return v;
}

vector<int> combinarVectores(const vector<int>& v1, const vector<int>& v2) {
    vector<int> combinado;
    combinado.insert(combinado.end(), v1.begin(), v1.end());
    combinado.insert(combinado.end(), v2.begin(), v2.end());
    return combinado;
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
    vector<int> combinado = combinarVectores(v1, v2);

    cout << "Vector combinado: ";
    mostrarVector(combinado);

    return 0;
}