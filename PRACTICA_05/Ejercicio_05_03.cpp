// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creación: 09/09/2026

//Cree una función CalcularPrecioTotal que reciba el precio base de un producto y un
//porcentaje de impuesto. Defina el impuesto con un valor predeterminado del 13%
//(correspondiente al IVA boliviano). Si el usuario solo envía el precio, la función debe
//aplicar automáticamente el 13%.

#include <iostream>
using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 13.0) {
    return precioBase + (precioBase * impuesto / 100.0);
}

int main() {
    double precio;

    cout << "Ingrese el precio base del producto: ";
    cin >> precio;
    cout << "Precio total (con IVA 13%): " << CalcularPrecioTotal(precio) << endl;

    double otroImpuesto;
    cout << "Ingrese otro porcentaje de impuesto: ";
    cin >> otroImpuesto;

    cout << "Precio total (con IVA " << otroImpuesto << "%): "
         << CalcularPrecioTotal(precio, otroImpuesto) << endl;

    return 0;
}