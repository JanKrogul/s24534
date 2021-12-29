#include <iostream>
#include <string>
void swap(int & a ,int & b){
	int pom = a;
        a = b;
        b = pom;
return;
}
int main(int argc, char* argv[]){
	auto a = std::stoi(argv[1]);
	auto b = std::stoi(argv[2]);
	std::cout << "Pierwszy wpisany parametr to: " << a << " a drugi wpisany parametr to: " << b << "\n";
	swap( a, b);
	std::cout << "Pierwszy parametr po zmianie to: " << a << " a drugi parametr po zmianie to: " << b << "\n";
return 0;
}

