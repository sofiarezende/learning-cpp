#include <iostream>
#include <iomanip>

/*
em C++ Programming Course - Beginner to Advanced ele fala isso
em 4:12:00. fala também sobre número em notação científica e infinidade
*/

int main() {
    
    float numero1 = {1.12345678901234567890f};
    double numero2 = {1.12345678901234567890};
    long double numero3 = {1.12345678901234567890L};

    //print o numero
    std::cout << std::setprecision(20);
    std::cout << "numero 1: " <<numero1 << std::endl;   //apenas os 7 primeiros são precisos
    std::cout << "numero 2: " <<numero2 << std::endl;   //apenas os 17 primeiro são precisos
    std::cout << "numero 3: " <<numero3 << std::endl;   //+20 são precisos

    //print o tamanho
    std::cout << "tamanho do numero 1: " <<sizeof(float) << std::endl;
    std::cout << "tamanho do numero 2: " <<sizeof(double) << std::endl;
    std::cout << "tamanho do numero 3: " <<sizeof(long double) << std::endl;

    #include <limits>

// Adicione isso ao seu código para ver a capacidade real do seu sistema:
    std::cout << "Digitos significativos do long double: " 
             << std::numeric_limits<long double>::digits10 << std::endl;

    return 0;
}