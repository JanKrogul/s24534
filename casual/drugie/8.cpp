#include <iostream>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
int silnia;
silnia = 1;
	for(auto i = a; i > 1; i--){
		silnia = silnia * i;
	}
std::cout << "Silnia z " << a << " wynosi "<< silnia << "\n" ;



	return 0;
}
