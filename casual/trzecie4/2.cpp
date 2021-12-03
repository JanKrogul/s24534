#include <iostream>
#include <string>
void print(std::string* a){
	std::cout << a << " = " << *a << "\n";
}
int main(){
        std::string hello = "Hello, World!";
        std::string* a = &hello;
	print(a);
return 0;
}
