#include <iostream>
#include <string>
using namespace std;
class Carro {
public:
    string marca;
    string modelo;
    int ano;
    // Construtor com parâmetros
    Carro(string m, string mod, int a) {
        cout << "Criando carro: " << m << " " << mod << endl;
        marca = m;
        modelo = mod;
        ano = a;
    }
    void exibirCarro() {   
        cout << marca << " " << modelo << " (" << ano << ")" << endl;
    }
};
int main() {
// Passando parâmetros para o construtor
    Carro carro1("Toyota", "Corolla", 2020);
    Carro carro2("Honda", "Civic", 2021);
    carro1.exibirCarro();
    carro2.exibirCarro();
    return 0;
}