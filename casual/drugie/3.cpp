#include <iostream>

auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);
	auto const b = std::stoi(argv[2]);
	auto const s = std::stoi(argv[3]);
	if (s == 0){
		std::cout << "argument 3 nie może być zerem\n";
	return 0;
	}
	if(s < 0){
		for (auto i = b; i < a; i = (i - s)){
			std::cout << -i <<"\n";
		}
	} else
	for (auto i = a; i < b; i = (i + s)){
		std::cout << i << "\n";
	}
	return 0;
}
