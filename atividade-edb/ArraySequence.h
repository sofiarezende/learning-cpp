#include <iostream>
using namespace std;

class ArraySequence {
    string array[10];
    int quantity;

    ArraySequence(){

    }
    int size(){
        return quantity;
    }
    bool isEmpty(){
        if (quantity == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool contains(string s){
        for (int i = 0; i<quantity; ++i){//para cada numero da lista
            if (array[i] == s){
                return true;
            }
        }
        return false;
    }
    bool add(string s, int position){
        //validar a posição??????
        for (int i = 0; i<quantity; ++i){
            while(i<quantity){
            }
        }
    }
    string get(int position){
    }
    bool remove(int position){
    }
    void print(){
    }
};