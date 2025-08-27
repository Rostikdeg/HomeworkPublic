#include <iostream>
using namespace std;

class MyClass {
    int normalVar;
    static int staticVar;

public:
    MyClass(int val) {
        normalVar = val;
        staticVar++;
    }

    ~MyClass() {
        staticVar--;
    }

    void print() {
        cout << "Normal: " << normalVar << endl;
    }

    static int getStaticVar() {
        return staticVar;
    }
};

int MyClass::staticVar = 0;

int main() {
    MyClass a(1), b(2);
    a.print();
    b.print();

    cout << "StaticVar через функцію: " << MyClass::getStaticVar() << endl;

    return 0;
}
