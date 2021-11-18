#include <iostream>
#include <vector>

int main()
{
	int a, i=0;
	std::vector <int> liczba;
	do
	{
		std::cout << "Podaj " << liczba.size() + 1 << " liczbe: ";
		std::cin>>a;
		liczba.push_back(a);
		i++;
	}
	while(liczba[i-1] != 0);
	for(int j = 0 ;j < (i - 1); j++){
		if(j%5 == 0){
			std::cout<<"\n";
			std::cout<<"		"<<liczba[j];
		}else{
			std::cout<<"		"<<liczba[j];
		}
	}
	std::cout<<"\n";
	return 0;
}
