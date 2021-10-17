/*
 * Ask the user for their credentials. Allow them to decline.
 */


#include <iostream>
#include <string>


auto main() -> int
{
    std::string imie, nazwisko;
    std::cout << "Jak masz na imie?\n";
    std::cin >> imie;
    std::cout << "Jak masz na nazwisko?\n";
    std::cin >> nazwisko;
    std::cout << "Czesc " << imie << " " << nazwisko << '\n';
    return 0;
}
