#include <iostream>

int main() {
    
    signed int valor1 {10};
    signed int valor2 {-300};

    std::cout << "valor 1: " <<valor1 << std::endl;
    std::cout << "valor 2: " <<valor2 << std::endl;
    std::cout << "tamanho do valor 1: " <<sizeof(valor1) << std::endl;
    std::cout << "tamanho do valor 2: " <<sizeof(valor2) << std::endl;

    unsigned int valor3 {3};
    unsigned int valor4 {5};

    std::cout << "valor 3: " <<valor3 << std::endl;
    std::cout << "valor 4: " <<valor4 << std::endl;
    std::cout << "tamanho do valor 3: " <<sizeof(valor3) << std::endl;
    std::cout << "tamanho do valor 4: " <<sizeof(valor4) << std::endl;


    return 0;
}