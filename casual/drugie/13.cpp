#include <iostream>
#include <string>
auto main (int argc, char* argv[]) -> int
{
	if(argc == 1){
		return 1;
	}
	auto a = std::stoi(argv[1]);
	for(; a > 0 ; a--){
int b;
		for(b = a; b > 0 ; b--){
		std::cout << "*";
	}
		std::cout << "\n";
	}
	return 0;
}
