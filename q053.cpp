#include <iostream>
using namespace std;

class Retangulo{
    public:
    float largura;
    float altura;
    Retangulo(float l, float a){
        cout << "Criando rangulo: " << l << " x " << a << endl;
        largura = l;
        altura = a;
    }
   void exibirRetangulo(){
    cout<<"retangulo: " << largura << " x " << altura << endl;
   } 
};

int main(){
    Retangulo retangulo1(5.5, 6.6);
    Retangulo retangulo2(4.4, 7.7);

    retangulo1.exibirRetangulo();
    retangulo2.exibirRetangulo();

    return 0;
}