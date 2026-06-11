#include <iostream>
#include <string>
using namespace std;
class Arquivo {
public:
    string nome;
    bool aberto;

    // Construtor
    Arquivo(string n) {
        nome = n;
        aberto = true;
       cout << "Arquivo '" << nome << "' aberto com sucesso!" << endl;
    }

    // Destrutor - mesmo nome da classe com ~ na frente
    ~Arquivo() {
        if (aberto) {
            cout << "Fechando arquivo '" << nome << "'..." << endl;
            aberto = false;
        }
    }

    void escrever(string texto) {
        if (aberto) {
            cout << "Escrevendo no arquivo: " << texto << endl;
        } else {
            cout << "Erro: arquivo fechado!" << endl;
        }
    }
};
int main() {
    cout << "Iniciando programa..." << endl;
    {
    // Criando objeto dentro de um bloco
        Arquivo arquivo("dados.txt");
        arquivo.escrever("Primeira linha");
        arquivo.escrever("Segunda linha");

        cout << "Fim do bloco - objeto será destruído" << endl;
    } // Destrutor chamado aqui automaticamente!

    cout << "Programa terminando..." << endl;

    return 0;
}