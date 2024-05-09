#include <iostream>
#include <string.h>
#include <string>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
15. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos decimal: 
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros: 
matricula, nombre, sexo, asistencia; hacer que la estructura promedio este 
anidada en la estructura alumno, luego pedir todos los datos para un alumno, 
luego calcular su promedio, y por último imprimir sus datos incluido su promedio. 
Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre.
*/

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno {
    int matricula;
    string nombre;
    char sexo;
    bool asistencia;
    Promedio promedioAlumno;
};

float calcularPromedio(const Alumno& alumno) {
    return (alumno.promedioAlumno.nota1 + alumno.promedioAlumno.nota2 + alumno.promedioAlumno.nota3) / 3;
}

int main() {
	setlocale(LC_ALL, "spanish");

    Alumno alumno1, alumno2;

    cout << "Ingrese los datos del primer alumno:" << endl;
    cout << "Matricula: ";
    cin >> alumno1.matricula;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, alumno1.nombre);
    cout << "Sexo (M/F): ";
    cin >> alumno1.sexo;
    cout << "Asistencia (1 para asistió, 0 para ausente): ";
    cin >> alumno1.asistencia;
    cout << "Nota 1: ";
    cin >> alumno1.promedioAlumno.nota1;
    cout << "Nota 2: ";
    cin >> alumno1.promedioAlumno.nota2;
    cout << "Nota 3: ";
    cin >> alumno1.promedioAlumno.nota3;

    cout << "\nIngrese los datos del segundo alumno:" << endl;
    cout << "Matricula: ";
    cin >> alumno2.matricula;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, alumno2.nombre);
    cout << "Sexo (M/F): ";
    cin >> alumno2.sexo;
    cout << "Asistencia (1 para asistió, 0 para ausente): ";
    cin >> alumno2.asistencia;
    cout << "Nota 1: ";
    cin >> alumno2.promedioAlumno.nota1;
    cout << "Nota 2: ";
    cin >> alumno2.promedioAlumno.nota2;
    cout << "Nota 3: ";
    cin >> alumno2.promedioAlumno.nota3;

    float promedioAlumno1 = calcularPromedio(alumno1);
    float promedioAlumno2 = calcularPromedio(alumno2);

    cout << "\nDatos del primer alumno:" << endl;
    cout << "Matricula: " << alumno1.matricula << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Asistencia: " << (alumno1.asistencia ? "Asistió" : "Ausente") << endl;
    cout << "Promedio: " << promedioAlumno1 << endl;

    cout << "\nDatos del segundo alumno:" << endl;
    cout << "Matricula: " << alumno2.matricula << endl;
    cout << "Nombre: " << alumno2.nombre << endl;
    cout << "Sexo: " << alumno2.sexo << endl;
    cout << "Asistencia: " << (alumno2.asistencia ? "Asistió" : "Ausente") << endl;
    cout << "Promedio: " << promedioAlumno2 << endl;

    if (promedioAlumno1 > promedioAlumno2) {
        cout << "\nEl alumno con mejor promedio es: " << alumno1.nombre << endl;
    } else if (promedioAlumno2 > promedioAlumno1) {
        cout << "\nEl alumno con mejor promedio es: " << alumno2.nombre << endl;
    } else {
        cout << "\nAmbos alumnos tienen el mismo promedio." << endl;
    }

	getch();
    return 0;
}

