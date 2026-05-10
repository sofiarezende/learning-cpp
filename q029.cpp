#include<iostream>
using namespace std;

class retangulo {
    public:

    float largura;
    float altura;

    retangulo(float altura, float largura){ 
        cout << "Criando retangulo: " << altura << " " << largura << endl;
        this->altura = altura;
        this->largura = largura;
    }
    void calcular(){
        float area = largura * altura;
        std::cout << "area: " << area << std::endl;
    }
};
int main(){

    retangulo retangulo1(4,5);
    retangulo1.calcular();

    retangulo retangulo2(2,3);
    retangulo2.calcular();

    retangulo retangulo3(3,3);
    retangulo3.calcular();

    retangulo retangulo4(7,1);
    retangulo4.calcular();

    return 0;
}