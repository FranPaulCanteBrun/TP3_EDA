#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
7. Cree una estructura profesor, con nombre, cargo, materia,
y carga horaria. Declare 2 profesores con estos valores (fuera del main):
Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP,
Matemática, 15hs. El registro profesor debe incluir a otro registro materia.
Luego en el main, muestre ambos profesores concatenados a sus materias.
Sugerencia getline para los char[].
*/

struct materia {
    char nombre[30];
};

struct profesor {
    char nombre[30];
    char cargo[15];
    materia materia_asignada;
    int cargaHoraria;
};

profesor profesor1 = {"Cristina", "Titular", {"Gestión de datos"}, 20};
profesor profesor2 = {"Fabiana", "Jefa TP", {"Matemática"}, 15};

int main() {
    setlocale(LC_ALL, "spanish");

    cout << "Profesor: " << profesor1.nombre << ", materia: " << profesor1.materia_asignada.nombre << endl;
    cout << "Profesor: " << profesor2.nombre << ", materia: " << profesor2.materia_asignada.nombre << endl;

    getch();
    return 0;
}

