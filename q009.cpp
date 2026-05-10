#include <iostream>

int main() {
    
    int qtdelefantes;       //numero lixo aleatorio

    int qtdleoes{};         //inicializa para 0

    int qtdgatos{16};       //inicializa para 16

    int qtdcachorros{22};   //inicializa para 22

    //inicializa para expressão
    int qtdanimaisdomesticos{ qtdgatos + qtdcachorros };

    std::cout << "qtd de animais domesticos: " <<qtdanimaisdomesticos<<std::endl;
    std::cout << "qtd de elefantes: " <<qtdelefantes<<std::endl;
    std::cout << "qtd de leoes: " <<qtdleoes<<std::endl;
    std::cout << "qtd de gatos: " <<qtdgatos<<std::endl;


    

    std::cout << "tam de qtd de animais domesticos: " <<sizeof(qtdanimaisdomesticos)<<std::endl;
    std::cout << "tam de qtd de elefantes: " <<sizeof(qtdelefantes)<<std::endl;
    std::cout << "tam de qtd de leoes: " <<sizeof(qtdleoes)<<std::endl;
    std::cout << "tam de qtd de gatos: " <<sizeof(qtdgatos)<<std::endl;

    return 0;
}