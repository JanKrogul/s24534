#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int liczba, strzal;
int main()
{
	
	srand(time(NULL));
	liczba = rand() %100+1;
	while(strzal != liczba)
	{
	cout << "guess: ";
	cin >> strzal;
		if(strzal == liczba)
		cout << "just right !" << endl;

		else if(strzal < liczba)
		cout << "to small !" << endl;

		else if(strzal > liczba)
		cout << "too big !" << endl;
	}
	return 0;
}
