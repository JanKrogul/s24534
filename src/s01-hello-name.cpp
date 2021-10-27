#include <iostream>
#include <string>

auto main() -> int
{
	auto name = std::string{};
	std::getline(std::cin, name); // wpisywanie przez użytkownika wartości i zapisanie je od zmiennej name 

	std::cout << "Hello, " << name << "!\n";

	return 0;
}
