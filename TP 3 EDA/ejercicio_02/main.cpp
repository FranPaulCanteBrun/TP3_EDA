#include <iostream>
#include <string>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
Pevaco. Escribe un programa que pida tres cadenas al usuario, 
y muestre el resultado de concatenar las dos 
primeras letras de las cadenas introducidas, pero además que 
nos indique si las dos primeras cadenas son iguales.
*/

int main() {
    setlocale(LC_ALL, "spanish");
    string cad1, cad2, cad3;

    cout << "Ingrese la primer cadena: "; cin >> cad1;
    cout << "\nIngrese la segunda cadena: "; cin >> cad2;
    cout << "\nIngrese la tercer cadena: "; cin >> cad3;

    cout << cad1.substr(0, 2) << cad2.substr(0, 2) << cad3.substr(0, 2) << endl;

    if (cad1.substr(0, 2) == cad2.substr(0, 2))
        cout << "Las dos primeras cadenas son iguales" << endl;
    else
        cout << "Las dos primeras cadenas son diferentes" << endl;

	getch();
    return 0;
}

