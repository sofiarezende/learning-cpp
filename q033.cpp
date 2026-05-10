#include <iostream>
using namespace std;

int main(){
    string astronautas[9];
    int tamanho = sizeof(astronautas)/sizeof(astronautas[0]);
    for (int i = 0; i< tamanho; i++){

        cout << "ensira o nome do #" << i << " astronauta: "<<endl;
        getline(cin, astronautas[i]);
    }
    cout << "astronautas: \n";
    for (string astronauta : astronautas){
        cout << astronauta << endl;
    }
    
}