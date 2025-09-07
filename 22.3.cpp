#include <iostream>
#include <string>

using namespace std;


class MyException {
protected:
    string message;
public:
    MyException(string msg) : message(msg) {}
    string getMessage() { return message; }
};


class MyDerivedException : public MyException {
public:
    MyDerivedException(string msg) : MyException(msg) {}
};

int main() {
    try {
        throw MyDerivedException("Помилка у похідному виключенні!");
    }
    catch (MyDerivedException e) {
        cout << "Спіймано похідне виключення: " << e.getMessage() << endl;
    }
    catch (MyException e) {
        cout << "Спіймано базове виключення: " << e.getMessage() << endl;
    }
    return 0;
}
