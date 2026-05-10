#include <iostream>

int main(){
    //nao imprime nome completo

    /*
    int idade;
    std::string nome_completo;

    //pegar informações com espaços:
    //usando std::getline

    std::cout << "coloque seu nome completo e sua idade: "<< std::endl;
    std::cin >> nome_completo >> idade;


    std::cout << "o seu nome é "<<nome_completo<<" e voce tem "<<idade<<" anos"<<std::endl;
    */

    //imprime nome completo 
    int idade;
    std::string nome_completo;

    //pegar informações com espaços:
    //usando std::getline

    std::cout << "coloque seu nome completo e sua idade: "<< std::endl;
    std::getline(std::cin, nome_completo);
    std::cin >> idade;
    
    std::cout << "o seu nome é "<<nome_completo<<" e voce tem "<<idade<<" anos"<<std::endl;
    //preceba que getline consegue pegar o ome todo
    return 0;
}