#include <iostream>
using namespace std;

class Matematica{
    public:
    int multiplicar(int a, int b){
        cout << "multiplicacao de dois inteiros: ";
        return a * b;
    }
    double multiplicar(double a, double b){
        cout << "multiplicacao de dois doubles: ";
        return a * b;
    }
    double multiplicar(double a, int b){
        cout << "multiplicacao de um double e um inteiro: ";
        return a * b;
    }
    int multiplicar(int a, int b, int c){
        cout << "multiplicacao de três inteiros: ";
        return a * b * c;
    }



};
int main() {
    Matematica calc;

    cout << calc.multiplicar(5, 3) << endl;
    cout << calc.multiplicar(2.5, 3.7) << endl;
    cout << calc.multiplicar(2.5, 3) << endl;
    cout << calc.multiplicar(1, 2, 3) << endl;

    return 0;
}