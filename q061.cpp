#include <iostream> 
using namespace std;
class ContaBancaria{
    public:
    int numero;
    double saudo;

    static int contasabertas;

    ContaBancaria(){
        cout<<"criando conta bacaria"<<" (Total: "<<contasabertas<<")"<<endl;
        contasabertas++;
        numero = 0;
        saudo = 0;
    }
    ContaBancaria(int n){
        cout<<"criando conta bacaria de numero "<<n<<" (Total: "<<contasabertas<<")"<<endl;
        contasabertas++;
        numero = n;
        saudo = 0;
    }
    ContaBancaria(int n, double s){
        cout<<"criando conta bacaria de numero "<<n<<" (Total: "<<contasabertas<<")"<<endl;
        contasabertas++;
        numero = n;
        saudo = s;
    }
    ~ContaBancaria(){
        cout<<"arquivando conta bancaria de numero "<<numero<<" (Total: "<<contasabertas<<")"<<endl;
        contasabertas--;
    }
};
int ContaBancaria::contasabertas = 0;

int main(){
    cout << "Início do programa" << endl;
    {
        ContaBancaria conta1;
        ContaBancaria conta2(20210075, 1578989.00);
        ContaBancaria conta3(2987635, 189990890.00);
    }
    cout << "Fim do programa" << endl;
    return 0;
}