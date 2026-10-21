// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // para transform
using namespace std;

vector<string> buscarContactos(vector<string> contactos, string prefijo);
string aMinusculas(string texto);

int main() {
    vector<string> contactos = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};
    string prefijo;

    cout << "Ingrese prefijo de búsqueda (3 letras): ";
    cin >> prefijo;

    vector<string> resultados = buscarContactos(contactos, prefijo);

    cout << "Resultados: ";
    for (int i = 0; i < resultados.size(); i++) {
        cout << resultados[i];
        if (i < resultados.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
// Función para pasar un texto a minúsculas
string aMinusculas(string texto) 
{
    string resultado = texto;
    transform(resultado.begin(), resultado.end(), resultado.begin(), ::tolower);
    return resultado;
}

// Función para buscar contactos por prefijo
vector<string> buscarContactos(vector<string> contactos, string prefijo)
{
    vector<string> resultados;
    string prefijoMin = aMinusculas(prefijo);

    for (int i = 0; i < contactos.size(); i++) {
        string nombreMin = aMinusculas(contactos[i]);

        // comparar las primeras letras con el prefijo
        if (nombreMin.substr(0, prefijoMin.size()) == prefijoMin) {
            resultados.push_back(contactos[i]);
        }
    }

    return resultados;
}