#include <iostream>
#include <string>

using namespace std;


class MyException {
private:
    string message; 
public:
    MyException(string msg) : message(msg) {}
    string getMessage() { return message; } 
};

int main() {
    try {
        throw MyException("Сталася помилка у програмі!");
    }
    catch (MyException e) {
        cout << "Виключення: " << e.getMessage() << endl;
    }
    return 0;
}
