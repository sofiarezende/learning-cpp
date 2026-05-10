#include <iostream>
using namespace std;

int main()
{
    string cars[3] = {"Corvette", "Mustang", "Camry"};

    cout << sizeof(cars)/sizeof(string) << " carros\n";
    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';


    return 0;
}

