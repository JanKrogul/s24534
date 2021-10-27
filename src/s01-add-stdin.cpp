#include <iostream>
#include <string>
auto main() -> int
{
	auto tmp = std::string{}; //

	std::cout << "a = "; // wypisanie na ekran  
	std::getline(std::cin, tmp); //wpisywanie przez użytkownika wartości paramentru "a"
	auto const a = std::stoi(tmp); //zamiana stałej a na liczbę całkowitą

	std::cout << "b = "; // wypisanie na ekran
	std::getline(std::cin, tmp); // wpisanie przez użytkownika wartości paramentru "b"
	auto const b = std::stoi(tmp); //zmiana stałej b na liczbę całkowitą

	std::cout << (a + b) << "\n"; //wypisanie na ekran dodawania stałych a i b 
	return 0; //zakończenie programu
}
