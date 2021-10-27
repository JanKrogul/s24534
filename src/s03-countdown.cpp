#include <iostream>
#include <string>
using namespace std;

int main( int argc, char * argv[]){
	if (argc == 0){//jezeli liczba argumentów wpisanych przez użytkownika jest równa 0  zwraca błąd logiczny
	return 1;
	}
	for (auto i = stoi(argv[1]); i > -1; --i )
	{
	cout << i << "...\n";
	}
}


