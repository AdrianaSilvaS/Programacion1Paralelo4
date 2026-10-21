// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SEMANAS = 4, DIAS = 7;

void generarTemperaturas(int t[SEMANAS][DIAS]) {
    srand(time(0));
    for (int i = 0; i < SEMANAS; i++)
        for (int j = 0; j < DIAS; j++)
            t[i][j] = 5 + rand() % 31;
}

void mostrarTemperaturas(int t[SEMANAS][DIAS]) {
    for (int i = 0; i < SEMANAS; i++) {
        for (int j = 0; j < DIAS; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
}

void temperaturaMaxima(int t[SEMANAS][DIAS]) {
    int maxVal = t[0][0], semana = 0, dia = 0;
    for (int i = 0; i < SEMANAS; i++)
        for (int j = 0; j < DIAS; j++)
            if (t[i][j] > maxVal) {
                maxVal = t[i][j];
                semana = i;
                dia = j;
            }
    cout << "Maxima: " << maxVal << " en semana " << semana+1 << ", dia " << dia+1 << endl;
}

void promedioSemanas(int t[SEMANAS][DIAS]) {
    for (int i = 0; i < SEMANAS; i++) {
        int suma = 0;
        for (int j = 0; j < DIAS; j++) suma += t[i][j];
        cout << "Promedio semana " << i+1 << ": " << (double)suma/DIAS << endl;
    }
}

void diasSobre30(int t[SEMANAS][DIAS]) {
    int contador = 0;
    for (int i = 0; i < SEMANAS; i++)
        for (int j = 0; j < DIAS; j++)
            if (t[i][j] > 30) contador++;
    cout << "Dias con temperatura >30C: " << contador << endl;
}

int main() {
    int temperaturas[SEMANAS][DIAS];
    generarTemperaturas(temperaturas);
    mostrarTemperaturas(temperaturas);
    temperaturaMaxima(temperaturas);
    promedioSemanas(temperaturas);
    diasSobre30(temperaturas);
    return 0;
}