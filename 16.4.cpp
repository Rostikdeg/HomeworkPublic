#include <iostream>
using namespace std;

class MyClass {
    int value;
    static int count;

public:
    MyClass(int v) {
        value = v;
        count++;
    }

    int getValue() {
        return value;
    }

    static int getCount() {
        return count;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj(42);

    int (MyClass::*ptr)() = &MyClass::getValue;
    cout << "Значення через вказівник: " << (obj.*ptr)() << endl;

    return 0;
}
