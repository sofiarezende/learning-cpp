#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class astronauta {
public:
    string cpf;//atributos
    string nome;
    int idade;
    bool vivo;
    bool disponivel;

    astronauta(string cpf, int idade, string nome) {//construtor
        this->cpf = cpf;
        this->idade = idade;
        this->nome = nome;
        this->vivo = true;       // começa vivo
        this->disponivel = true; // comeca disponível
    }
};

class voo {
public:
    int codigo;
    vector<string> cpfspassageiros;
    int estado; // 1: planejado, 2: em curso, 3: sucesso, 4: explosão

    voo(int codigo) {
        this->codigo = codigo;
        this->estado = 1; // começa planejado
    }
};

int buscarAstronauta(vector<astronauta>& lista, string cpf) {
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].cpf == cpf) return i;
    }
    return -1;
}

int buscarVoo(vector<voo>& lista, int codigo) {
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].codigo == codigo) return i;
    }
    return -1;
}

int main() {
    vector<astronauta> astronautas;
    vector<voo> voos;
    string comando;

    while (cin >> comando && comando != "FIM") {

        if (comando == "CADASTRAR_ASTRONAUTA") {//1
            string cpf, nome;
            int idade;
            cin >> cpf >> idade;
            getline(cin >> ws, nome); // getline le o nome com espaços

            //o -1 é para dizer que na busca do vetor(de 0 em diante), 
            //o elemento procurado não foi encontrado
            if (buscarAstronauta(astronautas, cpf) == -1) {
                astronautas.push_back(astronauta(cpf, idade, nome));
            } else {
                cout << "Erro: CPF ja cadastrado." << endl;
            }
        }

        else if (comando == "CADASTRAR_VOO") {//2
            int codigo;
            cin >> codigo;
            if (buscarVoo(voos, codigo) == -1) {
                voos.push_back(voo(codigo));
            } else {
                cout << "Erro: Codigo de voo ja existe." << endl;
            }
        }

        else if (comando == "ADICIONAR_ASTRONAUTA") {//3
            string cpf;
            int codigo;
            cin >> cpf >> codigo;

            //idx é o indice do vetor
            int idxA = buscarAstronauta(astronautas, cpf);
            int idxV = buscarVoo(voos, codigo);

            if (idxA != -1 && idxV != -1) {
                if (voos[idxV].estado != 1) cout << "Erro: Voo nao esta planejado." << endl;
                //usei o indice para acessar os dados de vivo e/ou disponivel.
                else if (!astronautas[idxA].vivo) cout << "Erro: Astronauta morto." << endl;
                else {
                    bool jaEsta = false;//assumimos que o astronauta não está no voo
                    //percorre lista de cpfs que já estão salvos no voo
                    //e vai comparando o cpf com todos os cpfs cadastrados
                    for(string c : voos[idxV].cpfspassageiros) {
                        //se encontramos cpf igual mudamos para true
                        if(c == cpf) jaEsta = true;
                    }
                    //percorre a lista e não encontrou o cpf. logo podemos add esse cpf 
                    if(!jaEsta) voos[idxV].cpfspassageiros.push_back(cpf);
                    else cout << "Erro: Astronauta ja esta no voo." << endl;
                }
            } else cout << "Erro: Astronauta ou Voo nao encontrado." << endl;
        }

        else if (comando == "REMOVER_ASTRONAUTA") {//4
            string cpf;
            int codigo;
            cin >> cpf >> codigo;
            int idxV = buscarVoo(voos, codigo);
            
            if (idxV != -1 && voos[idxV].estado == 1) {
                auto& p = voos[idxV].cpfspassageiros;
                bool removido = false;
                for(int i=0; i < p.size(); i++) {
                    if(p[i] == cpf) {
                        p.erase(p.begin() + i); //remove o astronauta
                        removido = true;
                        break;
                    }
                }
                if(!removido) cout << "Erro: Astronauta nao esta no voo." << endl;
            } else cout << "Erro: Operacao invalida." << endl;
        }

        else if (comando == "LANCAR_VOO") {//5
            int codigo;
            cin >> codigo;
            int idxV = buscarVoo(voos, codigo);

            //mesma logica do indice, -1 significa que o voo não foi encontrado no vetor
            if (idxV != -1 && voos[idxV].estado == 1) {// 1: planejado, 2: em curso, 3: sucesso, 4: explosão
                if (voos[idxV].cpfspassageiros.empty()) {
                    cout << "Erro: Voo sem astronautas." << endl;
                    continue;
                }

                bool pronto = true;
                for (string c : voos[idxV].cpfspassageiros) {
                    int idxA = buscarAstronauta(astronautas, c);
                    if (!astronautas[idxA].vivo || !astronautas[idxA].disponivel) pronto = false;
                }

                if (pronto) {
                    voos[idxV].estado = 2; //em curso
                    for (string c : voos[idxV].cpfspassageiros) 
                        astronautas[buscarAstronauta(astronautas, c)].disponivel = false;
                } else cout << "Erro: Astronautas indisponiveis ou mortos." << endl;
            }
        }

        else if (comando == "EXPLODIR_VOO") {//6
            int codigo;
            cin >> codigo;
            int idxV = buscarVoo(voos, codigo);
            if (idxV != -1 && voos[idxV].estado == 2) {
                voos[idxV].estado = 4; //voo finalizado com explosão
                for (string c : voos[idxV].cpfspassageiros) {
                    int idxA = buscarAstronauta(astronautas, c);
                    astronautas[idxA].vivo = false; 
                    astronautas[idxA].disponivel = false; 
                }
            } else cout << "Erro: Voo nao esta em curso." << endl; 
        }

        else if (comando == "FINALIZAR_VOO") {//7
            int codigo;
            cin >> codigo;
            int idxV = buscarVoo(voos, codigo);
            if (idxV != -1 && voos[idxV].estado == 2) {
                voos[idxV].estado = 3;//sucesso 
                for (string c : voos[idxV].cpfspassageiros) 
                    astronautas[buscarAstronauta(astronautas, c)].disponivel = true; 
            } else cout << "Erro: Voo nao esta em curso." << endl; 
        }

        else if (comando == "LISTAR_VOOS") {//8
            string estados[] = {"", "Planejados", "Em curso", "Finalizados Sucesso", "Finalizados Explosao"};
            for (int e = 1; e <= 4; e++) {
                cout << "--- " << estados[e] << " ---" << endl;
                for (voo& v : voos) {
                    if (v.estado == e) {
                        cout << "Voo: " << v.codigo << endl;
                        for (string c : v.cpfspassageiros) {
                            int idxA = buscarAstronauta(astronautas, c);
                            cout << "  - " << astronautas[idxA].nome << " (" << c << ")" << endl;
                        }
                    }
                }
            }
        }

        else if (comando == "LISTAR_MORTOS") {//9
            for (astronauta& a : astronautas) {
                if (!a.vivo) { 
                    cout << "Astronauta: " << a.nome << " (CPF: " << a.cpf << ")" << endl;
                    cout << "Voos que participou: ";
                    for (voo& v : voos) {
                        if (v.estado > 1) { //o astronauta só participa se o voo foi lançado
                            for (string c : v.cpfspassageiros) 
                                if (c == a.cpf) cout << v.codigo << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}