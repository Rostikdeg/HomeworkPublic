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

void func3() {
    throw MyException("Помилка у func3!");
}

void func2() {
    func3();
}

void func1() {
    func2();
}

int main() {
    try {
        func1();
    }
    catch (MyException e) {
        cout << "Виключення перехоплено у main: " << e.getMessage() << endl;
    }
    return 0;
}
