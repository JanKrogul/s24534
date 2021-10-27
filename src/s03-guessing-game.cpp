#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int liczba, strzal;
int main()
{
	
	srand(time(NULL));// dzięki temu program za każdym rzem generuje inne liczby
	liczba = rand() %100+1;s
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
