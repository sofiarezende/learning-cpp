#include <iostream>
using namespace std;

int main()
{
    //std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    string astronautas[] = {"ana","camila","lavinia"};

    for(int i = 0; i < sizeof(astronautas)/sizeof(astronautas[0]); i++){
        std::cout << astronautas[i] << '\n';
    }

    return 0;
}