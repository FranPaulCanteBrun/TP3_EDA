#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura ventas
struct Ventas {
    float bazar;
    float accesorios;
    float indumentaria;
    float calzados;
};

// Definición de la estructura vendedor
struct Vendedor {
    string nombre;
    int legajo;
    string sector;
    Ventas ventas_rubro;
};

int main() {
    const int num_vendedores = 3;
    Vendedor vendedores[num_vendedores];

    // Cargar los datos de cada vendedor y sus ventas en cada rubro
    for (int i = 0; i < num_vendedores; ++i) {
        cout << "Ingrese los datos del vendedor " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> vendedores[i].nombre;
        cout << "Legajo: ";
        cin >> vendedores[i].legajo;
        cout << "Sector: ";
        cin >> vendedores[i].sector;
        cout << "Ventas en Bazar: ";
        cin >> vendedores[i].ventas_rubro.bazar;
        cout << "Ventas en Accesorios: ";
        cin >> vendedores[i].ventas_rubro.accesorios;
        cout << "Ventas en Indumentaria: ";
        cin >> vendedores[i].ventas_rubro.indumentaria;
        cout << "Ventas en Calzados: ";
        cin >> vendedores[i].ventas_rubro.calzados;
    }

    // Mostrar las ventas de cada vendedor en cada rubro
    for (int i = 0; i < num_vendedores; ++i) {
        cout << "\nVentas de " << vendedores[i].nombre << ":" << endl;
        cout << "Bazar: " << vendedores[i].ventas_rubro.bazar << endl;
        cout << "Accesorios: " << vendedores[i].ventas_rubro.accesorios << endl;
        cout << "Indumentaria: " << vendedores[i].ventas_rubro.indumentaria << endl;
        cout << "Calzados: " << vendedores[i].ventas_rubro.calzados << endl;
    }

    return 0;
}

