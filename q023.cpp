#include <iostream>

class banco{
    public:
    double saldo = 0;

    void sacar(double x){
        saldo = saldo - x;
    }
    void depositar(double x){
        saldo = saldo + x;
    }
    void consultarsaldo(){
        std::cout<<"o seu saldo é "<<saldo<<" reais.\n";
    }
};
int main(){
    banco conta1;

    conta1.consultarsaldo();
    conta1.depositar(100);
    conta1.sacar(50);
    conta1.consultarsaldo();
    return 0;
}
    
