#include <iostream>
using namespace std;
int i, n; //zaznaczenie żeby zmienne "i" oraz "n" były liczbami całkowitymi
auto main(int argc, char* argv[]) -> int
{
	n = 99;
	if (argc > 1) //jezeli nie ma wpisanego argumentu podczas odpalania piku to pobiera zmienną n napisaną w kodzie powyżej i zamienia ją na liczbę stałą
	{
	n = stoi(argv[1]);//pobieranie pierwszego argumentu wpisanego podczas odpalania programu
	}
	for (i = n; i >= 1; i--)//dla zmiennej "i" równej "n" , jeżeli zmienna "i" jest większa lub równa od liczby 1 to  zrób operacje -1
	{
	cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
	cout << "Take one down, pass it around, " ;
	}
	cout << "No more bottles of beer on the wall, no morre bottles of beer\n";
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall..." << "\n";
return 0;
}

