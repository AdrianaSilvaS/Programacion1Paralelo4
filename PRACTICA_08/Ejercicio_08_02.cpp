// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 20/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

bool esSeguro (const string contrasena);

int main()
{
    
    string contrasena;
    cout << "Ingrese una contrasena: ";
    cin >> contrasena;

    if (esSeguro(contrasena))
    {
        cout << "Contrasena segura";
    }
    else
    {
        cout << "Contrasena insegura";
    }
    
    return 0;
}

bool esSeguro (const string contrasena)
{
    if (contrasena.length() <= 8)
    {
        return false;
    }
    bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneNumeros = false;
    bool tieneEspeciales = false;
    
    for (int i = 0; i < contrasena.length(); i++)
    {
        char c = contrasena[i];
        if (isupper(c)) tieneMayuscula = true;
        else if (islower(c)) tieneMinuscula = true;
        else if (isdigit(c)) tieneNumeros = true;
        else tieneEspeciales = true;
    }
    return (tieneEspeciales, tieneMayuscula, tieneMinuscula, tieneNumeros);
}