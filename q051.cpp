#include <iostream>
#include <string>
using namespace std;
    //Caracter original = b' ^D (mod n)
    //D = 5981
    //b' = 6130
    //n = 6557
    //Logo, queremos saber o resultado de:
    //6130^5981 (mod 6557)

    //esse q051.cpp é só para calcular o binário de D

string binario(int n) {
    string bin = "";

    while (n > 0) {
        bin = char('0' + (n % 2)) + bin;
        n /= 2;
    }

    while (bin.length() < 14) {
        bin = "0" + bin;
    }

    return bin;
}

int main() {
    int numero;
    cout << "Digite D: ";
    cin >> numero;

    cout << binario(numero);

    return 0;
}
//g++ q051.cpp -o q051 && ./q051