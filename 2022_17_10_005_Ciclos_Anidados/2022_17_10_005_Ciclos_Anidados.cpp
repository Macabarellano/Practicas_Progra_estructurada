// 2022_17_10_005_Ciclos_Anidados.cpp : 
// Mauricio Cabrera
// Aprenderemos a anidar instrucciones.
//

#include <iostream>
#include <string>
int main()
{
	/*
	std::string Color_CP1 = "Rubio";
	std::string Color_CP2 = "Pelirojo";
	std::string Color_OP1 = "Azules";
	std::string Color_OP2 = "Marrones";

	if (Color_CP1 == "Rubio")
	{
		std::cout << "Tu personaje tiene color de cabello Rubio" << std::endl;
		if (Color_OP1 == "Azules")
		{
			std::cout << "Tu personaje tiene los ojos de color azul " << std::endl;
			std::cout << "Tu personaje es Trump";
		}
	}
	*/
	int arreglo[3] = { 1,2,3 };
	int cajas[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//Ciclo para mostrar el arreglo simple
	for (int i = 0; i < 3; i++)
	{
		std::cout << "La posicion " << i << "tiene al valor: " << arreglo[i] << std::endl;
	}
	//Ciclo para mostrar la matriz
	for (int j = 0; j < 3; j++)
	{
		std::cout << "Indice J: "<<j << std::endl;
		for (int k = 0; k < 3; k++)
		{
			std::cout << "Indice K: "<<k << std::endl;
			std::cout << "La posicion [" << j << "," << k << "] Tiene el valor " << cajas[j][k]<<std::endl;
		}
	}
}
