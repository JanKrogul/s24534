#include <iostream>

auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void;
auto print_int(void*) -> void;
auto print_str(void*) -> void;
int main() {
    std::string tab_str[2] = {"Hello","World!"};
    int tab_int[3] = {0,1,2};
    void* ptr_str[2];
    void* ptr_int[3];
    for (auto i = 0; i < 2; i++)
        ptr_str[i] = & tab_str[i];
    for (auto i = 0; i < 3; i++)
        ptr_int[i] = &tab_int[i];
    int x;
    std::cout << "Jezeli chcesz wypisac tablice wartosci str wpisz 1\n";
    std::cout << "a jezeli chcesz wypisac tablice wartosci int wpisz 2\n";
    std::cin >> x;
    if (x != 1 && x != 2) {
        std::cout << "Zle wpisana wartosc, koncze program!";
        return 0;
    }
    else if (x == 1) {
        fpprint(ptr_str, 2, &print_str);
    }
    else if (x == 2) {
        fpprint(ptr_int, 3, &print_int);
    }
}
auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void {
    for (auto i = 0; i < n; i++) {
        fp(a[i]);
    }
}
auto print_int(void* p) -> void {
    std::cout << *(int*)p << "\n";
}
auto print_str(void* p) -> void {
    std::cout << *(std::string*)p << "\n";
}
