#include<iostream>

class retangulo {
    public:

    float largura;
    float altura;

    void calcular(){
        float area = largura * altura;
        std::cout << "area: " << area << std::endl;
    }
};
int main(){

    retangulo retangulo1;

    retangulo1.altura = 7;
    retangulo1.largura = 5;
    retangulo1.calcular();

    return 0;
}