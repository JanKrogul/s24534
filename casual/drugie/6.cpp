#include <iostream>
#include <string>
//DOKOŃCZYC
auto main (int agrc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);

	if (a > b){
	std::cout << a << " > " << b << "\n";
	} else if (a < b){
	std::cout << a << " < " << b << "\n";
	} else if (a == b){
	std::cout << a << " = " << b << "\n";
	}
	return 0;
}
