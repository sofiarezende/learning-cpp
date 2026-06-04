#include <iostream>
#include "ArraySequence.h"

using namespace std;

int main() {
    ArraySequence seq;

    cout << "A sequencia esta vazia? " << (seq.isEmpty() ? "Sim" : "Nao") << endl;

    cout << "\n--- Testando Insercoes ---" << endl;
    seq.add("Ana", 1);      
    seq.add("Carlos", 2);  
    seq.add("Maria", 2);    
    
    cout << "Saida obtida: ";
    seq.print();
    cout << "Saida esperada: [Ana Maria Carlos]" << endl;

    cout << "\n--- Testando Acesso (get) ---" << endl;
    cout << "Elemento na posicao 2: " << seq.get(2) << " (Esperado: Maria)" << endl;
    cout << "Elemento na posicao 4 (Invalida): \"" << seq.get(4) << "\"" << endl;

    cout << "\n--- Testando Busca (contains) ---" << endl;
    cout << "Contem 'Maria'? " << (seq.contains("Maria") ? "Sim" : "Nao") << endl;
    cout << "Contem 'Jose'? " << (seq.contains("Jose") ? "Sim" : "Nao") << endl;

    cout << "\n--- Testando Remocao ---" << endl;
    seq.remove(2); 
    cout << "Apos remover posicao 2: ";
    seq.print(); 

    cout << "Tamanho final da sequencia: " << seq.size() << endl;

    return 0;
}