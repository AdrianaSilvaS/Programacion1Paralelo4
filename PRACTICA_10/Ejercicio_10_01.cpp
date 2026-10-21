// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> generarNombresCompletos(const vector<string>& nombres, const vector<string>& apellidos, int N) {
    vector<string> resultado;
    for (int i = 0; i < N; i++) {
        string nombre = nombres[rand() % nombres.size()];
        string apellido = apellidos[rand() % apellidos.size()];
        resultado.push_back(nombre + " " + apellido);
    }
    return resultado;
}

void mostrarLista(const vector<string>& lista) {
    for (int i = 0; i < lista.size(); i++) {
        cout << lista[i] << endl;
    }
}

int main() {
    srand(time(0));

    vector<string> nombres = {"Juan", "Maria", "Pedro", "Luis", "Ana", "Carlos", "Sofia", "Miguel", "Laura", "Jose"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Diaz", "Torres", "Ramirez", "Castro", "Fernandez", "Suarez", "Martinez"};

    int N;
    cout << "Ingrese cantidad de nombres completos a generar: ";
    cin >> N;

    vector<string> lista = generarNombresCompletos(nombres, apellidos, N);

    cout << "Nombres generados:" << endl;
    mostrarLista(lista);

    return 0;
}