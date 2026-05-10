//fazer calculadora
#include <iostream>

int main(){

    char op;
    double n1, n2, resultado;

    std::cout << "ddigite a operação: "<< std::endl;
    std::cin >> n1 >> op >> n2;

    switch(op){
        case ('+'):
            resultado = n1 + n2;
            std::cout << resultado << std::endl;
            break;
        case ('-'):
            resultado = n1 - n2;
            std::cout << resultado << std::endl;
            break;
        case ('*'):
            resultado = n1 * n2;
            std::cout << resultado << std::endl;
            break;
        case ('/'):
            resultado = n1/n2;
            std::cout << resultado << std::endl;
            break;
        default: 
            std::cout << "só aceitamos operações de adiçao, subtracao, multiplicacao e divisao."<<std::endl;
        
    }



    return 0;
}