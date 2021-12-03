#include <iostream>
#include <vector>
#include <ctime>
void CopyTableToVector(int tab[100][8]){
	std::vector <int> wektor;
	for(int i = 0; i < 100; i++){
		if(i % 5 == 0){
			wektor.push_back(tab[i][7]);//wyslanie ostatniego elementu wiersza
		}				    //podzielnego przez 5 do wektora
	}
	std::cout << wektor[wektor.size() - 1] << "\n";
}
int main(){
	srand(time(NULL));
	int tab[100][8];
	for(int i = 0; i < 100; i++){ //przypisanie randomowej liczby każdemu elementowi tablicy
		for(int j = 0; j < 8; j++){
			tab[i][j] = (std::rand()%100);
		}
	}
	CopyTableToVector(tab);
//wypisanie całej tablicy do sprawdzenia
/*	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 8; j++){
			std::cout << tab[i][j] << " ";
		}
		std::cout << "\n";
	}
*/
return 0;
}
