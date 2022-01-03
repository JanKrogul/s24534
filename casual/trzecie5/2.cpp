#include <iostream>

auto fSum(double (*f)(double), int n, int m) -> double {
double s;
std::cout << "n: " << n << " m: " << m << "\n";
for (int i = n; i <= m ; i++){
	s= s + (*f)( i);
	}
return s;
}

double other_function (double k){
return k;
}

int main(){
double m,n;
std::cout << "Podaj wartość m: ";
std::cin >> m;
std::cout << "Podaj wartość n: ";
std::cin >> n;  

	double (*fp) (double);
	fp = &other_function;
	std::cout << fSum(*fp, m, n) << "\n";
return 0;
}

