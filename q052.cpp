#include <iostream>
using namespace std;

// Caracter original = b' ^D (mod n)
// D = 5981 (em binário: 1011101011101)
// b_linha = 6130
// n = 6557

int main() {
    long long D_binario;
    long long b_linha;
    long long n;

    //pedindo o bloco criptografado (b linha)
    cout << "Digite o bloco criptografado (b_linha): ";
    cin >> b_linha;

    //pedindo o expoente D em binário
    cout << "Digite o valor de D em binario: ";
    cin >> D_binario;

    //pedindo o módulo n
    cout << "Digite o valor do modulo (n): ";
    cin >> n;

    // As variáveis do algoritmo começam com base nos dados lidos
    long long x = 1;                           // x := 1 (conforme o livro)
    long long potencia = b_linha % n;          // potencia := b mod m (conforme o livro)

    for (int k = 0; D_binario > 0; k++) {
        int a_k = D_binario % 10; // Pega o bit atual (0 ou 1)
        
        cout << "i= " << k << ", a" << k << "= " << a_k << endl;
        //irei construir o algoritimo aqui dentro porque
        //aproveita que a potencia é a mesma para todos

        //se o bit for 1, multiplica no acumulador 'x'
        if (a_k == 1) {
            x = ((__int128_t)x * potencia) % n;
        }

        //eleva a potência ao quadrado para a próxima rodada
        potencia = ((__int128_t)potencia * potencia) % n;

        //remove o último dígito do binário para ler o próximo
        D_binario = D_binario / 10; 
    }

    //exibe o bloco 'b' original calculado!
    cout << "----------------------------------------" << endl;
    cout << "Resultado final do Bloco (b_linha) descifrado (b): " << x << endl;

    return 0;
}
//g++ q052.cpp -o q052 && ./q052