#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

struct Etapa {
    int horas;
    int minutos;
    int segundos;
};

struct Ciclista {
    char nombre[50];
    int medallas;
    Etapa etapas[100];
    int numEtapas;
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
	
    Ciclista ciclistas[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre completo del ciclista " << i + 1 << ": ";
        cin.getline(ciclistas[i].nombre, 50);

        cout << "Ingrese el numero de medallas del ciclista: ";
        cin >> ciclistas[i].medallas;
        cin.ignore();

        cout << "Ingrese el numero de etapas: ";
        cin >> ciclistas[i].numEtapas;
        cin.ignore();

        for (int j = 0; j < ciclistas[i].numEtapas; j++) {
            cout << "Ingrese el tiempo de la etapa " << j + 1 << " (horas minutos segundos): ";
            cin >> ciclistas[i].etapas[j].horas >> ciclistas[i].etapas[j].minutos >> ciclistas[i].etapas[j].segundos;
            cin.ignore();
        }
    }

    for (int i = 0; i < 3; i++) {
        int totalHoras = 0, totalMinutos = 0, totalSegundos = 0;
        for (int j = 0; j < ciclistas[i].numEtapas; j++) {
            totalSegundos += ciclistas[i].etapas[j].segundos;
            totalMinutos += ciclistas[i].etapas[j].minutos;
            totalHoras += ciclistas[i].etapas[j].horas;
        }
        totalMinutos += totalSegundos / 60;
        totalHoras += totalMinutos / 60;
        totalSegundos %= 60;
        totalMinutos %= 60;

        cout << "\nDatos del ciclista " << i + 1 << ":" << endl;
        cout << "Nombre: " << ciclistas[i].nombre << endl;
        cout << "Medallas: " << ciclistas[i].medallas << endl;
        cout << "Tiempo total: " << totalHoras << " horas, " << totalMinutos << " minutos, " << totalSegundos << " segundos" << endl;
    }

	getch();
    return 0;
}
