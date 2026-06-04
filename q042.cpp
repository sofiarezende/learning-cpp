#include <iostream>
using namespace std;
class Livro{
    public:
    string titulo;
    string autor;
    int paginas;
    void exibirLivro(){
        cout<<"Livro: "<<titulo<<" | Autor: "<<autor<<" | Páginas: "<<paginas<<endl;
    }
};

int main(){
    Livro livro1;
    livro1.autor = "Dorian Gray";
    livro1.titulo = "Onde nasce uma estrea";
    livro1.paginas = 1083;
    livro1.exibirLivro();
    return 0;
}