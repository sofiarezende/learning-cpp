#include <iostream>
#include <vector>
using namespace std;

class astronauta {//essa é a classe
    public:
    string nome;
    int idade;
    string cpf;
    bool vivo;
    bool disponivel;//esses são os atributos
    

    astronauta(bool vivo, bool disponivel, int idade, string cpf, string nome){
        this->nome = nome;
        this->idade = idade;
        this->cpf = cpf;
        this->vivo = vivo;
        this->disponivel = disponivel;
    }//isso é um construtor que passa os dados para os atributos
     //o this é usado poque queremos que o atributo (la em cima) receba o dado que
     //passamos como parametro.
};

class voo{
    public:
    int estadodevoo; //1-planejado ou em curso (2-em curso em andamento ou 3-em curso explodido ou 4-em curso finalizado)
    vector <string> cpfspassageiros;
    string codigodevoo;


};

int main(){
    vector <astronauta> astronautas;
    vector <voo> voos;
    string comando;

    while (cin >> comando) {
        if (comando == "FIM") {
        break;
        }
        if (comando == "CADASTRAR_ASTRONAUTA") {
            bool vivo = 1;
            bool disponivel = 1;
            int idade;
            string cpf, nome;
            cout << "Insira os dados na ordem (Idade, CPF, Nome):" << endl;

            cin >> idade >> cpf;
            cin.ignore();
            getline(cin, nome);

            astronautas.push_back(astronauta(vivo, disponivel, idade, cpf, nome));
        }
        if (comando == "CADASTRAR_VOO"){
            /*
            Regras:
            • Não pode existir mais de um voo com o mesmo código.
            • Todo voo novo começa no estado planejado.
            */
            int codigodevoo;
            cin >> codigodevoo;
        }
        if (comando == "ADICIONAR_ASTRONAUTA"){
            /*
            Regras:
            • O astronauta deve estar cadastrado.
            • O voo deve estar cadastrado.
            • O voo deve estar planejado.
            • O astronauta deve estar vivo.
            • O astronauta não precisa estar disponível nesse momento. A disponibilidade
            será verificada no lançamento.
            • O mesmo astronauta não pode ser adicionado duas vezes ao mesmo voo.
            */
            string cpf;
            int codigodevoo;
            cin >> cpf >> codigodevoo;

        }
        if (comando == "REMOVER_ASTRONAUTA"){
            /*
            Regras:
            • O astronauta deve estar cadastrado.
            • O voo deve estar cadastrado.
            • O voo deve estar planejado.
            • Se o astronauta não estiver no voo, a operação deve ser recusada.
            */
        }
        if (comando == "LANCAR_VOO"){
            /*
            Regras:
            • O voo deve estar cadastrado.
            • O voo deve estar planejado.
            • O voo deve ter pelo menos um astronauta.
            • Todos os astronautas do voo devem estar vivos e disponíveis.
            • Ao lançar, o voo passa para o estado em curso.
            • Ao lançar, os astronautas do voo ficam indisponíveis.
            */
        }
        if (comando == "EXPLODIR_VOO"){
            /*
            Regras:
            • O voo deve estar cadastrado.
            • Apenas voos em curso podem explodir.
            • Quando um voo explode, ele passa para finalizado com explosão.
            • Todos os astronautas do voo morrem.
            • Astronautas mortos também ficam indisponíveis.
            • Astronautas mortos permanecem cadastrados, mas não podem mais participar de novos voos.
            */
        }
        if (comando == "FINALIZAR_VOO"){
            /*
            Regras:
            • O voo deve estar cadastrado.
            • Apenas voos em curso podem ser finalizados com sucesso.
            • Quando finalizado com sucesso, o voo passa para finalizado com sucesso.
            • Os astronautas do voo voltam a ficar disponíveis.
            */
        }
        if (comando == "LISTAR_VOOS"){
           
        }
        if (comando == "LISTAR_MORTOS"){
           
        }
        if (comando == "listar"){
            cout << "\n--- Lista de Astronautas Cadastrados ---" << endl;
            for (int i = 0; i < astronautas.size(); i++) {
            cout << i + 1 << ". " << astronautas[i].nome << " (CPF: " << astronautas[i].cpf << ")" << endl;
    }

    return 0;
        }
        else{}
    }
    return 0;
}
