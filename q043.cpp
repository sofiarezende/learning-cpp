#include <iostream>
using namespace std;
class Banco{
    public:
    double saldo;
    double depositar(double valor){
        saldo = saldo + valor;
        cout<<"seu saldo é: "<<saldo<<endl;
        return saldo;
    }
    double sacar(double valor){
        if(valor > saldo){
        cout<<"operação inválida! não tem dinheiro suficiente."<<endl;
        }
        else{
        saldo = saldo - valor;
        cout<<"seu saldo é: "<<saldo<<endl;
        }
        return saldo;
    }
    void consultarSaldo(){
        cout<<"seu saldo é: "<<saldo<<endl;  
    }
};
int main(){
    Banco conta1;
    conta1.saldo = 0;
    conta1.depositar(500);
    conta1.sacar(100);
    conta1.sacar(500);
    conta1.consultarSaldo();
    return 0;
}