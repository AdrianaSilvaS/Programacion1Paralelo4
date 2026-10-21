// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> leerCalificaciones(int N) {
    vector<int> calificaciones(N);
    cout << "Ingrese " << N << " calificaciones:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> calificaciones[i];
    }
    return calificaciones;
}

int calcularSuma(const vector<int>& calificaciones) {
    int suma = 0;
    for (int i = 0; i < calificaciones.size(); i++) {
        suma += calificaciones[i];
    }
    return suma;
}

double calcularPromedio(const vector<int>& calificaciones) {
    int suma = calcularSuma(calificaciones);
    return (double)suma / calificaciones.size();
}

vector<double> calcularDesviaciones(const vector<int>& calificaciones, double promedio) {
    vector<double> desviaciones(calificaciones.size());
    for (int i = 0; i < calificaciones.size(); i++) {
        desviaciones[i] = calificaciones[i] - promedio;
    }
    return desviaciones;
}

void mostrarResultados(const vector<int>& calificaciones, const vector<double>& desviaciones) {
    cout << "Calificacion   Desviacion" << endl;
    for (int i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i] << "            " << desviaciones[i] << endl;
    }
}

double calcularVarianza(const vector<double>& desviaciones) {
    double sumaCuadrados = 0;
    for (int i = 0; i < desviaciones.size(); i++) {
        sumaCuadrados += pow(desviaciones[i], 2);
    }
    return sumaCuadrados / desviaciones.size();
}

int main() {
    int N;
    cout << "Ingrese cantidad de calificaciones: ";
    cin >> N;

    vector<int> calificaciones = leerCalificaciones(N);

    int suma = calcularSuma(calificaciones);
    double promedio = calcularPromedio(calificaciones);
    vector<double> desviaciones = calcularDesviaciones(calificaciones, promedio);
    double varianza = calcularVarianza(desviaciones);

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    mostrarResultados(calificaciones, desviaciones);
    cout << "Varianza: " << varianza << endl;

    return 0;
}