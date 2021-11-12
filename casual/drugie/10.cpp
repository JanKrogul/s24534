#include <iostream>
auto main (int argc, char* argv[]) -> int
{
	auto a = std::stoi(argv[1]);
std::cout << "Silnia z " << a ;
int silnia=1,b=1;
	do{
		silnia = silnia * b;
		b++;
		a--;
	} while(0 < a);

std::cout << " wynosi "<< silnia << "\n" ;

	return 0;
}
