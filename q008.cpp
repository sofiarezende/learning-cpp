#include <iostream>

int main(){
    int numero1 = 15;           //decimal
    int numero2 = 017;          //octal
    int numero3 = 0x0f;         //hexadecimal
    int numero4 = 0b00001111;   //binario

    std::cout << numero1 << std::endl;
    std::cout << numero2 << std::endl;
    std::cout << numero3 << std::endl;
    std::cout << numero4 << std::endl;
    
    return 0;
}