// Materia: Programacion I, Paralelo 4
// Autor: Adriana Wara Silva Sinani
// Carrera del estudiante: Diseno Grafico y Comunicaciones
// Fecha creacion: 05/09/2026

//Ejecutar el ejercicio del video con entradas erroneas para observar los resultados

#include<iostream>

using namespace std;

int main(){
    float precioInicial = 0, precioFinal = 0, iva = 1.12;

    cout<< "Ponga el precio inicial para aplicarle el IVA: ";
    cin>> precioInicial; 

    precioFinal = precioInicial * iva;
    cout<< "Precio final con IVA aplicado es: "<< precioFinal << endl;
    
    return 0;
}