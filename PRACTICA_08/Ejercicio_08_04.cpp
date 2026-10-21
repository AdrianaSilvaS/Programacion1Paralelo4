// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 20/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string filtro(string mensaje, const vector<string>& palabras);

int main()
{
    vector<string> palabras = {"tonto", "manco", "noob", "inutil"};
    string mensaje;
    cout << "Ingrese mensaje: ";
    getline(cin, mensaje);
    string nuevaFrase = filtro(mensaje, palabras);

    cout << nuevaFrase << endl;

    return 0;
}

string filtro(string mensaje, const vector<string>& palabras)
{
    for (int i = 0; i < palabras.size(); i++)
    {
        string palabra = palabras[i];
        int positivo = mensaje.find(palabra);

        while (positivo != -1)
        {
        mensaje.replace(positivo, palabra.length(), "***");
        positivo = mensaje.find(palabra, positivo + 3);
        }
    }
    

    return mensaje;
}