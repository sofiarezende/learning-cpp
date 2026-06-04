#include <iostream>
#include <string>
using namespace std;
// Definindo uma classe simples
class Pessoa 
{
public: // Isso significa que os membros abaixo podem ser acessados de fora da classe
string nome; // Atributo (variável) da classe
int idade; // Outro atributo
// Método para exibir informações
void exibirInfo() {
cout << "Nome: " << nome << ", Idade: " << idade << endl;
}
};
int main() {
// Criando uma instância (objeto) da classe
Pessoa pessoa1;
// Acessando e modificando os dados (só funciona porque são "public")
pessoa1.nome = "João";
pessoa1.idade = 25;
// Chamando um método
pessoa1.exibirInfo();
return 0;
}