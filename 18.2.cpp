#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Введіть ваше повне ім'я: ";
    getline(cin, fullName);  
    
    cout << "Ваше ім'я: " << fullName << endl;

    return 0;
}
