#include <iostream>

int main(){

    int i;
    double temp;
    char unidade;

    std::cout<< "quer converter: "<<std::endl;
    std::cout << "1 - celcius para fahrenheit"<< std::endl;
    std::cout << "2 - fahrenheit para celcius"<< std::endl;
    std::cin >> i;

    switch(i){
        case 1:
            std::cout << "digite a temperatura (em celcius): "<< std::endl;
            std::cin >> temp;
            temp = (9*temp/5) + 32;
            std::cout << "a temperatura em fahrenheit é: "<< temp << std::endl;
            break;
        case 2:
            std::cout << "digite a temperatura (em fahrenheit): "<< std::endl;
            std::cin >> temp;
            temp = (temp - 32)*5/9;
            std::cout << "a temperatura em celcius é: "<< temp << std::endl;
            break;
    }


    return 0;
}