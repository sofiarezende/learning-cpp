#include <iostream>
using namespace std;

class Funcionario{
    public:
    string nome;
    int salario;

    static int totalFuncionarios;

    Funcionario(string n){
        nome = n;
        totalFuncionarios++;
        cout<<"funcionario criado: "<<nome<<" (Total: "<<totalFuncionarios<<")"<<endl;
    }
    ~Funcionario(){
        totalFuncionarios--;
        cout<<"funcionario demitido: "<<nome<<" (Total: "<<totalFuncionarios<<")"<<endl;
    }
    static void mostrarTotal() {
        cout << "Total de funcionarios: " << totalFuncionarios << endl;
    }
};

// CORREÇÃO 1: Inicializar a variável estática fora da classe
int Funcionario::totalFuncionarios = 0;

int main() {
    cout << "Início do programa" << endl;
    Funcionario::mostrarTotal(); // CORREÇÃO 2: Chamar o método estático usando ::

    {
        Funcionario obj1("Ana");
        Funcionario obj2("Paula");
        Funcionario::mostrarTotal(); // CORREÇÃO 2

        {
            Funcionario obj3("Peixoto");
            Funcionario::mostrarTotal(); // CORREÇÃO 2
        } // obj3 destruído aqui

        Funcionario::mostrarTotal(); // CORREÇÃO 2
    } // obj1 e obj2 destruídos aqui

    Funcionario::mostrarTotal(); // CORREÇÃO 2
    cout << "Fim do programa" << endl;

    return 0;
}