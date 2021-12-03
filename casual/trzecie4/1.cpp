#include <iostream>
#include <string>
int main(){
	std::string name = "Jan Krogul";
	std::string* a = &name;
	std::cout << "wartość zmiennej name: " << *a << "\n";
	std::cout << "adres zmiennej name: " << a << "\n";
	std::cout << "rozmiar zmiennej name: " << sizeof(*a) << "\n\n";
	std::cout << "wartość wskaźnika: " << a << "\n";
	std::cout << "adres wskaźnika: " << &a << "\n";
	std::cout << "rozmiar wskaźnika: " << sizeof(a) << "\n";


return 0;
}
