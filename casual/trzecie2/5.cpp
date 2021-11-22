#include <iostream>
#include <ctime>
#include <cstdlib>
int partition(int tablica[], int p, int r){
	int x = tablica[p];
	int i = p, j = r, w;
	while(true){
		while(tablica[j] > x)
			j--;
		while(tablica[i] < x)
			i++;
		if(i < j){
			w = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = w;
			i++;
			j--;
		}else
			return j;
		}
	}

	void quicksort(int tablica[], int p, int r){
	int q;
		if(p < r){
			q = partition(tablica, p, r);
			quicksort(tablica, p, q);
			quicksort(tablica, p + 1, r);
		}
	}
int main(){
	srand(time(NULL));

		int ilosc_liczb = 64, i;
		int *tablica = new int [ilosc_liczb];

		for(i = 0; i < ilosc_liczb; i++){
			tablica[i] = (std::rand() % 1000);
		}

		quicksort(tablica, 0, ilosc_liczb - 1);

		for(i = 0; i < ilosc_liczb; i++)
			std::cout << "tablica[" << i << "] = " << tablica[i] << "\n";
		delete [] tablica;

	return 0;
}
