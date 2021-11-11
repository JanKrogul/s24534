#include <iostream>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);
	for (auto i = a; i < b; ++i){
	std::cout << i << "\n";
	}
	for (auto i = b; i < a; ++i){
	std::cout << i << "\n";
	}




	return 0;
}
