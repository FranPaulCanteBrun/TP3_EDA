
/*
Escribe un programa que pida al conductor la patente del vehículo consistente en 2 letras al inicio, 3 números, y 2 letras
más al final. Al ingresarla, se debe cargar anexando un guion (separada por guiones). Ejemplo: AE-529-QZ. Usa strtok,
para separar los 3 grupos, y mostrarlos individualmente. Validar la longitud de los grupos. Use strlen y strcat.
perdon profe este ejercicio es el 3
*/
#include <iostream>
#include <cstring>


int main() {
    char patente[9]; // Aumentamos en uno el tamaño para incluir el guión adicional
    char *token;

    std::cout << "Ingrese la patente del vehiculo (ejemplo: AE529QZ): ";
    std::cin >> patente;

    // Validar la longitud de la patente
    if (strlen(patente) != 7) {
        std::cout << "La patente ingresada no es válida." << std::endl;
        return 1;
    }

    // Insertar guiones en la patente
    patente[2] = '-';
    patente[4] = '-';

    // Mostrar la patente en el formato deseado
    std::cout << "La patente es: " << patente << std::endl;

    return 0;
}

