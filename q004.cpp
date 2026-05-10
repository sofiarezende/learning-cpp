#include <iostream>


int soma(int primeiron, int segundon){
    
    return primeiron + segundon;
}

int main(){

    int primeiron {13};
    int segundon {7};
    int resultado = soma(primeiron, segundon);

    std::cout << "primeiro numero: "<< primeiron <<std::endl;
    std::cout << "segundo numero: "<< segundon <<std::endl;
    std::cout << "soma: "<< resultado << std::endl;

    return 0;
}