#include <iostream>
#include <cstdlib>
auto memrev(void* s, size_t n){
	char *p = (char *)s;
	size_t i;
	char tmp;
	for (i = 0; i < n/2; i++){
		tmp = p[i];
		p[i] = p[n-1-i];
		p[n-1-i] = tmp;
	}
}

int main(){
	long long int a;
	auto ap = &a;
memrev(ap, 4);

return 0;
}
