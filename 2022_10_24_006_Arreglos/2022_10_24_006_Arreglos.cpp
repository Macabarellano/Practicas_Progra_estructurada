// 2022_10_24_006_Arreglos.cpp : 
// Mauricio Cabrera
// En este programa aprenderemos la sintaxys de los arreglos
// A recorrerlos y a recolectar datos.

#include <iostream>
#include <locale>
int main()
{
	//Tipo de dato; Nombre de la variable; [# de elementos]
	int vec1[10];
	char vec2[50];
	bool vec3[60];
	std::string vec4[100];
	float vec5[2];
	double vec6[5];

	//Arreglos predefinidos
	std::string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
	int vec8[] = {1,2,3,4,5,6,7,8,9};

	std::cout << "El vector 7 en su posición 3 tiene a: " << vec7[2] << std::endl;
	std::cout << "El vector 7 en su posición 2 tiene a: " << vec7[1] << std::endl;

	vec7[0] = "Santiago";
	std::cout << "El vector 7 en su posición 1 tiene a: " << vec7[0] << std::endl;
	//Metodo para recorrer todo el arreglo
	for (int i = 0; i < 5; i++)
	{
		std::cout << "El vector 7 tiene a: " << vec7[i] << " en la posicion " << i <<
			" y es el elemento: " << i + 1 << std::endl;
	}

	int edades[3][2] = { {1,2},{9,8},{14,21} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << "Filas: " << filas << std::endl;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << "Columnas: " << columnas << std::endl;

	int matriz[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//Metodo para rellenar la matriz
	for (int i = 0; i < (sizeof(matriz) / (sizeof(matriz[0]))); i++)
	{
		for (int j = 0; j < (sizeof(matriz[0]) / (sizeof(matriz[0][0]))); j++)
		{
			matriz[i][j] = 0;
		}
	}

	//Metodo para mostrar la matriz
	for (int i = 0; i < (sizeof(matriz) / (sizeof(matriz[0]))); i++)
	{
		for (int j = 0; j < (sizeof(matriz[0]) / (sizeof(matriz[0][0]))); j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}