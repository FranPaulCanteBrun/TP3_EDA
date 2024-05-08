#include <iostream>
#include <string>

using namespace std;

// Estructura para almacenar la fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Estructura para almacenar los datos de una Persona
struct Persona {
    string nombre;
    int edad;
    float peso;
    Fecha fecha_nacimiento;
};

// Estructura para almacenar los datos de un Trabajador
struct Trabajador {
    Persona persona; // Una estructura de Persona dentro de Trabajador
    float salario;
};

int main() {
    // Inicialización de una Persona
    Persona persona1 = {"Juan", 30, 70.5, {15, 5, 1992}};

    // Inicialización de un Trabajador
    Trabajador trabajador1 = {{"Pedro", 25, 65.2, {10, 8, 1997}}, 1500.0};

    // Mostrar los datos de la Persona
    cout << "Datos de la Persona:" << endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << " años" << endl;
    cout << "Peso: " << persona1.peso << " kg" << endl;
    cout << "Fecha de nacimiento: " << persona1.fecha_nacimiento.dia << "/" << persona1.fecha_nacimiento.mes << "/" << persona1.fecha_nacimiento.anio << endl;

    // Mostrar los datos del Trabajador
    cout << "\nDatos del Trabajador:" << endl;
    cout << "Nombre: " << trabajador1.persona.nombre << endl;
    cout << "Edad: " << trabajador1.persona.edad << " años" << endl;
    cout << "Peso: " << trabajador1.persona.peso << " kg" << endl;
    cout << "Fecha de nacimiento: " << trabajador1.persona.fecha_nacimiento.dia << "/" << trabajador1.persona.fecha_nacimiento.mes << "/" << trabajador1.persona.fecha_nacimiento.anio << endl;
    cout << "Salario: $" << trabajador1.salario << endl;

    return 0;
}

