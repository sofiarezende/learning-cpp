#include<iostream>

class livro{
    public:
    std::string titulo;
    std::string autor;
    int paginas;

    void exibirlivro(){
        std::cout << "o titulo é "<< titulo << ", o autor é "<<autor<<" e o livro possui "<<paginas<< " paginas\n";
    }
};

int main(){
    livro livro1;

    livro1.titulo = "harry potter e a pedra filosofal";
    livro1.autor = "JK Rowling";
    livro1.paginas = 338;

    livro1.exibirlivro();

}