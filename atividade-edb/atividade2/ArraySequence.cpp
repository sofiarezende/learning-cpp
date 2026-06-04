#include <iostream>
#include "ArraySequence.h"
using namespace std;


ArraySequence::ArraySequence() {
    quantity = 0;
}

int ArraySequence::size(){
    return quantity;
}
bool ArraySequence::isEmpty(){
    if (quantity == 0){
        return true;
    }
    else{
        return false;
    }
}
bool ArraySequence::contains(string s){
    for (int i = 0; i<quantity; i++){
        if (array[i] == s){
            return true;
        }
    }
    return false;
}
bool ArraySequence::add(string s, int position){
        //validar a posição??????
    if (position < 1 || position > quantity + 1) {
        return false; 
    }
    if (quantity >= 10) {
        return false; 
    }
    //posicoes validas são de 1 até quantity + 1
    int indice = position - 1;
    for (int i = quantity; i > indice; i--) {
        array[i] = array[i - 1];
    }
    array[indice] = s;
    quantity++;
    return true;
}
string ArraySequence::get(int position) {
    if (position < 1 || position > quantity) {
        return ""; //retorna "" se for ua posição inválida
    }
    return array[position - 1];
}
bool ArraySequence::remove(int position) {
    //validar a posição
    if (position < 1 || position > quantity) {
        return false;
    }
    int indice = position - 1;
    //deslocar elementos para a esquerda
    for (int i = indice; i < quantity - 1; i++) {
        array[i] = array[i + 1];
    }
    //atualizar quantity
    quantity--;
    return true;
}
void ArraySequence::print() {
    cout << "[";
    for (int i = 0; i < quantity; i++) {
        cout << array[i];
        if (i < quantity - 1) {
            cout << " "; //
        }
    }
    cout << "]" << endl;
}
