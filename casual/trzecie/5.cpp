#include <iostream>
#include <string>
auto main () -> int
{
	int a, mini, maxi;
	std::cout << "Podaj ile chcesz wpisać elementów do tablicy A ";
	std::cin >> a;
	int const b = 100;
	int A[b]={};

	for(int i = 0; i < a;i++){
		std::cout << "Podaj " << i + 1 << " element tablicy ";
		std::cin >> A[i];
	}
	int min = 99999, max = -1;
	for(int i = 0; i < a; i++){
		if(A[i] < min){
			min = A[i];
			mini = i;
		}
		if(A[i] > max){
			max = A[i];
			maxi = i;
		}
	}

std::cout << "indeks najmniejszej liczby z tablicy A to: " << mini << "\n";
std::cout << "indeks największaej liczby z tablicy A to: " << maxi << "\n";
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
