/*
Exercício Final
Crie uma classe ContaBancaria com:
Atributos: numero, titular, saldo
Métodos: depositar(valor), sacar(valor), consultarSaldo(), exibirExtrato()
Crie 2 contas, faça várias operações e exiba os extratos
Dicas Importantes
Sempre use public: no início da classe (por enquanto)
Lembre-se do ; após a definição da classe
Use #include <iostream> e using namespace std; para entrada/saída
Métodos podem chamar outros métodos da mesma classe
Cada objeto tem seus próprios dados - mudanças em um não afetam outros
*/
#include <iostream>
using namespace std;


class contabancaria{
    public:
    int numero;
    string titular;
    double saldo;
    double extrato = 0;

    double depositar(double deposito){
        saldo = saldo + deposito;
        return saldo;
    }
    double sacar(double saque){
        saldo = saldo - saque;
        extrato = extrato + saque;
        return saldo;
    }
    void consultarsaldo(){
        cout<<"olá, "<<titular<<"! o seu saldo é "<<saldo<<" reais"<<endl;
    }
    void consultarextrato(){
        cout<<"olá, "<<titular<<"! o seu extrato é "<<extrato<<" reais"<<endl;
    }
};

int main(){

    contabancaria conta1;
    double deposito, saque;

    conta1.numero = 11111;
    conta1.saldo = 400;
    conta1.titular = "Sofia Rezende";

    int opcao = -1;

    cout << "=== Banco ===" << endl;

    int menu;  //resultado do menu
    while (opcao != 0) {
        cout<<" Qual operação voce quer fazer? \n";
        cout<<" 0 - sair \n";
        cout<<" 1 - deposito \n";
        cout<<" 2 - saque \n";
        cout<<" 3 - consultar saldo \n";
        cin>>opcao;
        switch(opcao){
            case(1): 
                cout<<"quanto deseja depositar? "<<endl;
                cin>>deposito;
                conta1.depositar(deposito);
                break; 
            case(2):
                cout<<"quanto deseja sacar? "<<endl;
                cin>>saque;
                conta1.sacar(saque);
                break;
            case(3):
                conta1.consultarsaldo();
                break;
            case(0):
                cout << "Saindo... Até logo!" << endl;
                break;
        }
    }
    return 0;
}