#include <iostream>
#include <ctime>
#include <cstdlib>
enum PERMISSION {
    PERM_READ = 1,
    PERM_WRITE = 2,
    PERM_EXECUTE = 4,
};
int main()
{
    srand(time(NULL));
    int users[10];
    for (int i = 0; i < 10; i++) {
        users[i] = rand() % 8;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << "User: " << i << " ma dostep do: ";
        auto const can_read = (users[i] & PERM_READ);
        auto const can_write = (users[i] & PERM_WRITE);
        auto const can_execute = (users[i] & PERM_EXECUTE);
        if (can_read > 0) 
            std::cout << "read ";
        
        if (can_write > 0) 
            std::cout << "wirte ";
        
        if (can_execute > 0) 
            std::cout << "execute ";
    std::cout << "\n";
    }


}