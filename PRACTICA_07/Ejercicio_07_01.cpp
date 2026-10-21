// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 18/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void listaVoltajes()
{
    double voltajes[100];
    for (int i = 0; i < 100; i++) {
        voltajes[i] = (rand() % (22000 - 2000 + 1) + 2000) / 100.0;
        cout << voltajes[i] << " ";
    }
    cout << endl;
}

void listaTemperaturas()
{
    double temperaturas[50];
    for (int i = 0; i < 50; i++) {
        temperaturas[i] = (rand() % (10000 - 0 + 1)) / 100.0;
        cout << temperaturas[i] << " ";
    }
    cout << endl;
}

void listaCaracteres()
{
    vector<char> caracteres;
    string alfanum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for (int i = 0; i < 30; i++) {
        char c = alfanum[rand() % alfanum.size()];
        caracteres.push_back(c);
    }
    for (char c : caracteres) {
        cout << c << " ";
    }
    cout << endl;
}

void listaAnios()
{
    int anios[100];
    for (int i = 0; i < 100; i++) {
        anios[i] = rand() % (2025 - 1990 + 1) + 1990;
        cout << anios[i] << " ";
    }
    cout << endl;
}

void listaVelocidades()
{
    vector<double> velocidades;
    for (int i = 0; i < 32; i++) {
        double v = (rand() % (30000 - 1000 + 1) + 1000) / 100.0;
        velocidades.push_back(v);
    }
    for (double v : velocidades) {
        cout << v << " ";
    }
    cout << endl;
}

void listaDistancias() 
{
    double distancias[1000];
    for (int i = 0; i < 1000; i++) {
        distancias[i] = (rand() % (100000 - 100 + 1) + 100) / 100.0;
        cout << distancias[i] << " ";
    }
    cout << endl;
}

int main() 
{
    srand(time(0));

    cout << "Voltajes:\n"; listaVoltajes();
    cout << "Temperaturas:\n"; listaTemperaturas();
    cout << "Caracteres:\n"; listaCaracteres();
    cout << "Anios:\n"; listaAnios();
    cout << "Velocidades:\n"; listaVelocidades();
    cout << "Distancias:\n"; listaDistancias();

    return 0;
}
