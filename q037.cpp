#include <iostream>
#include <stack>
#include <queue> 

int main()
{
    //implementando pilha
    //TAD pilha
    std::stack<int> sequencia;

    std::cout<< "Empurrando (push) os elementos..."<<std::endl;
    for (int i=1;i<=10;i++) {
        sequencia.push(i); //cria um stack com 10 eementos de 1 a 10.
        std::cout << ' ' << i;
    }
    std::cout<<std::endl;
    std::cout << "Estourando (pop) os elementos..."<<std::endl;
    while (!sequencia.empty()){
        std::cout << ' ' << sequencia.top();
        sequencia.pop();
    }
    std::cout<<std::endl;


    //implementaando fila
    //TAD fila
    std::queue<int> sequencie;

    std::cout<< "Empurrando (push) os elementos..."<<std::endl;
    for (int i=1;i<=10;i++) {
        sequencie.push(i); //cria um stack com 10 eementos de 1 a 10.
        std::cout << ' ' << i;
    }
    std::cout<< "\n";
    std::cout << "Estourando (pop) os elementos..."<<std::endl;
    while (!sequencie.empty()){
        std::cout << ' ' << sequencie.size();
        sequencie.pop();
    }
    return 0;
}