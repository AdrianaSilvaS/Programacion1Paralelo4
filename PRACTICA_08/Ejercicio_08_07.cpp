// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> extraerHashtags(string texto);

int main() 
{
    string texto;
    cout << "Ingrese frase: ";
    getline(cin, texto);

    vector<string> hashtags = extraerHashtags(texto);

    cout << "hashtags: [";
    for (int j = 0; j < hashtags.size(); j++) {
        cout << hashtags[j];
        if (j < hashtags.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

vector<string> extraerHashtags(string texto)
{
    vector<string> hashtags;

    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == '#') {
            int inicio = i;
            int fin = i;

            while (fin < texto.size() && texto[fin] != ' ') {
                fin++;
            }

            string hashtag = texto.substr(inicio, fin - inicio);
            hashtags.push_back(hashtag);

            i = fin;
        }
    }

    return hashtags;
}