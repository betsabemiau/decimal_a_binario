// decimal_a_binario.cpp : 
// betsabe salazar
//



#include <iostream>

void convertir(int NumDec)
{

    std::string NumBi;

    std::cout << NumDec % 2;
    if (NumDec > 0)
    {
        if (NumDec % 2 == 0)
        {
            NumBi = "0" + NumBi;
        }
        else
        {
            NumBi = "1" + NumBi;
        }
        NumDec = (int)NumDec / 2;

        convertir(NumDec);


    }
}

int main()
{
    int D;
    do
    {
        std::cout << "ingresa un numero entero positivo, por favor" << std::endl;
        std::cin >> D;
        std::cout << "El numero en binario es: \n";
        if (D < 0)
        {
            std::cout << "Ese no es entero positivo \n";
        }
    } while (D < 0);
    convertir(D);

    std::cout << std::endl << std::endl;
}