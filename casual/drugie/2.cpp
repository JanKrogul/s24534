#include <iostream>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);
	auto const c = std::stoi(argv[3]);
	if (c == 0){
	std::cout << "argument 3 nie może być zerem\n";
	return 0;
	}
	for (auto i = a; i < b; ++i){
		if (i % c == 0){
			std::cout <<  i <<"\n";
		}
	}
	for (auto i = b; i < a; ++i){
		if (i % c == 0){
			std::cout << i << "\n";
		}
	}
	return 0;
}
