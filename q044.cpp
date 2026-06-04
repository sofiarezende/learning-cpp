#include <iostream>
using namespace std;
#define PI 3.1478

class Circulo{
    public:
    double raio;
    double calcularCircunferencia(){
        double circ = 2 * PI * raio;
        return circ;
    }
    bool ehMaiorQue(Circulo outro){
        if(calcularCircunferencia()>=outro.calcularCircunferencia()){
            return true;
        }
        else{
            return false;
        }
    }
    void exibirInfo(Circulo outro){
        cout<<"raio: "<<raio<<endl;
        cout<<"circunferencia: "<<calcularCircunferencia()<<endl;
        cout<<"é maior que o outro? "<<ehMaiorQue(outro)<<endl;
    }
};
int main(){
    Circulo circulo1, circulo2;
    circulo1.raio = 8;
    circulo2.raio = 5;
    
    circulo1.exibirInfo(circulo2);
    circulo2.exibirInfo(circulo1);
}