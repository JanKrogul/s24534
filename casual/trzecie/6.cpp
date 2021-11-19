#include <iostream>
#include <string>
auto main () -> int
{
	int a, znalezionai;
	std::cout << "Podaj ile chcesz wpisać elementów do tablicy A: ";
	std::cin >> a;
	int const b = 100;
	int A[b]={};
	std::cout << "Podaj liczbę której szukasz: ";
	int szukana;
	std::cin >> szukana;
	for(int i = 0; i < a;i++){
		std::cout << "Podaj " << i + 1 << " element tablicy ";
		std::cin >> A[i];
	}
	for(int i = 0; i < a; i++){
		if(szukana == A[i]){
			znalezionai = i;
			std::cout << "indeks szukanej to " << znalezionai << "\n";
			return 1;
		}
	}
	std::cout << "-1\n";
std::cout << "\n";
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
std::cout << A[11]<<"\n";
return 0;
}
