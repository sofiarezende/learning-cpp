#include <iostream>
#include <fstream>
using namespace std;

class Conexao {
public:
    bool conectado;

    // Construtor
    Conexao() {
        cout<<"conexao efetuada"<<endl;
        conectado = true;
    }

    // Destrutor
    ~Conexao() {
        if (conectado == true) {
            cout<<"conexao interrompida"<<endl;
            conectado = false;
        }
    }
    void escrever(string texto) {
        if (conectado) {
            cout << "Escrevendo no arquivo: " << texto << endl;
        } else {
        cout << "Erro: conexao interrompida "<< endl;
        }
    }
        
};
int main(){
    Conexao conexao1;
    conexao1.escrever("Primeira Linha");
    conexao1.escrever("Segunda Linha");
    cout << "Fim das tarefas - vc será desconectado" << endl;
    return 0;
}
