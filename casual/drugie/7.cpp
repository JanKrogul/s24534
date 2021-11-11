#include <iostream>

auto main (int agrc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]); //limit
	auto const b = std::stoi(argv[2]); //dzielnik
	int suma = 0;

	for (auto i = 0; i <= a; i++){
		if (i % b == 0){
			std::cout << i << "\n";
			suma = suma + i;
		}
	}
	std::cout << "Suma wynosi: "<< suma << "\n";
	return 0;
}
