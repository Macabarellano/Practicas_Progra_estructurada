// 2022_11_09_011_Recursividad.cpp : 
// Mauricio Cabrera
// En este programa veremos recursividad.

#include <iostream>

void invertir(int num)
{
	std::cout << num % 10;
	if (num > 10)
	{
		invertir(num / 10);
	}
}
int main()
{
	int numerito;
	do
	{
		std::cout << "Ingresa un numero de mas de 4 cifras: ";
		std::cin >> numerito;
		if (numerito < 0)
		{
			std::cout << "\nIngresa un numero entero y positivo de 4 cifras... " << std::endl;
		}
	} while (numerito < 0);
	invertir(numerito);
	std::cout << std:: endl<<std::endl;

}

