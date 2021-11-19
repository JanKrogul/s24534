#include <iostream>
#include <string>
auto main (int argc, char* argv[]) -> int
{
int a, c;
	std::cout << "wpisz rozmiar tablicy\n";
	std::cin >> a;
	std::cout << "wpisz pierwszą pozycję\n";
	std::cin >> c ;
	std::cout <<"\n";
	int const b =100;
	int A[b]={};

	for(int i=0; i < a ; i++){
		A[i] = c+i;
	}

std::cout << A[0]<<"\n";//cout'y dla sprawdzenia działania
std::cout << A[1]<<"\n";
std::cout << A[2]<<"\n";
std::cout << A[3]<<"\n";
std::cout << A[4]<<"\n";
std::cout << A[5]<<"\n";
std::cout << A[6]<<"\n";
std::cout << A[7]<<"\n";
std::cout << A[8]<<"\n";
std::cout << A[9]<<"\n";
std::cout << A[10]<<"\n";
std::cout << A[11]<<"\n";//wypisanie elementu tablicy jest większego niż zadeklarowana 
//wielkość tablicy da losowe liczby nieprzypisane do tablicy

return 0;
}
