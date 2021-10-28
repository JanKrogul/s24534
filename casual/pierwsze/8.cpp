#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);
	auto const c = std::stoi(argv[3]);

	if (a > b){
	std::cout << a << "\n";
	} else if (b > c){
	std::cout << b << "\n";
	} else if ( c > a){
	std::cout << c << "\n";
	}

	return 0;
}
