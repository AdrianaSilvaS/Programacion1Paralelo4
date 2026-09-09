// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

//La Universidad Católica Boliviana (UCB) requiere un programa modular para
//analizar el rendimiento académico de N estudiantes en la asignatura de
//Programación I

#include <iostream>
using namespace std;

double calcularNotaFinal(double p1, double p2, double p3, double examen) {
    double promedioParciales = (p1 + p2 + p3) / 3.0;
    return (promedioParciales * 0.5) + (examen * 0.5);
}

int main() {
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    int aprobados = 0, reprobados = 0;
    double sumaNotasFinales = 0;

    for (int i = 1; i <= N; i++) {
        double p1, p2, p3, examen;
        cout << "\nEstudiante " << i << endl;
        cout << "Nota parcial 1: "; cin >> p1;
        cout << "Nota parcial 2: "; cin >> p2;
        cout << "Nota parcial 3: "; cin >> p3;

        if (p1 < 60 || p2 < 60 || p3 < 60) {
            cout << "estudiante reprobado" << endl;
            reprobados++;

        }

        cout << "Nota examen final: "; cin >> examen;

        double notaFinal = calcularNotaFinal(p1, p2, p3, examen);
        cout << "Nota final: " << notaFinal << endl;

        if (notaFinal >= 51) {
            cout << "reprobado" << endl;
            aprobados++;
        } else {
            cout << "aprobado" << endl;
            reprobados++;
        }

        sumaNotasFinales += notaFinal;
    }

    // Reporte final
    cout << "\n=== Reporte General ===" << endl;
    cout << "Porcentaje aprobados: " << (aprobados * 100.0 / N) << "%" << endl;
    cout << "Porcentaje reprobados: " << (reprobados * 100.0 / N) << "%" << endl;
    cout << "Promedio de notas finales: " << (sumaNotasFinales / N) << endl;

    return 0;
}