#include <iostream>
using namespace std;

int main() {
    try {
        throw 123;  
    }
    catch (int e) {
        cout << "Виникло виключення! Код помилки: " << e << endl;
    }
    return 0;
}
