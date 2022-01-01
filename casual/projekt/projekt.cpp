#include <iostream>
void znak(){
	int ascii;
	std::cout << "Wybierz znak ASCII\n";
	std::cin >> ascii;
	std::cout << "to twój wybrany kod ASCII: " << ascii << "\n";
}
void size(){
	int size;
	std::cout << "Jaka ma być wielkość figury?\n";
	std::cin >> size;
	std::cout << "to jest twoja wielkość figury: " << size << "\n";
}
int main(){
	znak();
	size();





return 0;
}
