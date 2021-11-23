#include <iostream>

int main(){
        int a;
        std::cout << "Podaj długość boku kwadratu: ";
        std::cin >> a;
	int b = a - 2;
	if (a >= 3){
		for (int i = 0; i < a; i++){
			std::cout << "*";
		}
		std::cout << "\n";
		for (int i = 0; i < b; i++){
			std::cout << "*";
			for (int i = 0; i < b; i++){
				std::cout << " ";
			}
			std::cout << "*";
			std::cout << "\n";
		}
		for (int i = 0; i < a; i++){
			std::cout << "*";
		}
		std::cout << "\n";
	}
	else std::cout << "Bok musi być większy od 3.\n";
        return 0;
}
