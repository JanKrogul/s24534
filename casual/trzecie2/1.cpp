#include <iostream>
#include <array>

int main(){
std::array < char, 127 > ASCIItable;

	for(int i = 33; i <= 126; i++){
		ASCIItable[i] = i;
		std::cout << ASCIItable[i] << "\n";
	}
return 0;

}
