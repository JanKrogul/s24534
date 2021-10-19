#include <iostream>
using namespace std;

auto main(int argc, char* argv[]) -> int
{
	for (int i = 1; i <= argc; i++)
	{
	cout << argv[i] << " ";	
	}
	cout << "\n";
return 0;
}

