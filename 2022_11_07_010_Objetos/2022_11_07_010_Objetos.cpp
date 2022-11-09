// 2022_11_07_050_Objetos.cpp : 
// Mauricio Cabrera 
// Intro a objetos

#include <iostream>
#include <time.h>
struct alumno {
	int defensa;
	int vida;
	float ataque;
	long velocidad;
}jugador;

int main()
{
	srand(time(0));
	alumno flores;
	flores.ataque = rand() % 50;
	flores.vida = rand() % 50;
	flores.defensa = rand() % 50;
	flores.velocidad = rand() % 50;
	
	alumno Juls;
	Juls.ataque = rand() % 50;
	Juls.vida = rand() % 50;
	Juls.defensa = rand() % 50;
	Juls.velocidad = rand() % 50;
	if (flores.ataque < Juls.ataque)
	{
		std::cout << "Juls es mas poderose " << std::endl;
	}
}
