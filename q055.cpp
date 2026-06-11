#include<iostream>
using namespace std;

class ContaBancaria{
    public:
    int numero;
    string titular;
    float saldo_inicial;
    ContaBancaria(){
        cout<<"conta sem informacoes criada"<<endl;
        numero = 0;
        titular = "não existe";
        saldo_inicial = 0;
    }
    ContaBancaria(int n, string t){
        cout<<"conta criada: numero: "<<n<<" titular: "<< t<<endl;
        numero = n;
        titular = t;
        saldo_inicial = 0;
    }
    ContaBancaria(int n, string t, float s){
        cout<<"conta criada: numero: "<<n<<" titular: "<< t<<" saldo: "<< s<<endl;
        numero = n;
        titular = t;
        saldo_inicial = s;
    }
    void exibirConta(){
        cout<<"numero: "<<numero <<endl;
        cout<<"titular: "<<titular <<endl;
        cout<<"saldo_inicial: "<<saldo_inicial <<endl;
        cout << "---" << endl;
    }
};

int main(){
    ContaBancaria conta1;
    ContaBancaria conta2(20120075, "Ana Flavia Queiroz");
    ContaBancaria conta3(22201074, "Maria Lúcia Menezes", 87265.2);

    conta1.exibirConta();
    conta2.exibirConta();
    conta3.exibirConta();

}
