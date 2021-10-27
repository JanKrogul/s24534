#include <iostream>   
#include <string>

auto main(int argc, char* argv[]) -> int //pobranie od razu z wiersza poleceń zmiennych a i b
{
        auto const a = std::stoi(argv[1]);// pobiera pierwszą wartość podaną jako pierwszy argument podczas odpalania prorgamu
        auto const b = std::stoi(argv[2]);// pobiera drugą wartość podaną jako drugi argument w terminalu podczas odaplania programu
        std::cout << (a / b) << "\n"; //wypisanie operacji dzielenia stałej a i b wpisanych przez użytkownika wcześniej
        return 0;
}


