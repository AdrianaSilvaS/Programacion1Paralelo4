// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Fecha creación: 20/10/2026
// Número de ejercicio: 1


#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int aleatorio (int tamaño);
void mostrarPersona (const vector<string>& nombres, const vector<string> apellidos, const vector<int> edad);
void generarGrupo (const vector<string>& nombres, const vector<string> apellidos, const vector<int> edad, int n);

int main()
{
    
    vector<string> nombres = {"Ana", "Couch", "Robert", "Luis", "Antonio", "Lucia", "Pablo", "Lola", "Linda", "Maria"};
    vector<string> apellidos = {"Quisbert", "Altamirano", "Bradford", "Zuzunaga", "Bianchi", "Garrido", "Novak", "Montemayor", "Malone", "Benavidez"};
    vector<int> edad = {15, 20, 85, 30, 25, 75, 35, 5, 10, 18};

    int n = 0;
    cout << "Cuantas personas quieres generar: ";
    cin >> n;
    
    generarGrupo(nombres, apellidos, edad, n);
    
    return 0;
}

int aleatorio (int tamaño)
{

    return rand() % tamaño;

}

void mostrarPersona (const vector<string>& nombres, const vector<string> apellidos, const vector<int> edad)
{

    int nombreN = aleatorio(nombres.size());
    int apellidoN = aleatorio(apellidos.size());
    int edadN = aleatorio(edad.size());

    cout << nombres [nombreN] << " " << apellidos [apellidoN] << ", " << edad[edadN] << " anios" << endl;

}

void generarGrupo (const vector<string>& nombres, const vector<string> apellidos, const vector<int> edad, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Persona " << i + 1 << ": " << endl;
        mostrarPersona(nombres, apellidos, edad);
    }
    

}