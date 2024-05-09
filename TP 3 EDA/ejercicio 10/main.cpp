#include <iostream>
#include <string>

using namespace std;

// Enumeraci�n para los colores de los libros
enum Color {
    ROJO,
    VERDE,
    AZUL
};

// Estructura para representar un libro
struct Libro {
    string titulo;
    string autor;
    int anio;
    Color color;
};

int main() {
    const int num_libros = 3;
    Libro libros[num_libros];

    // Registro de datos para cada libro
    for (int i = 0; i < num_libros; ++i) {
        cout << "Ingrese los datos del libro " << i + 1 << ":" << endl;
        cout << "T�tulo: ";
        cin.ignore(); // Ignorar el salto de l�nea pendiente del buffer
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "A�o: ";
        cin >> libros[i].anio;
        cout << "Color (0: Rojo, 1: Verde, 2: Azul): ";
        int color;
        cin >> color;
        libros[i].color = static_cast<Color>(color);
    }

    // Mostrar los libros seg�n su color
    cout << "\nLibros seg�n su color:" << endl;
    for (int i = 0; i < num_libros; ++i) {
        cout << "\nLibro " << i + 1 << ":" << endl;
        cout << "T�tulo: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "A�o: " << libros[i].anio << endl;
        cout << "Color: ";
        switch (libros[i].color) {
            case ROJO:
                cout << "Rojo" << endl;
                break;
            case VERDE:
                cout << "Verde" << endl;
                break;
            case AZUL:
                cout << "Azul" << endl;
                break;
        }
    }

    return 0;
}

