// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 20/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sumaNormal (const string& tarjeta);
int sumaDobles (const string& tarjeta);
int sumaT (const string& tarjeta);

int main()
{

    string tarjeta;
    cout << "Ingrese numero de tarjeta de credito: ";
    cin >> tarjeta;

    if (sumaT(tarjeta) % 10 == 0)
    {
        cout << "Tarjeta valida" << endl;
    }
    else
    {
        cout << "Tarjeta invalida" << endl;
    }
    
    

    return 0;
}

int sumaNormal (const string& tarjeta)
{
    int suma = 0;
    for (int i = tarjeta.length() - 1; i >= 0; i -= 2)
    {
        int digito = tarjeta[i] - '0';
        suma += digito;
    }
    return suma;

}

int sumaDobles (const string& tarjeta)
{

    int sumaD = 0;
    for (int i = tarjeta.length() - 2; i >= 0; i -= 2)
    {
        int digito = tarjeta[i] - '0';
        digito *= 2;
        if (digito > 9)
        {
            digito -= 9;
        }
        sumaD += digito;
        
    }
    return sumaD;
    
}

int sumaT (const string& tarjeta)
{

    return sumaDobles(tarjeta) + sumaNormal(tarjeta);

}