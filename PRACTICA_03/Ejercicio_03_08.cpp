// Materia: Programación I, Paralelo 4
// Autor: Adriana Wara Silva Siñani
// Carrera del estudiante: Diseño Grafico y Comunicaciones
// Fecha creacion: 06/09/2026

//Al finalizar la simulación de los N productos, el programa debe imprimir en
//consola un reporte con los siguientes datos consolidados:
//• La suma total del dinero ingresado en el día.
//• El monto total acumulado por concepto del IVA (13%) que la
//empresa debe declarar a Impuestos Nacionales.
//• La cantidad total de dinero descontado a favor de los clientes
//durante la jornada.
//• El registro del producto más caro y el producto más barato vendidos
//en el día (montos finales).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> N;

    double sumaTotal = 0;
    double sumaIVA = 0;
    double sumaDescuentos = 0;
    double maxProducto = 0;
    double minProducto = 100000;

    for (int i = 0; i < N; i++) {

        double precioBase = 10 + rand() % 9991;

        double utilidad = precioBase * 0.87;
        double iva = precioBase * 0.13;
        double total = utilidad + iva;

        double descuento = 0;
        if (total > 2500) {
            descuento = total * 0.05;
            total -= descuento;
        }

        sumaTotal += total;
        sumaIVA += iva;
        sumaDescuentos += descuento;

        if (total > maxProducto) maxProducto = total;
        if (total < minProducto) minProducto = total;
    }

    // reporte final
    cout << "=== Reporte del dia ===" << endl;
    cout << "Suma total de ventas: " << sumaTotal << " Bs" << endl;
    cout << "Monto total de IVA: " << sumaIVA << " Bs" << endl;
    cout << "Total de descuentos aplicados: " << sumaDescuentos << " Bs" << endl;
    cout << "Producto mas caro vendido: " << maxProducto << " Bs" << endl;
    cout << "Producto mas barato vendido: " << minProducto << " Bs" << endl;

    return 0;
}