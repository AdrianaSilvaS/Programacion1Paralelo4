// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>
using namespace std;

void mostrarVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector<int> v;
    int num;

    cout << "Ingrese numeros (max 100, negativo para terminar):" << endl;
    while (v.size() < 100) {
        cin >> num;
        if (num < 0) break;
        v.push_back(num);
    }

    cout << "Elementos introducidos: ";
    mostrarVector(v);

    return 0;
}