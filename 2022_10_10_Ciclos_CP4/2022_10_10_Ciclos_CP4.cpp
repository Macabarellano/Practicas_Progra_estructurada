// 2022_10_10_Ciclos_CP4.cpp : 
// Mauricio Cabrera
// Ciclos While Do-While For

#include <iostream>

int main()
{
    bool seguir = true;
    int contador = 0;
    //While se ejecutará siempre que la sentencia sea verdadera
    while (seguir)
    {
        std::cout << "# " << contador << std::endl;
        contador = contador + 1;
        if (contador == 100)
        {
            seguir = false;
        }
    }
    //Do While se ejecuta por lo menos 1 vez.
    contador = 0;
    do
    {
        std::cout << "do# " << contador << std::endl;
        contador = contador + 1;
    } while (contador <= 100);
    //For Es la mayor sentencia de control
    for (int cont = 0; cont < 100; cont++)
    {
        std::cout << "for# " << cont << std::endl;
    }
}
