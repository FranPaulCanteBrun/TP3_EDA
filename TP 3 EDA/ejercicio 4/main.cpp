#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char pais1[50];
    char pais2[50];

    cout << "Ingrese el primer nombre de un pais: ";
    cin.getline(pais1, 50);

    cout << "Ingrese el segundo nombre de un pais: ";
    cin.getline(pais2, 50);

    int longitud_pais1 = strlen(pais1);
    int longitud_pais2 = strlen(pais2);

    if (longitud_pais1 > longitud_pais2) {
        cout << "El primer pais (" << pais1 << ") tiene un nombre mas largo." << endl;
    } else if (longitud_pais1 < longitud_pais2) {
        cout << "El segundo pais (" << pais2 << ") tiene un nombre mas largo." << endl;
    } else {
        cout << "Ambos paises tienen la misma longitud de nombre." << endl;
    }

    char* contiene_guay = strstr(pais1, "guay");
    if (contiene_guay != NULL) {
        cout << "El primer pais (" << pais1 << ") contiene 'guay'." << endl;
    } else {
        contiene_guay = strstr(pais2, "guay");
        if (contiene_guay != NULL) {
            cout << "El segundo país (" << pais2 << ") contiene 'guay'." << endl;
        } else {
            cout << "Ninguno de los dos paises contiene 'guay'." << endl;
        }
    }

    cout << "Elija una opcion:" << endl;
    cout << "1. Reemplazar el nombre mas corto en el mas largo." << endl;
    cout << "2. Anexar el nombre mas largo al mas corto." << endl;

    int opcion;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            if (longitud_pais1 < longitud_pais2) {
                strcpy(pais2, pais1);
                cout << "Se ha reemplazado el nombre del segundo pais por el del primero." << endl;
                cout << "Nuevo segundo pais: " << pais2 << endl;
            } else {
                strcpy(pais1, pais2);
                cout << "Se ha reemplazado el nombre del primer pais por el del segundo." << endl;
                cout << "Nuevo primer pais: " << pais1 << endl;
            }
            break;
        case 2:
            strcat(pais1, pais2);
            cout << "Se ha anexado el nombre del segundo pais al primero." << endl;
            cout << "Nuevo primer pais: " << pais1 << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
