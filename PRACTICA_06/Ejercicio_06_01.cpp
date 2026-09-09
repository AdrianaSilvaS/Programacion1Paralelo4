// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

#include <iostream>
using namespace std;

void cambio(int cantidad, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno) {
    cien = cantidad / 100;
    cantidad %= 100;

    cincuenta = cantidad / 50;
    cantidad %= 50;

    veinte = cantidad / 20;
    cantidad %= 20;

    diez = cantidad / 10;
    cantidad %= 10;

    cinco = cantidad / 5;
    cantidad %= 5;

    uno = cantidad;
}

int main() {
    int cantidad;
    int cien, cincuenta, veinte, diez, cinco, uno;

    cout << "Ingrese la cantidad en dolares: ";
    cin >> cantidad;

    cambio(cantidad, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "Billetes de 100: " << cien << endl;
    cout << "Billetes de 50: " << cincuenta << endl;
    cout << "Billetes de 20: " << veinte << endl;
    cout << "Billetes de 10: " << diez << endl;
    cout << "Billetes de 5: " << cinco << endl;
    cout << "Billetes de 1: " << uno << endl;

    return 0;
}