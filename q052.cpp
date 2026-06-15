#include <iostream>
using namespace std;

// Caracter original = b' ^D (mod n)
// D = 5981 (D_binário: 1011101011101)
// b_linha = 6130
// n = 6557

int main() {
    long long D_binario = 1011101011101;
    long long b_linha;
    long long n = 6557;

    //pedindo o bloco criptografado (b linha)
    cout << "Digite o bloco criptografado (b_linha): ";
    cin >> b_linha;

    long long x = 1;                           // x := 1 
    long long potencia = b_linha % n;          // potencia := b mod m 

    for (int k = 0; D_binario > 0; k++) {
        int a_k = D_binario % 10; //pega o bit atual (0 ou 1)
        
        if (a_k == 1) {
            x = ((__int128_t)x * potencia) % n;
        }

        //eleva a potência ao quadrado para a próxima rodada
        potencia = ((__int128_t)potencia * potencia) % n;

        //remove o último dígito do binário para ler o próximo
        D_binario = D_binario / 10; 
    }

    //exibe o bloco 'b' original calculado!
    cout << "Resultado final do Bloco (b_linha) descifrado (b): " << x << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
//g++ q052.cpp -o q052 && ./q052