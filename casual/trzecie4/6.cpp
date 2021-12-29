#include <iostream>
#include <cstring>

void memset(int s, int c, int n){
	char tab[50];
	for(int i = 0; i < c; i++){
		tab[i] = n;
		std::cout << tab[i] << "\n";
	}
}
int main(int argc, char* argv[]){
	if (argc < 4){
		std::cout << "Zbyt mało argumentów\n";
	}else if(argc == 4){
		int s = std::stoi(argv[1]);
		int c = std::stoi(argv[2]);
		int n = std::stoi(argv[3]);
		memset(s,c,n);
	}else if(argc > 4){
		std::cout << "Zbyt dużo argumentów\n";
	}

return 0;
}
