
/*
El programa de Anses pide N, y carga un arreglo de estructuras los datos de N jubilados (nroCarnet, nombre y apellido,
dni, edad, aportes, montoPensión). Luego que imprima: A- los datos del Jubilado con mayor y menor pensión. B- Aquellos
Jubilados con entre 20 y 30 años de aporte. C- El número de carnet de los Jubilados con pensión inferior a $90000. */
#include <iostream>
#include <limits>

struct Jubilado {
    int nroCarnet;
    std::string nombreApellido;
    int dni;
    int edad;
    int aportes;
    double montoPension;
};

int main() {
    int N;
        std::cout << "Ingrese la cantidad de jubilados: ";
    std::cin >> N;

    Jubilado jubilados[N];
        //esto lo usamos para sacar la maxima pension!
        double maxPension = std::numeric_limits<double>::lowest();
        //numero maximo del double
    double minPension = std::numeric_limits<double>::max();
        int carnetMenorPension, carnetMayorPension;
        int contadorAportes20a30 = 0;
    int contadorPensionMenor90000 = 0;

    for (int i = 0; i < N; ++i) {
            std::cout << "Jubilado " << i + 1 << ":\n";
        std::cout << "Número del carnetts: ";
            std::cin >> jubilados[i].nroCarnet;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Nombre y Apellido: ";
            std::getline(std::cin, jubilados[i].nombreApellido);
        std::cout << "DNI: ";
        std::cin >> jubilados[i].dni;
        std::cout << "Edad: ";
        std::cin >> jubilados[i].edad;
            std::cout << "Aportess: ";
        std::cin >> jubilados[i].aportes;
            std::cout << "Monto de la pensiónn: ";
        std::cin >> jubilados[i].montoPension;

        if (jubilados[i].montoPension > maxPension) {
            maxPension = jubilados[i].montoPension;
            carnetMayorPension = jubilados[i].nroCarnet;
        }
            if (jubilados[i].montoPension < minPension) {
            minPension = jubilados[i].montoPension;
            carnetMenorPension = jubilados[i].nroCarnet;
        }
    //años de aportes

            if (jubilados[i].aportes >= 20 && jubilados[i].aportes <= 30) {
            contadorAportes20a30++;
        }

            if (jubilados[i].montoPension < 90000) {
            contadorPensionMenor90000++;
        }
    }


    std::cout << "\nDatos del jubilado con mayor pensión:\n";
        std::cout << "Número de Carnet: " << carnetMayorPension << std::endl;
    std::cout << "Monto de la pensión: $" << maxPension << std::endl;

    std::cout << "\nDatos del jubilado con menor pensión:\n";
        std::cout << "Número de Carnet: " << carnetMenorPension << std::endl;
    std::cout << "Monto de la pensión: $" << minPension << std::endl;


        std::cout << "\nCantidad de jubilados con entre 20 y 30 años de aporte: " << contadorAportes20a30 << std::endl;


    std::cout << "Número de carnet de jubilados con pensión inferior a $90000: " << contadorPensionMenor90000 << std::endl;

    return 0;
}
