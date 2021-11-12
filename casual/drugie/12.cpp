#include <iostream>
auto main (int argc, char* argv[]) -> int
{
	if(argc == 1){
		return 1;
	}
	auto a = std::stoi(argv[1]);
	for(int i = 1; i <= a ; i++){
		for(int b = 1; b <= i ; b++){
		std::cout << "*";
		}
	std::cout << "\n";
	}
	return 0;
}
