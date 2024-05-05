#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
12. Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes Campos: 
Nombre, edad, promedio, pedir datos al usuario para 3 becados, comprobar cuál de los 3 tiene 
el mejor promedio y luego imprimir datos del becado. 
Use strcasecmp para comparar las cadenas y determinar si sus nombres son iguales. Ej.: 
Marco Sosa y Marco Perez.
*/

struct estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    setlocale(LC_ALL, "spanish");

    estudiante becados[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": "; cin.getline(becados[i].nombre, 50);

        cout << "Ingrese la edad de " << becados[i].nombre << ": "; cin >> becados[i].edad;

        cout << "Ingrese el promedio de " << becados[i].nombre << ": "; cin >> becados[i].promedio;

        cin.ignore();
        cout << endl;
    }

    int indMejorProm = 0;
    for (int i = 1; i < 3; ++i) {
        if (becados[i].promedio > becados[indMejorProm].promedio) {
            indMejorProm = i;
        }
    }

    cout << "\nEl estudiante con el mejor promedio es:" << endl;
    cout << "Nombre: " << becados[indMejorProm].nombre << endl;
    cout << "Edad: " << becados[indMejorProm].edad << endl;
    cout << "Promedio: " << becados[indMejorProm].promedio << endl;

    getch();
    return 0;
}

