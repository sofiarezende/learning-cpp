#include <iostream>
#include <string>
#include <vector>

// uso de float para as notas, pois as notas tem casas decimais e o int só aceita número inteiro

enum EstadoPosicao {NULO, OCUPADO, REMOVIDO};

// NULO posição não utilizada
// OCUPADO posição com um item válido 
// REMOVIDO posição que já teve um item, mas foi removido

struct Elemento {
    std::string chave;
    float valor;
};

struct Celula {
    Elemento item;
    EstadoPosicao estado = NULO; 
};

class TabelaDispersao {
private:
    std::vector<Celula> array;
    int N; 

    long pre_hash(const std::string& str) {  // pdf, pág. 55
        long c = 0;
        for (size_t i = 0; i < str.length(); i++) {
            c = c + str[i] * (i * 17); 
        }
        return c;
    }

    int hash(const std::string& chave) {
        return pre_hash(chave) % N;
    }

public:
    TabelaDispersao(int tamanho) : N(tamanho) {
        array.resize(N);
    }

    // Algoritmo de Inserção com sondagem linear
    bool inserir(const std::string& chave, float valor) {
        int indice_inicial = hash(chave);
        int indice = indice_inicial;
        int x = 1;

        int primeiro_removido = -1;  

        for (int tentativa = 0; tentativa < N; tentativa++) {
            
            // caso já exista a chave, atualiza o valor
            if (array[indice].estado == OCUPADO && array[indice].item.chave == chave) {
                array[indice].item.valor = valor;
                return true;
            }

            // Se encontrar posição NULO, insere o novo item e retorna true
            if (array[indice].estado == NULO) {
                // Se já encontramos um REMOVIDO antes, insere lá
                if (primeiro_removido != -1) {
                    array[primeiro_removido].item = {chave, valor};
                    array[primeiro_removido].estado = OCUPADO;
                } else {
                    // se não encontrado, insere na posição NULO
                    array[indice].item = {chave, valor};
                    array[indice].estado = OCUPADO;
                }
                return true;
            }

            // Se encontrar um REMOVIDO, marca o primeiro encontrado para que possa ser reutilizado
            if (array[indice].estado == REMOVIDO) {
                if (primeiro_removido == -1) {
                    primeiro_removido = indice;
                }
            }

            indice = (indice_inicial + x) % N;
            x++;
        }

        // Se a tabela foi varrida por completo, a chave não existe e não havia NULO no caminho
        if (primeiro_removido != -1) {
            array[primeiro_removido].item = {chave, valor};
            array[primeiro_removido].estado = OCUPADO;
            return true;
        }

        return false; // Tabela cheia, não é possível inserir itens
    }

    bool buscar(const std::string& chave, float& valor_retorno) {
        int indice_inicial = hash(chave);
        int indice = indice_inicial;
        int x = 1;

        for (int tentativa = 0; tentativa < N; tentativa++) {
            if (array[indice].estado == NULO) {
                return false;
            }

            if (array[indice].estado == OCUPADO && array[indice].item.chave == chave) {
                valor_retorno = array[indice].item.valor;
                return true;
            }

            indice = (indice_inicial + x) % N;
            x++;
        }
        return false; 
    }

    bool remover(const std::string& chave) {
        int indice_inicial = hash(chave);
        int indice = indice_inicial;
        int x = 1;

        for (int tentativa = 0; tentativa < N; tentativa++) {
            if (array[indice].estado == NULO) {
                return false; 
            }

            if (array[indice].estado == OCUPADO && array[indice].item.chave == chave) {
                array[indice].estado = REMOVIDO; 
                return true;
            }

            indice = (indice_inicial + x) % N;
            x++;
        }
        return false;
    }

    void exibir() {
        std::cout << "\n=== ESTADO ATUAL DA TABELA ===\n";
        for (int i = 0; i < N; i++) {
            std::cout << "[" << i << "]: ";
            if (array[i].estado == NULO) {
                std::cout << "NULO\n";
            } else if (array[i].estado == REMOVIDO) {
                std::cout << "REMOVIDO\n";
            } else {
                std::cout << "CHAVE: " << array[i].item.chave << " | VALOR: " << array[i].item.valor << "\n";
            }
        }
        std::cout << "==============================\n";
    }
};

int main() {
    // tabela com capacidade pra 30 alunos
    TabelaDispersao tabela(30);

    // matŕicula é a chave e a nota é o valor
    tabela.inserir("20250012345", 8.5); // Aluno 1 (entrou em 2025)
    tabela.inserir("20250012346", 9.0); // Aluno 2
    tabela.inserir("20260098765", 7.0); // Aluno 3 (entrou em 2026)
    
    // inserindo o Aluno 4, que tem uma matrícula que pode causar colisão com o Aluno 1, dependendo da função de hash (lembrando da que 12345 e 54321 tem os mesmos dígitos, só que invertidos)
    tabela.inserir("20250054321", 9.5); // Aluno 4

    std::cout << "--- ESTADO 1: Inserção dos Alunos ---";
    tabela.exibir();

    // Removendo um aluno
    std::cout << "\nRemovendo o aluno de matrícula 20250012346...\n";
    tabela.remover("20250012346");
    tabela.exibir();

    // Atualizando a nota do Aluno 4 
    std::cout << "\nAtualizando a nota da matrícula 20250054321 para 10.0...\n";
    tabela.inserir("20250054321", 10.0);
    tabela.exibir();

    // Buscando um aluno específico
    float nota_aluno;
    std::string matricula_busca = "20260098765";
    if (tabela.buscar(matricula_busca, nota_aluno)) {
        std::cout << "\nAluno " << matricula_busca << " encontrado! Nota: " << nota_aluno << "\n";
    } else {
        std::cout << "\nAluno nao encontrado.\n";
    }

    return 0;
}
//g++ q048.cpp -std=c++17 -o q048 && ./q048