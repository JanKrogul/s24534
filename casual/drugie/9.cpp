#include <iostream>
auto main (int argc, char* argv[]) -> int
{
	auto a = std::stoi(argv[1]);
std::cout << "Silnia z " << a ;
int silnia=1,b=1;
	while(0 < a){
		silnia = silnia * b;
		b++;
		a--;
}

std::cout << " wynosi "<< silnia << "\n" ;

	return 0;
}
