#include <iostream>
#include <string>
auto main (int argc, char* argv[]) -> int
{
        auto const a = std::stoi(argv[1]);//std::stoi(argv[1]);//rozmiar tablicy
	int const b = 100;
	int tab[b]={};
		for(int i=0; i < a ; i++){
			tab[i] = 0 ;
		}

std::cout << tab[0];

return 0;
}
