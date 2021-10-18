#include <iostream>
#include <string>
using namespace std;
string password, password2;
int main( int argc, char * argv[]){
    password = string{argv[1]};
    do{
		cout << "password: ";
		cin >> password2;
	}while (password2 != password);
    cout << "Ok" << "!\n";
	return 0;
}
