// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>
using namespace std;

vector<float> calcularPromedios(const vector<vector<int>>& notas) {
    vector<float> promedios(notas.size());
    for (int i = 0; i < notas.size(); i++) {
        int suma = 0;
        for (int j = 0; j < notas[i].size(); j++) {
            suma += notas[i][j];
        }
        promedios[i] = (float)suma / notas[i].size();
    }
    return promedios;
}

void ordenarAlfabeticamente(vector<string>& nombres, vector<vector<int>>& notas, vector<float>& promedios) {
    int n = nombres.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (nombres[j] < nombres[minIndex]) {
                minIndex = j;
            }
        }
        // Intercambiar nombre
        string tempNombre = nombres[i];
        nombres[i] = nombres[minIndex];
        nombres[minIndex] = tempNombre;

        // Intercambiar fila de notas
        vector<int> tempNotas = notas[i];
        notas[i] = notas[minIndex];
        notas[minIndex] = tempNotas;

        // Intercambiar promedio
        float tempProm = promedios[i];
        promedios[i] = promedios[minIndex];
        promedios[minIndex] = tempProm;
    }
}

void imprimirBoletin(const vector<string>& nombres, const vector<vector<int>>& notas, const vector<float>& promedios) {
    cout << "Nombre | Nota1 | Nota2 | Nota3 | Promedio" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << " | ";
        for (int j = 0; j < notas[i].size(); j++) {
            cout << notas[i][j] << " | ";
        }
        cout << promedios[i] << endl;
    }
}

int main() {

    vector<string> nombres = {"Carlos", "Ana", "Luis", "Maria", "Pedro"};

    vector<vector<int>> notas = {
        {80, 75, 90},
        {95, 88, 92},
        {70, 65, 78},
        {85, 90, 87},
        {60, 72, 68}
    };

    vector<float> promedios = calcularPromedios(notas);

    cout << "Boletin original:" << endl;
    imprimirBoletin(nombres, notas, promedios);

    ordenarAlfabeticamente(nombres, notas, promedios);

    cout << "\nBoletin ordenado alfabeticamente:" << endl;
    imprimirBoletin(nombres, notas, promedios);

    return 0;
}