#include<iostream>

int multiplicacao(int primeiro, int segundo){
    int resultado = primeiro * segundo;
    return resultado;
}

int main(){
    int a {14};
    int b {17};
    int produto = multiplicacao(a,b);

    std::cout << "primeiro: "<<a<<std::endl;
    std::cout << "segundo: "<<b<<std::endl;
    std::cout << "multiplicação: "<<produto<<std::endl;

}