#include <iostream>
using namespace std;

int main(){
    string astronautas[9];
    int tamanho = sizeof(astronautas)/sizeof(astronautas[0]);
    string astronautascpfs[9];
    int tamanhocpfs = sizeof(astronautascpfs)/sizeof(astronautascpfs[0]);
    //estamos declarando o numero maximo de astronautas e cpfs
    //apos isso estamos descobrindo o tamanho do vetor respectivo

    //percorre o tamanho de vetor astronautas
    for (int i = 0; i< tamanho; i++){
        
        cout << "ensira o nome do #" << i << " astronauta: "<<endl;
        getline(cin, astronautas[i]);
        cout << "ensira o cpf do #" << i << " astronauta: "<<endl;
        getline(cin, astronautascpfs[i]);
    }
    cout << "nomes e cpfs dos astronautas: \n";
    for (string cpf : astronautascpfs){
        cout << cpf << endl;
    }
    for (string nomes : astronautas){
        cout << nomes << endl;
    }
    
    
}