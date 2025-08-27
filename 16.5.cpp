#include <iostream>

using namespace std;

class MyClass {
    int a, b, c;
    static int count;

public:
    MyClass(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
        count++;
    }

    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }

    static int getCount() { return count; }
};

int MyClass::count = 0;

int main() {
    MyClass obj(1, 2, 3);


    int (MyClass::*ptrA)() = &MyClass::getA;
    int (MyClass::*ptrB)() = &MyClass::getB;
    int (MyClass::*ptrC)() = &MyClass::getC;

    cout << "A: " << (obj.*ptrA)() << endl;
    cout << "B: " << (obj.*ptrB)() << endl;
    cout << "C: " << (obj.*ptrC)() << endl;

    return 0;
}
