#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

struct DiscoCompacto {
	char titulo[100];
	char artista[100];
	int numero_canciones;
	float precio;
	int anioLanzamiento;
};

typedef DiscoCompacto CD;

CD discoGlobal1, discoGlobal2;

int main(int argc, char** argv) {
	
	CD discoLocal;
	
	strcpy(discoGlobal1.titulo, "Master of Puppets");
	strcpy(discoGlobal1.artista, "Metallica");
	discoGlobal1.numero_canciones = 8;
	discoGlobal1.precio = 20.00;
	discoGlobal1.anioLanzamiento = 1986;
	
	strcpy(discoGlobal2.titulo, "Wiped Out!");
	strcpy(discoGlobal2.artista, "The Neighbourhood");
	discoGlobal2.numero_canciones = 12;
	discoGlobal2.precio = 14.99;
	discoGlobal2.anioLanzamiento = 2015;
	
	strcpy(discoLocal.titulo, "An Evening with Silk Sonic");
	strcpy(discoLocal.artista, "Silk Sonic");
	discoLocal.numero_canciones = 10;
	discoLocal.precio = 25.50;
	discoLocal.anioLanzamiento = 2021;
	
	if (strlen(discoGlobal1.artista) > 10) {
		cout << "Artista del disco global 1: " << discoGlobal1.artista << endl;
	}
	
	if (strlen(discoGlobal2.artista) > 10) {
		cout << "Artista del disco global 2: " << discoGlobal2.artista << endl;
	}
	
	if (strlen(discoLocal.artista) > 10) {
		cout << "Artista del disco local: " << discoLocal.artista << endl;
	}
	
	if (strcmp(discoGlobal1.artista, discoLocal.artista) == 0) {
		cout << "El titulo " << discoGlobal1.titulo << " y el titulo " << discoLocal.titulo << " son del mismo artista." << endl; 
	} else {
		cout << "El titulo " << discoGlobal1.titulo << " y el titulo " << discoLocal.titulo << " no son del mismo artista." << endl;  
	}
	
	
	getch();
	return 0;
}
