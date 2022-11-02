// 2022_10_10_003_Decisiones_Multiples_CP3.cpp : 
// MAuricio Cabrera
// En este programa aprenderemos switch case
//

#include <iostream>
#include <string>
int main()
{
	int opc=0;
	std::cout << "Buenas buenas que quieres hacer?  " << std::endl << "Opc 0.- nada"
		<< std::endl << "Opc 1.- Nada menos" << std::endl;
	std::cin >> opc;
	//sintaxys de Switch case
	switch (opc)
	{
	case 0:
		//Codigo de caso 0
		std::cout << "Bienvenido a la opción 0 bracero " << std::endl;
		break;
	case 1:
		//Codigo de caso 1
		std::cout << "Pasele esta usted en la opción #1 " << std::endl;
		break;
	default:
		std::cout << "Sorry chavo te equivocaste" << std::endl;
	}


}
