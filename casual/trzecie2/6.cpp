#include <iostream>
void ab(int a, int b)
{
	int xa = a * 2;
	int xb = b + 100;
	std::cout << "Liczba a równa " << a << " * 2 to: " << xa << "\n";
	std::cout << "Liczba b równa " << b << " + 100 to: " << xb << "\n";
}
int main()
{
	int a, b;
	std::cout << "Podaj liczbę a: ";
	std::cin >> a;
	std::cout << "Podaj liczbę b: ";
	std::cin >> b;
	ab(a, b);
return 0;
}
