// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
using namespace std;

string limpiarEspacios(string texto);

int main() {
    string mensaje;
    cout << "Ingrese su frase: ";
    getline(cin, mensaje);

    string limpio = limpiarEspacios(mensaje);
    cout << "Frase nueva: " << limpio << endl;

    return 0;
}

string limpiarEspacios(string texto) 
{
    int inicio = 0;
    while (inicio < texto.size() && isspace(texto[inicio])) {
        inicio++;
    }

    int fin = texto.size() - 1;
    while (fin >= 0 && isspace(texto[fin])) {
        fin--;
    }

    texto = texto.substr(inicio, fin - inicio + 1);

    string resultado;
    bool espacioPrevio = false;

    for (char c : texto) {
        if (isspace(c)) {
            if (!espacioPrevio) {
                resultado += ' ';
                espacioPrevio = true;
            }
        } else {
            resultado += c;
            espacioPrevio = false;
        }
    }

    return resultado;
}