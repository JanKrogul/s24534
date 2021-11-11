#include <iostream>
auto main (int argc, char* argv[]) -> int
{
	auto const a = std::stoi(argv[1]);

	if(a==2||a==3||a == 5|| a ==7){
		std::cout << a << " jest liczbą pierwszą\n";
	} else{
	if(a % 2 == 0|| a % 3 == 0|| a % 5 == 0 || a % 7 == 0){
	std::cout << a << " nie jest liczbą pierwszą\n";
	}else{
	std::cout << a << " jest liczbą pierwszą \n";
	}}
return 0;

}
