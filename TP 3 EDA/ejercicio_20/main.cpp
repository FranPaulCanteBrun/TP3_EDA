#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;

/*
20. Una empresa necesita el registro tanto de sus Empleados, como de sus Clientes, 
de ambos requiere los datos de su domicilio Ej. provincia en que viven, el barrio, 
la calle, y altura, si esEdificio o no. Además de sus empleados guardamos el legajo, 
su puesto, y su sueldo. Plantearlo con estructuras anidadas, 
si además tenemos del Cliente el nombre, correo, teléfono, y domicilio de residencia. 
Luego CARGAR arreglos de 10 clientes y 5 empleados. Luego Mostrar en consola:

a. Donde viven los 10 clientes, y su nombre.
b. Datos de los Empleados con sueldos de más de $50000
c. Correo y teléfono, de clientes que viven en edificio
d. Datos de los Empleados con puesto de vendedor
e. Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antigüedad
*/

struct Domicilio {
    string provincia;
    string barrio;
    string calle;
    int altura;
    bool esEdificio;
};

struct Cliente {
    string nombre;
    string correo;
    string telefono;
    Domicilio domicilio;
};

struct Empleado {
    int nroLegajo;
    string puesto;
    float sueldo;
    Domicilio domicilio;
};

int main() {
	setlocale(LC_ALL, "spanish");

    Cliente clientes[10];
    Empleado empleados[5];

    // carga clientes
    for (int i = 0; i < 10; ++i) {
        cout << "nombre del cliente " << i+1 << ": ";
        getline(cin, clientes[i].nombre);
        cout << "e-mail: ";
        getline(cin, clientes[i].correo);
        cout << "telefono: ";
        getline(cin, clientes[i].telefono);
        cout << "provincia de reincidencia: ";
        getline(cin, clientes[i].domicilio.provincia);
        cout << "barrio: ";
        getline(cin, clientes[i].domicilio.barrio);
        cout << "calle: ";
        getline(cin, clientes[i].domicilio.calle);
        cout << "altura: ";
        cin >> clientes[i].domicilio.altura;
        cout << "¿El cliente " << i+1 << " vive en un edificio? (1: Sí, 0: No): ";
        cin >> clientes[i].domicilio.esEdificio;
        cin.ignore();
        cout << endl;
    }
    cout << endl;

    // carga de empleados
    for (int i = 0; i < 5; ++i) {
        cout << "legajo del empleado " << i+1 << ": ";
        cin >> empleados[i].nroLegajo;
        cin.ignore();
        cout << "puesto: ";
        getline(cin, empleados[i].puesto);
        cout << "sueldo: ";
        cin >> empleados[i].sueldo;
        cout << "provincia de reincidencia: ";
        getline(cin, empleados[i].domicilio.provincia);
        cout << "barrio: ";
        getline(cin, empleados[i].domicilio.barrio);
        cout << "calle: ";
        getline(cin, empleados[i].domicilio.calle);
        cout << "altura: ";
        cin >> empleados[i].domicilio.altura;
        cout << "¿El empleado " << i+1 << " vive en un edificio? (1: Sí, 0: No): ";
        cin >> empleados[i].domicilio.esEdificio;
        cin.ignore();
        cout << endl;
    }
    cout << endl;
    

    // clientes y sus nombres
    cout << "\nClientes y su domicilio:\n";
    for (int i = 0; i < 3; ++i) {
        cout << clientes[i].nombre << " vive en " << clientes[i].domicilio.provincia << ", " << clientes[i].domicilio.barrio << ", " << clientes[i].domicilio.calle << " " << clientes[i].domicilio.altura;
        if (clientes[i].domicilio.esEdificio) {
            cout << " (Edificio)";
        }
        cout << endl;
    }
	cout << endl;
	
    // datos emepleados con sueldos mayores a 50k
    cout << "\nEmpleados con sueldos mayores a $50000:\n";
    for (int i = 0; i < 5; ++i) {
        if (empleados[i].sueldo > 50000) {
            cout << "Nro. de legajo: " << empleados[i].nroLegajo << ", Puesto: " << empleados[i].puesto << ", Sueldo: $" << empleados[i].sueldo << endl;
        }
    }
	cout << endl;
	
    // mostramos correo y telefono
    cout << "\nClientes que viven en edificio:\n";
    for (int i = 0; i < 10; ++i) {
        if (clientes[i].domicilio.esEdificio) {
            cout << "Nombre: " << clientes[i].nombre << ", Correo: " << clientes[i].correo << ", Teléfono: " << clientes[i].telefono << endl;
        }
    }
	cout << endl;
	
    // mostramos datos
    cout << "\nEmpleados con puesto de vendedor:\n";
    for (int i = 0; i < 5; ++i) {
        if (empleados[i].puesto == "vendedor") {
            cout << "Nro. de legajo: " << empleados[i].nroLegajo << ", Puesto: " << empleados[i].puesto << ", Sueldo: $" << empleados[i].sueldo << endl;
        }
    }
    cout << endl;

    // reemplazamos nro legajos
    struct Legajo {
        int nroLegajo;
        string nombre;
        string apellido;
        int antiguedad;
    };

    Legajo empleados_con_nombre[5];
    for (int i = 0; i < 5; ++i) {
        empleados_con_nombre[i].nroLegajo = empleados[i].nroLegajo;
        cout << "Ingrese el nombre del empleado " << i+1 << ": ";
        getline(cin, empleados_con_nombre[i].nombre);
        cout << "Ingrese el apellido del empleado " << i+1 << ": ";
        getline(cin, empleados_con_nombre[i].apellido);
        cout << "Ingrese la antigüedad del empleado " << i+1 << ": ";
        cin >> empleados_con_nombre[i].antiguedad;
        cin.ignore();
    }
    cout << endl;

    cout << "\nDatos de empleados con nombre, apellido y antigüedad:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Nro. de legajo: " << empleados_con_nombre[i].nroLegajo << ", Nombre: " << empleados_con_nombre[i].nombre << ", Apellido: " << empleados_con_nombre[i].apellido << ", Antigüedad: " << empleados_con_nombre[i].antiguedad << " años" << endl;
    }

	getch();
    return 0;
}

