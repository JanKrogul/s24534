#include <iostream>
#include <string>

auto main (int agrc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);

	if (a < 0){
	std::cout << " wartość absolutna " << a << " to " << (a - a - a) << "\n";
	} else if(a > 0){
	std::cout << " wartość absolutna " << a << " to " << (a - a - a) << "\n";
	}
	return 0;
}
