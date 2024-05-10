/*
Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior. Llamada Empleado que
guarda nombre, Dirección (de tipo infoDireccion), y salario.
a- Declare un arreglo de 2 empleados. Desde la funcion main:
b- Cargue las estrcuturas Empleado. c- Muestre ambos empleados*/
//perdonm profe este ejercicio es el 8

#include <iostream>
#include <string>

using namespace std;

struct infoDireccion {
    string calle;
    string ciudad;
    string provincia;
};

struct Empleado {
    string nombre;
    infoDireccion direccion;
    float salario;
};

int main() {
    Empleado empleados[2];

    for (int i = 0; i < 2; ++i) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].nombre);

        cout << "Ingrese la calle del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].direccion.calle);

        cout << "Ingrese la ciudad del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].direccion.ciudad);

        cout << "Ingrese la provincia del empleado " << i + 1 << ": ";
        getline(cin, empleados[i].direccion.provincia);

        cout << "Ingrese el salario del empleado " << i + 1 << ": ";
        cin >> empleados[i].salario;


        cin.ignore();
    }

    cout << "\nEmpleados registrados:\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Empleado " << i + 1 << ":\n";
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Dirección: " << empleados[i].direccion.calle << ", " << empleados[i].direccion.ciudad << ", " << empleados[i].direccion.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << endl;
    }

    return 0;
}







