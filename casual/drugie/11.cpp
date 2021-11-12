#include <iostream>
auto main (int argc, char* argv[]) -> int{
	if(argc == 1 || argc == 0){
		return 1;
	}
	auto a = std::stoi(argv[1]);
	auto b = std::stoi(argv[2]);
	int c;

	for(; a > 0 ; a--){
		for(c = b; c > 0 ; c--){
		std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
