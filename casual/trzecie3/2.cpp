#include <iostream>
#include <math.h>
int main(){
	int r, R, H, koniec;
	float V;
	do{
		std::cout << "Podaj promien podstawy górnej r: ";
		std::cin >> r;
		if(r <= 0){
			std::cout << "Promień podstawy górnej powinien być większy od zera\n";
			std::cout << "\n";
		}
		std::cout << "Podaj promien podstawy dolnej R: ";
		std::cin >> R;
		if(R <= 0){
			std::cout << "Promień podstawy powinien być większy od zera\n";
			std::cout << "\n";
		}
		std::cout << "Podaj wysokość stożka H: ";
		std::cin >> H;
		if(H <= 0){
			std::cout << "Wysokość stożka powinna być większa od zera\n";
			std::cout << "\n";
		}
		V = M_PI * H * (r * r + r * R + R * R)/3;
		std::cout << "Pojemność stożka wynosi: " << V << "\n";
		std::cout << "Aby wyjść wciśnij 0 ";
		std::cin >> koniec;
	}while(koniec != 0);
return 0;
}
