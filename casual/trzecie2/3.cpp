#include <iostream>
#include <vector>
int main()
{
	std::vector <int> b;
	int a, wielkosc;
	do{
		std::cout << "Podaj " << b.size() + 1 << " liczbe: ";
		std::cin>>a;
		b.push_back(a);
		wielkosc = b.size();
	}while(a != 0);
	for(int i = 0 ;i < wielkosc - 1; i++){
		for(int j = 0; j < wielkosc - 2; j++){
			if(b[j] > b[j+1]){
				std::swap(b[j], b[j+1]);//swap zamienia miejscami
			}
		}
	}
	for(int i = 0; i < wielkosc -1;i++){
		std::cout << b[i] << "\n";
	}

	std::cout<<"\n";
	return 0;
}
