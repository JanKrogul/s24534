#include <iostream>
int max2(int a, int b){
	if(a > b){
		return a;
	} else{
		return b;
	}
}
int max3(int maks2, int c){
	if(maks2 > c){
		return maks2;
	} else {
		return c;
	}
}
int main(){
        int a, b, c;
        std::cout << "Podaj liczbe a: ";
        std::cin >> a;
        std::cout << "Podaj liczbe b: ";
        std::cin >> b;
        std::cout << "Podaj liczbe c: ";
        std::cin >> c;
        std::cout << "\n";
        std::cout << "Twoje liczby to: "<< a << " " << b << " " << c << "\n";
        int maks2 = max2(a, b);
        std::cout << "Największą z 2 pierwszych liczb jest: " << maks2 << "\n";
        int maks3 = max3(maks2, c);
        std::cout << "Największą z 3 liczb jest: " << maks3 << "\n";
return 0;
}

