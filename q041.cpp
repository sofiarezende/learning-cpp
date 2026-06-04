#include <iostream>

class Retangulo{
public:
float largura;
float altura;
void calcularArea(){
    float area = largura * altura;
    std::cout<< "area: "<<area<<std::endl;
    }
};

int main(){
Retangulo retangulo1;

retangulo1.largura = 5.7;
retangulo1.altura = 12.1;
retangulo1.calcularArea();
}