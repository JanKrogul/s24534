#include <iostream>
#include <string>
#include <math.h>
void cone(double & h, double & r){
	double p = M_PI*r*r;
	double v = M_PI*r*r*h/3;
	std::cout << "Objętość stożka to: " << v << "\n";
        std::cout << "Pole podstawy stozka to: " << p << "\n";
return ;
}
int main(){
	double h, r;
	std::cout << "Podaj wysokość stożka: ";
	std::cin >> h;
	std::cout << "Podaj promień stożka: ";
	std::cin >> r;
	cone(h, r);
return 0;
}
