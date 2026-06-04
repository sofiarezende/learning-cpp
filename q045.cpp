#include <iostream>
using namespace std;

class Produto {
    public:
    string nome;
    double preco;
    int quantidade;

    void exibirProduto(){
        cout<<"Nome do produto: "<<nome<<endl;
    }
    double valorEstoque(){
        double vtotal = preco * quantidade;
        return vtotal;
    }
};

int main(){
    Produto produtos[5];
    double valortotal;
    double maiscaro;
    string imaior;

    produtos[0].nome = "detergente";
    produtos[0].preco = 19.99;
    produtos[0].quantidade = 10;

    produtos[1].nome = "notebook";
    produtos[1].preco = 2499.99;
    produtos[1].quantidade = 10;

    produtos[2].nome = "guarda-chuva";
    produtos[2].preco = 259.99;
    produtos[2].quantidade = 10;

    produtos[3].nome = "porta";
    produtos[3].preco = 399.99;
    produtos[3].quantidade = 10;

    produtos[4].nome = "meia";
    produtos[4].preco = 9.99;
    produtos[4].quantidade = 100;

    for (int i=0; i<5; i++){
        produtos[i].exibirProduto();
        valortotal = valortotal + produtos[i].valorEstoque();  
    }
    cout<< "O valor total do estoque é "<<valortotal<<endl;
    for (int i=0; i<5; i++){
        if (maiscaro<produtos[i].preco){
            maiscaro = produtos[i].preco;
            imaior = produtos[i].nome;
        }
    }
    cout<<"O mais caro é "<<imaior<<endl;
}
