// condição ? opção 1 : opção 2;
#include <iostream>

int main(){

    bool fome = false;

    fome ? std::cout << "estou com fome "<<std::endl : std::cout << "não estou com fome "<<std::endl;

    return 0;
}