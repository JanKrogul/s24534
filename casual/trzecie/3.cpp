#include <iostream>
#include <cstdlib>
auto main (int argc, char* argv[]) -> int
{
        auto const a = std::stoi(argv[1]);//rozmiar tablicy
	int const b = 50;
	int tab[b]={};
	srand( time(NULL));//daje losowe liczby na podstawie pobranego czasu
		for(int i=0; i < a ; i++){
			tab[i] = (std::rand() % 50 ) + 0 ;
		}
std::cout << tab[0] << "\n";
std::cout << tab[1] << "\n";

return 0;
}
