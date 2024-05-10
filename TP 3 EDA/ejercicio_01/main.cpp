#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	
	char animal1[43], animal2[43], animal3[43];

    cout << "Ingrese el primer nombre de animal: ";
    cin.getline(animal1, 43);

    cout << "Ingrese el segundo nombre de animal: ";
    cin.getline(animal2, 43);

    cout << "Ingrese el tercer nombre de animal: ";
    cin.getline(animal3, 43);

    char letra1 = toupper(*strchr(animal1, animal1[0]));
    char letra2 = toupper(*strchr(animal2, animal2[0]));
    char letra3 = toupper(*strchr(animal3, animal3[0]));

    int longitud1 = strlen(animal1);
    int longitud2 = strlen(animal2);
    int longitud3 = strlen(animal3);

    cout << "El numero de letras para " << animal1 << " es " << longitud1 << ", letra '" << letra1 << "'" << endl;
    cout << "El numero de letras para " << animal2 << " es " << longitud2 << ", letra '" << letra2 << "'" << endl;
    cout << "El numero de letras para " << animal3 << " es " << longitud3 << ", letra '" << letra3 << "'" << endl;
	
	
	getch();
	return 0;
}
