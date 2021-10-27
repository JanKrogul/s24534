#include <iostream>    // biblioteka umożliwia operacje wejścia()cin i wyjścia (cout(standardowe wyjście)/cerr(komunikat o błędach)/clog(cerr z buforem czyli tymczasowo przechowuje dane))
#include <string> //biblioteka odpowiadająca za ciągi znaków)

auto main(int argc, char* argv[]) -> int //funkcja main/argc przechowuje liczbe całkowitą ilości argumentów /argv(przechowuje w tablicy wartości wpisywane w wierszu polecenie)
{
        auto const a = std::stoi(argv[1]); //1 wartość wpisana w terminalu i zamiana ją na liczbę całkowitą(std::stoi) i przypisanie jej do zmiennej "a"
        auto const b = std::stoi(argv[2]); //2 wartość wpisana w terminalu i zamiana jej w liczbę całkowitą (std::stoi) i przypisanie jej do stałek "b"
        std::cout << (a + b) << "\n"; //wypisanie dodania stałej a i stałej b i przeskoczenie do nowej lini operatorem \n
        return 0; //zakończenie programu zwróceniem 0
}

