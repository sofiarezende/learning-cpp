#include <iostream>
#include <string>
using namespace std;
class Livro {
public:
    string titulo;
    string autor;
    int paginas;
    double preco;

    // Construtor 1: sem parâmetros
    Livro() {
        cout << "Livro criado sem informações" << endl;
        titulo = "Sem título";
        autor = "Autor desconhecido";
        paginas = 0;
        preco = 0.0;
    }

 // Construtor 2: com título e autor
    Livro(string t, string a) {
        cout << "Livro criado: " << t << " por " << a << endl;
        titulo = t;
        autor = a;
        paginas = 0;
        preco = 0.0;
    }

 // Construtor 3: com todos os parâmetros
    Livro(string t, string a, int p, double pr) {
        cout << "Livro completo criado: " << t << endl;
        titulo = t;
        autor = a;
        paginas = p;
        preco = pr;
    }

    void exibirLivro() {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Páginas: " << paginas << endl;
        cout << "Preço: R$ " << preco << endl;
        cout << "---" << endl;
    }  
};
int main() {
 // Usando diferentes construtores
    Livro livro1; // Construtor sem parâmetros
    Livro livro2("Dom Casmurro", "Machado de Assis"); // Construtor com 2 parâmetros

    Livro livro3("O Cortiço", "Aluísio Azevedo", 300, 25.90); 
    //Construtor completo

    livro1.exibirLivro();
    livro2.exibirLivro();
    livro3.exibirLivro();

return 0;
}