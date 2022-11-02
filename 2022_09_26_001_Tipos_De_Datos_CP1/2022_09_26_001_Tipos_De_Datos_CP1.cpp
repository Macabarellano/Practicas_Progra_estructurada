// 2022_09_26_001_Tipos_De_Datos_CP1.cpp : 
// Mauricio Cabrera
// En esta práctica conoceremos la sintaxys para declarar variables
// Solicitar, recibir y mostrar valores.

#include <iostream>
#include <String>

int main()
{
	//Reglas o Sintaxys de declarar variables
	//1)Tipo de dato, 2)Nombre, 3)Inicialización, 4)Fin de comando.
	bool Comprobacion = 0;
	//Sintaxys para Hablar con el usuario
	//1.-Palabra reservada 2.- Concatenar 3.- entre comillas escribir
	//4.- Concatenar 5.- Salto de linea 6.- Fin de comando.
	std::cout << "Hola usuario" << std::endl;
	std::cout << "El valor de la comprobación es: " << Comprobacion 
		<<std::endl;
	//Sintaxys para Pedir Valores
	//1.-Palabra reservada 2.- Concatenar 3.- entre comillas escribir
	//4.- Concatenar 5.- Salto de linea 6.- Fin de comando.
	std::cout << "Hola Ingresa 0 o 1 para saber si es False o True\n";
	//Sintaxys para Recibir Valores
	//1.- Palabra reservada para pedir valores, 2.- Concatenar
	//3.- Variable donde se guarda lo solicitado.
	std::cin >> Comprobacion;
	//Sintaxys para Mostrar Valores
	//1.-Palabra reservada 2.- Concatenar 3.- entre comillas escribir
	//4.- Concatenar 5.- Salto de linea 6.- Fin de comando.
	std::cout << "El valor de la comprobación recibido es: " << 
		Comprobacion<< std::endl;
}
