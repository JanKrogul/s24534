#include <iostream>
#include <string>
void swap(char** aa ,char** bb){
        auto pom = **aa;
        **aa = **bb;
        **bb = pom;
        std::cout << "Po zmianie: \n";
        std::cout << "Pierwszy parametr to: " << *aa << " a drugi parametr to: " << *bb << "\n";
}

int main(int argc, char* argv[]){
	auto a = argv[1];
	auto b = argv[2];
	std::cout << "Pierwszy parametr to: " << a << " a drugi parametr to: " << b << "\n";
	auto aa = &a;
	auto bb = &b;
	swap(aa, bb);
return 0;
}

