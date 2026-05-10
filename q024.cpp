#include <iostream>
#define PI 3.141
class circulo{
    public:
    double raio;
    double area;
    double circunferencia;

    double calcularArea(){
        area = PI * raio * raio;
        return area;
    } 
    double calcularCircunferencia(){
        circunferencia = 2 * PI * raio;
        return circunferencia;
    }
    bool ehMaiorQue(circulo outro) {
        return area > outro.area;   //o que aprendemos agora? aprendemos que para colocar a 
                                    //area do outro precisamos colocar circulo outro na entrada
                                    //e precisamos colocar outro.area no calculo. tambem temos 
                                    //que lembrar de colocar return.
    }
    void exibirInfo(circulo outro){ //se vamos usar o resultado de uma outra função nessa,
                                    //precisamos também usar as entradas da outra função.
        std::cout<< "a area é "<<area<<std::endl;
        std::cout<< "a circunferencia é "<<circunferencia<<std::endl;
        if (ehMaiorQue(outro)){     //aqui estamos checando o resultado da funcao bool
            std::cout<< "a área é maior" <<std::endl;
        }
        else{
            std::cout<< "a área não é maior" <<std::endl;
        }
    }
};
int main(){

    circulo circulo1, circulo2;

    circulo1.raio = 3;
    circulo1.calcularArea();
    circulo1.calcularCircunferencia();
    circulo1.ehMaiorQue(circulo2);
    circulo1.exibirInfo(circulo2);

    circulo2.raio = 4;
    circulo2.calcularArea();
    circulo2.calcularCircunferencia();
    circulo2.ehMaiorQue(circulo1);
    circulo2.exibirInfo(circulo1);

    return 0;
}