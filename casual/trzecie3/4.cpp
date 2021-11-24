#include <iostream>
int main(){
	float a, b, suma, srednia;
	float A[100]={};
	std::cout << "Podaj ile liczb chcesz wpisać: ";
	std::cin >> a;
	for(int i = 0; i < a ; i++){
		std::cout << "Podaj " << i + 1 << " element: ";
		std::cin >> b;
		A[i] = b;
		if(i < a){
			suma = suma + A[i];
		}
	}
	srednia = suma/a;
	std::cout << "Średnia wynosi: " << srednia << "\n";
return 0;
}
