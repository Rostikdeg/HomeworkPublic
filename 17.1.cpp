#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    string name;
};

int main() {
    Animal dog;
    dog.name = "Rex";
    cout << "Тварина: " << dog.name << endl;

    return 0;
}
