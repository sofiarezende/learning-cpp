#include <iostream>
using namespace std;

class Retangulo{
    public:
    double largura;
    double altura;

    Retangulo(double l, double a){
        largura = l;
        altura = a;
        cout<<"criando retangulo: "<<l<< " x "<<a<<endl;
    }
    void calcularArea(){
        double area = largura * altura;
        cout<<"a area é "<<area<<endl;
    }
};

int main(){
    Retangulo retangulo1(16.4,2.4);
    Retangulo retangulo2(3.7,9.0);

    retangulo1.calcularArea();
    retangulo2.calcularArea();

}