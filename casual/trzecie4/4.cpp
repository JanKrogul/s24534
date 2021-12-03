#include <iostream>
#include <string>
#include <math.h>
void cone(int h, int r){
	double pp = M_PI*r*r;
	double v = M_PI*r*r*h/3;
	std::cout << "Objętość stożka to: " << v << "\n";
	std::cout << "Pole podstawy stozka to: " << pp << "\n";
}
int main(){
	int wys, pro;
	std::cout << "Podaj wysokość stożka: ";
	std::cin >> wys;
	std::cout << "Podaj promień stożka: ";
	std::cin >> pro;
	int *h = &wys;
	int *r = &pro;
	cone(*h,*r);
return 0;
}
