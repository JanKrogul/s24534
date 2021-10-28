#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);

	if ( a > b ){
	std::cout << a << "\n";
	}
	else if (a < b) {
	std::cout << b << "\n";
	}
	return 0;
}
