// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Realice un programa que genere N número aleatorios entre 1 y 100.
//Luego el programa debe mostrar la siguiente salida:
//• Suma todos los números ingresados.
//• Suma de todos los números pares.
//• Suma de todos los números impares.
//• Suma de todos los números primos

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int N, numero = 0;
    int sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;

    cout << "Ingrese un numero N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        numero = 1 + rand() % 100;
        cout << "Numero generado: " << numero << endl;

        sumaTotal += numero;

        if (numero % 2 == 0) {
            sumaPares += numero;
        } else {
            sumaImpares += numero;
        }

        int esPrimo = 1;
        if (numero < 2) {
            esPrimo = 0;
        } else {
            for (int j = 2; j * j <= numero; j++) {
                if (numero % j == 0) {
                    esPrimo = 0;
                    break;
                }
            }
        }
        if (esPrimo == 1) {
            sumaPrimos += numero;
        }
    }

    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Suma de primos: " << sumaPrimos << endl;

    return 0;
}
