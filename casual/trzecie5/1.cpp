#include <iostream>
#include <ctime>

auto call_with_random_int( void (*fp) (int const)) -> void {
        int i;
        srand(time(NULL));
        i = (rand()%10)+1;
       (*fp)(i);
}
auto other_function (int j){//tworzenie zmiennej j przy jednoczesnym wykonaniu funkcji na potrzeby funkcji wyżej
      std::cout << j << "\n";
}
int main(){
        auto fpp = & other_function;
        call_with_random_int(fpp);
return 0;
}

