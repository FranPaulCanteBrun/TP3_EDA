#include <iostream>
#include <cstring>
#include <conio.h>
#include <locale.h>

using namespace std;

struct Corredor {
    char nombre[50];
    int edad;
    char sexo[10];
    char club[50];
    char categoria[20];
};



int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
	
    Corredor corredor;

    cout << "Ingrese el nombre del corredor: ";
    cin.getline(corredor.nombre, 50);

    cout << "Ingrese la edad del corredor: ";
    cin >> corredor.edad;
    cin.ignore();

    cout << "Ingrese el sexo del corredor: ";
    cin.getline(corredor.sexo, 10);

    cout << "Ingrese el club del corredor: ";
    cin.getline(corredor.club, 50);

    if (corredor.edad <= 18) {
        strcpy(corredor.categoria, "Juvenil menor");
    } else if (corredor.edad <= 40) {
        strcpy(corredor.categoria, "Señor menor");
    } else {
        strcpy(corredor.categoria, "Veterano");
    }

    cout << "\nDatos del corredor:" << endl;
    cout << "Nombre: " << corredor.nombre << endl;
    cout << "Edad: " << corredor.edad << endl;
    cout << "Sexo: " << corredor.sexo << endl;
    cout << "Club: " << corredor.club << endl;
    cout << "Categoria: " << corredor.categoria << endl;


	getch();
    return 0;
}
