#include <iostream>
#include <string>
using namespace std;

#define MAX_ALUNOS 50
class Data {
    public:
    int dia;
    int mes;
    int ano;
    
    void imprimir() {
        cout << dia << mes << ano;
    }
};
// Em C, a acao fica em uma funcao separada da struct


class Aluno {
    public:
    int matricula;
    string nome;
    Data nascimento;

    void imprimir() {
        cout << "Matricula: " << matricula << " | Nome: " << nome << " | Nasc: ";
        nascimento.imprimir(); 
        cout << endl;
}

};

int main() {
    Aluno turma[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao = -1;

    cout << "=== Sistema de Gestao Escolar ===" << endl;

    int menu;  //resultado do menu
    while (opcao != 0) {
        cout << "\nMenu: " << endl;
        cout << "1. Adicionar Aluno" << endl;
        cout << "2. Listar Alunos" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha: " << endl;
        cin >> opcao;

        if (opcao == 1) {
            if (totalAlunos < MAX_ALUNOS) {
                cout << "Digite a matricula: " << endl;
                cin >> turma[totalAlunos].matricula;
                cout << "Digite o primeiro nome do aluno: " << endl;
                cin >> turma[totalAlunos].nome;

                cout << "Data de nascimento (Dia): " << endl;
                cin >> turma[totalAlunos].nascimento.dia;
                cout << "Data de nascimento (Mes): " << endl;
                cin >> turma[totalAlunos].nascimento.mes;
                cout << "Data de nascimento (Ano): " << endl;
                cin >> turma[totalAlunos].nascimento.ano;

                totalAlunos++;
                cout << "Aluno adicionado com sucesso!" << endl;
            } else {
                cout << "Capacidade maxima da turma atingida!" << endl;
            }
        } else if (opcao == 2) {
            cout << "\n--- Lista de Alunos ---" << endl;
            for (int i = 0; i < totalAlunos; i++) {
                turma[i].imprimir();
            }
        } else if (opcao != 0) {
            cout << "Opcao invalida!" << endl;
        }
    }
    return 0;
}