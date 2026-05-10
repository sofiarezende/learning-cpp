#include <iostream>
#include <string>
#include <vector> // Para fazer um extrato de verdade (lista)
using namespace std;


class contabancaria {
public:
    int numero;
    string titular;
    double saldo;
    string historico = ""; // Vamos guardar as transações aqui como texto

    void depositar(double valor) {
        saldo += valor;
        historico += "Depósito: + R$ " + to_string(valor) + "\n";
        cout << "Depósito realizado!" << endl;
    }

    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            historico += "Saque: - R$ " + to_string(valor) + "\n";
            cout << "Saque realizado!" << endl;
        } else {
            cout << "Saldo insuficiente!" << endl;
        }
    }

    void consultarsaldo() {
        cout << "\n--- Saldo Atual ---" << endl;
        cout << "Titular: " << titular << "\nSaldo: R$ " << saldo << endl;
    }

    void exibirExtrato() {
        cout << "\n=== Extrato Detalhado ===" << endl;
        if (historico == "") {
            cout << "Nenhuma movimentação realizada." << endl;
        } else {
            cout << historico;
        }
        cout << "Saldo Final: R$ " << saldo << endl;
        cout << "=========================" << endl;
    }
};

int main() {
    contabancaria conta1;
    conta1.numero = 11111;
    conta1.saldo = 400;
    conta1.titular = "Sofia Rezende";

    int opcao = -1;
    double valorOperacao;

    while (opcao != 0) {
        cout << "\n1-Deposito | 2-Saque | 3-Saldo | 4-Extrato | 0-Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor para depositar: ";
                cin >> valorOperacao;
                conta1.depositar(valorOperacao);
                break;
            case 2:
                cout << "Valor para sacar: ";
                cin >> valorOperacao;
                conta1.sacar(valorOperacao); // Agora chamando a função correta!
                break;
            case 3:
                conta1.consultarsaldo();
                break;
            case 4:
                conta1.exibirExtrato();
                break;
            case 0:
                cout << "Saindo... Até logo!" << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                // Limpa o erro do cin caso o usuário digite uma letra
                cin.clear();
                cin.ignore(1000, '\n');
        }
    }

    return 0;
}