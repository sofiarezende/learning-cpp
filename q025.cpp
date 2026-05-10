#include <iostream>
/*
Crie uma classe Produto com atributos nome, preco e quantidade. Crie um array de 5 produtos,
preencha os dados e:
Exiba todos os produtos
Calcule o valor total do estoque
Encontre o produto mais caro
*/
class produto {
    public:
    std::string nome;
    double preco;
    int quantidade;

    void exibirproduto(){
        std::cout << "o produto: "<<nome<<" está por "<<preco<<" reais. Corre, apenas restam "<<quantidade<<std::endl;
    }
};
int main(){
    produto lista[5];

    lista[0].nome = "headset";
    lista[0].preco = 159.99;
    lista[0].quantidade = 2;
    lista[0].exibirproduto();

    lista[1].nome = "detergente";
    lista[1].preco = 39.99;
    lista[1].quantidade = 88;
    lista[1].exibirproduto();
    

    lista[2].nome = "arroz";
    lista[2].preco = 7.99;
    lista[2].quantidade = 312;
    lista[2].exibirproduto();
    
    lista[3].nome = "vassoura";
    lista[3].preco = 99.99;
    lista[3].quantidade = 12;
    lista[3].exibirproduto();

    lista[4].nome = "notebook";
    lista[4].preco = 1899.99;
    lista[4].quantidade = 3;
    lista[4].exibirproduto();

    double valortotalestoque = 0;
    double produtomaiscaro = 0;
    int i; //contador

    for (i=0;i<5;i++){
        valortotalestoque = (lista[i].preco*lista[i].quantidade) + valortotalestoque;

        if (produtomaiscaro<lista[i].preco){
            produtomaiscaro = lista[i].preco;
        }
    }
    std::cout<<"o valor total do estoque é "<<valortotalestoque<<std::endl;
    std::cout<<"o produto mais caro custa "<<produtomaiscaro<<std::endl;

    return 0;
}