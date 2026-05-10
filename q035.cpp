#include <iostream>
#include <string>
using namespace std;
class ArraySet {
    private:
        string array[10];
        int quantity;
    public:
        ArraySet() {
            quantity = 0;
        }
        int size() {
        // retorna a quantidade de elementos do conjunto
            return quantity;
        }
        bool isEmpty() {
        
        // o conjunto estará vazio quando quantity == 0
            if (quantity == 0){
                return true;
            }
            else {
                return false;
            }
        }
        bool contains(string s) {
        
            for (int i = 0; i<quantity; i++){
                if (array [i] == s){
                    return true;
                }
            }
            return false; // so retorna false depois de olhar o array inteiro
        }
        bool add(string s) {
       
            if (contains(s)){ //chamada de funcao precisa de argumento
                return false;
            }
            if (quantity < 10){ // verifica se quantity é menor que 10
                array[quantity] = s;
                quantity = quantity + 1;
                return true;
            }
            return false;
        }
        void print() {
        cout << "[ ";
        for(int i = 0; i < quantity; i++) {
            cout << array[i] << " ";
            }
        cout << "]" << endl;
        }
};
int main() {
    ArraySet set; //o array teste

    cout << "============================" << endl;
    cout << "TESTE 1 - CONJUNTO VAZIO" << endl;
    cout << "============================" << endl;
    cout << "Conjunto vazio? ";
    cout << set.isEmpty() << endl;
    cout << endl;
    cout << "============================" << endl;
    cout << "TESTE 2 - ADICIONANDO" << endl;
    cout << "============================" << endl;
    cout << "Add Ana: ";
    cout << set.add("Ana") <<endl;

    cout << "Add Carlos: ";
    cout << set.add("Carlos") <<endl;

    cout << "Add Maria: ";
    cout << set.add("Maria")<<endl;

    cout << "Add Ana novamente: ";
    cout << set.add("Ana")<<endl;

    cout << endl;
    cout << "============================" << endl;
    cout << "TESTE 3 - PRINT" << endl;
    cout << "============================" << endl;
    
    set.print();
    

    cout << endl;
    cout << "============================" << endl;
    cout << "TESTE 4 - SIZE" << endl;
    cout << "============================" << endl;
    cout << "Quantidade: ";
    
    cout << set.size();
    

    cout << endl;
    cout << "============================" << endl;
    cout << "TESTE 5 - CONTAINS" << endl;
    cout << "============================" << endl;

    cout << "Existe Maria? ";
    cout << set.contains("Maria")<<endl;

    cout << "Existe Joao? ";
    cout << set.contains("Joao")<<endl;
    
    cout << endl;
    cout << "============================" << endl;
    cout << "TESTE 6 - CONJUNTO VAZIO" << endl;
    cout << "============================" << endl;
    cout << "Conjunto vazio? ";

    cout << set.isEmpty();
    
    cout << endl;
return 0;
}