// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 08/09/2026

//Cálculo de Área Geométrica: Desarrolle una función que reciba la base y la altura
//de un triángulo y devuelva su área (Area= (base x altura) / 2).

#include <iostream>
using namespace std;

int calculoArea(int x, int y);

int main(){

    int base = 0, altura = 0;
    cout << "Ingrese la base del triangulo: "; cin >> base; 
    cout << "Ingrese la altura del triangulo: "; cin >> altura;

    cout << "El area del triangulo es: " << calculoArea(base, altura);

    return 0;
}

int calculoArea(int x, int y){

    int resultado = 0;
    resultado = (x * y) / (2);

    return resultado;

}