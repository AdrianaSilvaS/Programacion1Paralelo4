// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

string generarNombre(const vector<string>& nombres, const vector<string>& apellidos) {
    string nombre = nombres[rand() % nombres.size()];
    string apellido = apellidos[rand() % apellidos.size()];
    return nombre + " " + apellido;
}
vector<string> llenarLista(int N, const vector<string>& nombres, const vector<string>& apellidos) {
    vector<string> lista(N);
    for (int i = 0; i < N; i++) {
        lista[i] = generarNombre(nombres, apellidos);
    }
    return lista;
}

void mostrarLista(const vector<string>& lista) {
    for (int i = 0; i < lista.size(); i++) {
        cout << lista[i] << endl;
    }
}

void ordenarLista(vector<string>& lista) {
    int n = lista.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (lista[j] < lista[minIndex]) {
                minIndex = j;
            }
        }
        string temp = lista[i];
        lista[i] = lista[minIndex];
        lista[minIndex] = temp;
    }
}

int main() {
    srand(time(0));

    vector<string> nombres = {"Juan", "Maria", "Pedro", "Luis", "Ana", "Carlos", "Sofia", "Miguel", "Laura", "Jose"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Diaz", "Torres", "Ramirez", "Castro", "Fernandez", "Suarez", "Martinez"};

    int N;
    cout << "Ingrese cantidad de estudiantes: ";
    cin >> N;

    vector<string> lista = llenarLista(N, nombres, apellidos);

    cout << "\nLista original:" << endl;
    mostrarLista(lista);

    ordenarLista(lista);

    cout << "\nLista ordenada (A-Z):" << endl;
    mostrarLista(lista);

    return 0;
}