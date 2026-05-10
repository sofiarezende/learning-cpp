#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>

class Conta {
public:
  float saldo;
};

using namespace std;
class Cliente {
private:
  float saldo;
  Conta *contas;

public:
  string nome;

  Cliente() {
    cout << "Constuindo cliente sem nome" << endl;
    this->saldo = 0;
    this->nome = "Sem nome";
    this->contas = 0;
  }

  Cliente(string nome) {
    cout << "Constuindo cliente" << endl;
    this->saldo = 0;
    this->nome = nome;
    this->contas = 0;
  }

  void abrirConta(int quantas) { this->contas = new Conta[quantas]; }

  void depositar(float valor) {
    if (valor <= 0) {
      cout << "Só é permitido depósito positivo";
      return;
    }
    this->saldo += valor;
  }

  void transferir(float quanto, Cliente *para_quem) {
    // quanto não pode ser negativo
    if (quanto <= 0) {
      cout << "Depósitos só positivos" << endl;
      return;
    }

    if (this->saldo >= quanto) {
      this->saldo -= quanto;
      para_quem->depositar(quanto);
    } else {
      cout << "Liso" << endl;
    }
  }

  ~Cliente() {
    cout << "Fechando conta no banco central" << endl;
    if (this->contas != 0) {
      delete this->contas;
    }
  }
};

int main() {
  Cliente ori("Oriosvaldo");
  Cliente joa("Joaquina");
  Cliente mari;

  ori.abrirConta(1);
  mari.abrirConta(1);

  // depósito
  ori.depositar(1000);

  // transferir 500 de ori para joa
  ori.transferir(500, &joa);

  // transferir 600 de ori para mari
  ori.transferir(600, &mari);

  return 0;
}