// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 21/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
using namespace std;

string crearAnagrama(string palabra) {
    int n = palabra.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (palabra[j] < palabra[minIndex]) {
                minIndex = j;
            }
        }
        
        char temp = palabra[i];
        palabra[i] = palabra[minIndex];
        palabra[minIndex] = temp;
    }
    return palabra;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string resultado = crearAnagrama(palabra);

    cout << "Anagrama generado: " << resultado << endl;

    return 0;
}