#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

/* 
17. Defina una estructura que sirva para representar a una persona. 
La estructura debe contener dos campos: el nombre de la persona y un valor 
de tipo lógico que indica si la persona tiene algún tipo de discapacidad. 
Realice un programa que dado un vector de personas rellene dos nuevos vectores: 
uno que contenga las personas que no tienen ninguna discapacidad y otro que 
contenga las personas con discapacidad.
*/

struct Persona {
    string nombre;
    bool discapacidad;
};

int main() {
    setlocale(LC_ALL, "spanish");

    const int TAMANIO = 5;
    Persona personas[TAMANIO] = {
        {"Juan", false},
        {"María", true},
        {"Carlos", true},
        {"Ana", false},
        {"Pedro", false}
    };

    Persona sinDiscapacidad[TAMANIO];
    Persona conDiscapacidad[TAMANIO];
    int contadorSin = 0;
    int contadorCon = 0;

    for (int i = 0; i < TAMANIO; ++i) {
        if (personas[i].discapacidad) {
            conDiscapacidad[contadorCon++] = personas[i];
        } else {
            sinDiscapacidad[contadorSin++] = personas[i];
        }
    }

    cout << "Personas sin discapacidad:" << endl;
    for (int i = 0; i < contadorSin; ++i) {
        cout << "Nombre: " << sinDiscapacidad[i].nombre << endl;
    }

    cout << "\nPersonas con discapacidad:" << endl;
    for (int i = 0; i < contadorCon; ++i) {
        cout << "Nombre: " << conDiscapacidad[i].nombre << endl;
    }

    getch();
    return 0;
}
