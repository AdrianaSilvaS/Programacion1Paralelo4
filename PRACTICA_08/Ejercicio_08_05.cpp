// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
using namespace std;

void separarURL(string url);

int main() {
    string url = "https://www.universidad.edu.bo/carreras/sistemas";
    separarURL(url);
    return 0;
}

void separarURL(string url) 
{

    int posProtocolo = url.find("://");
    string protocolo = url.substr(0, posProtocolo);

    int inicioDominio = posProtocolo + 3;
    int posRuta = url.find("/", inicioDominio);
    string dominio = url.substr(inicioDominio, posRuta - inicioDominio);

    string ruta = url.substr(posRuta);

    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Ruta: " << ruta << endl;
}