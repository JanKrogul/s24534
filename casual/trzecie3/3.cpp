#include <iostream>
#include <math.h>
auto main() -> int{
	auto koniec = false;
	while (koniec == false) {
		std::cout << "Wybierz figure poprzez wpisanie nazwy\n";
		std::cout << "trojkat, prostokat, kolo, trapez, szesciokat: \n";
    		std::string x;
    		std::cin >> x;
    		if (x == "trojkat"){
			float pod, wys;
			std::cout << "Dlugosc podstawy: ";
			std::cin >> pod;
			std::cout << "Wysokosc: ";
			std::cin >> wys;
			if (wys <= 0 || pod <= 0) {
        			std::cout << "-1\n";
			} else {
				std::cout << "Pole trojkata wynosi: " << pod * wys / 2 << "\n";
			}
		}
		else if (x == "prostokat"){
			float boka, bokb;
			std::cout << "Bok a: ";
			std::cin >> boka;
			std::cout << "Bok b: ";
			std::cin >> bokb;
			if (boka <= 0 || bokb <= 0){
				std::cout << "-1\n";
			} else {
			std::cout << "Pole prostokata wynosi: " << boka * bokb << "\n";
			}
		}
		else if (x == "kolo"){
			float pro;
			std::cout << "Promien kola: ";
			std::cin >> pro;
			if (pro <= 0){
				std::cout << "-1" << std::endl;
			} else {
				std::cout << "Pole kola wynosi: " << pro * pro * M_PI << "\n";
			}
		}
		else if (x == "trapez"){
			float boka, bokb, wys;
			std::cout << "Bok a: ";
			std::cin >> boka;
			std::cout << "Bok b: ";
			std::cin >> bokb;
			std::cout << "Wysokosc: ";
			std::cin >> wys;
			if (boka <= 0 || bokb <= 0 || wys <= 0){
				std::cout << "-1\n";
			} else {
				std::cout << "Pole trapezu wynosi: " << (boka + bokb) * wys / 2 << "\n";
			}
		}
		else if (x == "szesciokat"){
			float bok;
			std::cout << "Bok: ";
			std::cin >> bok;
			if (bok <= 0){
				std::cout << "-1\n";
			} else {
				std::cout << "Pole szesciokata wynosi: " << 3 * bok * bok * sqrt(bok) / 2 << "\n";
			}
		}
		std::string stop;
		std::cout << "Odpalić program ponownie? Wpisz tak lub nie: ";
		std::cin >> stop;
		if (stop == "tak"){
			koniec = false;
		} else {
			koniec = true;
		}
	}
return 0;
}
