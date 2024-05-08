#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Atleta
struct Atleta {
    string nombre;
    string pais;
    int numero_medallas;
};

int main() {
    int num_atletas;

    // Pedir al usuario el número de atletas
    cout << "Ingrese el numero de atletas: ";
    cin >> num_atletas;

    // Crear un arreglo de estructuras Atleta de tamaño num_atletas
    Atleta atletas[num_atletas];

    // Pedir al usuario que ingrese los datos de cada atleta
    for (int i = 0; i < num_atletas; ++i) {
        cout << "\nDatos del Atleta " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> atletas[i].nombre;
        cout << "Pais: ";
        cin >> atletas[i].pais;
        cout << "Numero de medallas: ";
        cin >> atletas[i].numero_medallas;
    }

    // Encontrar el atleta con el mayor número de medallas
    int max_medallas = 0;
    int indice_max_medallas = 0;
    for (int i = 0; i < num_atletas; ++i) {
        if (atletas[i].numero_medallas > max_medallas) {
            max_medallas = atletas[i].numero_medallas;
            indice_max_medallas = i;
        }
    }

    // Mostrar los datos del atleta con el mayor número de medallas
    cout << "\nAtleta con mas medallas:" << endl;
    cout << "Nombre: " << atletas[indice_max_medallas].nombre << endl;
    cout << "Pais: " << atletas[indice_max_medallas].pais << endl;
    cout << "Numero de medallas: " << atletas[indice_max_medallas].numero_medallas << endl;

    return 0;
}

