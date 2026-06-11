#include <iostream>
using namespace std;

const int TAM = 10;

int tabela[TAM];

//função hash por modulo
int hashFunc(int chave) {
    return chave % TAM;
}

int main() {

    //inicializamos a tabela com -1
    for (int i = 0; i < TAM; i++) {
        tabela[i] = -1;
    }

    //insere o vetor de valores
    int valores[] = {25, 37, 18};

    //para cada valor dentro de valores, execute o bloco.
    for (int valor : valores) {
        int indice = hashFunc(valor); //usamos funcao hash para gerar um indice relacionado ao valor
        tabela[indice] = valor; //colocamos o valor na tabela - no exato lugar do indice desse valor
    }

    //mostra como ficou a tabela hash
    cout << "Tabela Hash:\n";

    for (int i = 0; i < TAM; i++) {
        cout << i << " -> " << tabela[i] << endl; 
    }

    return 0;
}