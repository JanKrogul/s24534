#include <iostream>
using namespace std;
int i, n;
auto main(int argc, char* argv[]) -> int
{
	n = 99;
	if (argc > 1)
	{
	n = stoi(argv[1]);
	}
	for (i = n; i >= 1; i--)
	{
	cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
	cout << "Take one down, pass it around, " ;
	}
	cout << "No more bottles of beer on the wall, no morre bottles of beer\n";
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall..." << "\n";



return 0;
}

