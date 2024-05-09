
/*
Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día. Luego defina un arreglo
en el que cargara todos estos datos para un mes. Realice un programa que cargue la estructura antes definida y calcule
el promedio de temperaturas máximas y el promedio de temperaturas mínimas del mes. */
#include <iostream>

struct TemperaturaDeLosdias {
    int dia;
    double tempMax;
    double tempMin;
};

int main() {
    const int diasEnMes = 5; // ingrese 5 para que no sean 30 temperaturas por dia!
        TemperaturaDeLosdias temperaturas[diasEnMes];
    double sumaTempMax = 0, sumaTempMin = 0;

    // Carga de datos
    for (int i = 0; i < diasEnMes; ++i) {
            std::cout << "Ingrese la temperatura máxima para el día " << i + 1 << ": ";
        std::cin >> temperaturas[i].tempMax;
            std::cout << "Ingrese la temperatura mínima para el día " << i + 1 << ": ";
        std::cin >> temperaturas[i].tempMin;
        temperaturas[i].dia = i + 1;

        sumaTempMax += temperaturas[i].tempMax;
        sumaTempMin += temperaturas[i].tempMin;
    }

        double promedioTempMax = sumaTempMax / diasEnMes;


    double promedioTempMin = sumaTempMin / diasEnMes;



    std::cout << "\nPromedio de temperaturas máximas del mes: " << promedioTempMax << std::endl;
    std::cout << "Promedio de temperaturas mínimas del mes: " << promedioTempMin << std::endl;

    return 0;
}
