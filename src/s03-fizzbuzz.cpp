#include <iostream>
#include <string>
using namespace std;
int n;
auto main(int argc, char* argv[]) -> int
{
	n = stoi(argv[1]);
	for (int a = 1; a <= n; a++ )
	{
	cout << a << "  ";
	if (a % 3 == 0) 
		{
		cout  << "fizz";
		}
	if (a % 5 == 0)
		{
		cout << "buzz\n";
		}
	else cout << "\n";
}
return 0;
}
