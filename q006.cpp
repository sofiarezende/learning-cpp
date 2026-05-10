#include <iostream>

int main(){
    int idade;
    std::string nome;

    std::cout << "coloque seu nome e sua idade: "<< std::endl;
    std::cin >> nome;
    std::cin >> idade;

    std::cout << "o seu nome é "<<nome<<" e voce tem "<<idade<<" anos"<<std::endl;


    return 0;
}