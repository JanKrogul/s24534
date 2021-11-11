#include <iostream>
auto main (int agrc, char* argv[]) -> int
{
	auto a = std::stoi(argv[1]);
std::cout << "Silnia z " << a ;
int silnia=1,z=1;
	do{
		silnia = silnia * z;
		z++;
		a--;
	} while(0 < a);

std::cout << " wynosi "<< silnia << "\n" ;

	return 0;
}
