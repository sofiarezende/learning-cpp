#include <iostream>
using namespace std;

class Troca{
    public:
    void trocarPorValor(int a, int b){
        a = a + 5;
        b = b + 3;
        cout << "Dentro do metodo (valor): " << a <<", "<<b<< endl;
    }
    void trocarPorReferencia(int &a, int &b){
        a = a + 5;
        b = b + 3;
        cout << "Dentro do metodo (referencia): " << a <<", "<<b<< endl;
    }
};

int main(){
    Troca teste1;
    // Teste com inteiro
    int a = 5;
    int b = 7;
    cout << "Antes (valor): " << a <<", "<<b<< endl;
    teste1.trocarPorValor(a, b);
    cout << "Depois (valor): " << a <<", "<<b<< endl;

    cout << endl;

    // Resetando
    a = 5;
    b = 7;
    cout << "Antes (referencia): " << a <<", "<<b<< endl;
    teste1.trocarPorReferencia(a, b);
    cout << "Depois (referencia): " << a <<", "<<b<< endl;

    cout << endl;

    return 0;
}