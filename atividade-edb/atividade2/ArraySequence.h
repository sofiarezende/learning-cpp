#include <iostream>
#ifndef ARRAYSEQUENCE_H
#define ARRAYSEQUENCE_H
using namespace std;

class ArraySequence {
    private:
    string array[10];
    int quantity;

    public:
    ArraySequence();
    int size();
    bool isEmpty();
    bool contains(string s);
    bool add(string s, int position);
    string get(int position);
    bool remove(int position);
    void print();

};
#endif