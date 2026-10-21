// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 8

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<string> dividirPalabras(string texto);
bool detectarPlagio(string A, string B);

int main()
{
    string A, B;

    cout << "Ingrese la primera frase: ";
    getline(cin, A);

    cout << "Ingrese la segunda frase: ";
    getline(cin, B);

    bool plagio = detectarPlagio(A, B);

    if (plagio) {
        cout << "Alerta de plagio: Verdadero" << endl;
    } else {
        cout << "No hay plagio" << endl;
    }

    return 0;
}

vector<string> dividirPalabras(string texto)
{
    vector<string> palabras;
    string palabra;
    stringstream ss(texto);

    while (ss >> palabra) {
        palabras.push_back(palabra);
    }
    return palabras;
}

bool detectarPlagio(string A, string B)
{
    vector<string> palabrasA = dividirPalabras(A);
    vector<string> palabrasB = dividirPalabras(B);

    int coincidencias = 0;

    for (int i = 0; i < palabrasA.size(); i++) {
        for (int j = 0; j < palabrasB.size(); j++) {
            if (palabrasA[i] == palabrasB[j]) {
                coincidencias++;
                break;
            }
        }
    }

    return coincidencias >= 3;
}