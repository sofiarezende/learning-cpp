//estou fazendo um tutorial mais rápido pq não podemos abobiar
#include <iostream>
int main(){

    int x;
    std::cout << "digite uma nota (0-10) "<<std::endl;
    std::cin >> x;



    switch (x){
    case (0):
        std::cout << "voce tirou uma nota baixissima." <<std::endl;
        break;
    case (1):
        std::cout << "voce tirou uma nota beeem baixa." <<std::endl;
        break;
    case (2):
        std::cout << "voce tirou uma nota horrivel." <<std::endl;
        break;
    case (3):
        std::cout << "voce tirou uma nota meio baixa." <<std::endl;
        break;
    case (4):
        std::cout << "voce tirou uma nota baixa." <<std::endl;
        break;
    case (5):
        std::cout << "voce tirou uma nota mais ou menos." <<std::endl;
        break;
    case (6):
        std::cout << "voce tirou uma nota pouco boa." <<std::endl;
        break;
    case (7):
        std::cout << "voce tirou uma nota boa." <<std::endl;
        break;
    case (8):
        std::cout << "voce tirou uma nota ótima." <<std::endl;
        break;
    case (9):
        std::cout << "voce tirou uma nota incrível." <<std::endl;
        break;
    case (10):
        std::cout << "voce tirou uma nota extraordinária." <<std::endl;
        break;
    
    default:
        std::cout << "a nota precisa ser entre 0 e 10." <<std::endl;
        break;
    }


    return 0;
}