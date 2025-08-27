#include <iostream>

using namespace std;

class MyClass {
public:
    int normalVar;
    static int staticVar;

    MyClass(int val) {
        normalVar = val;
        staticVar++;
    }

    ~MyClass() {
        staticVar--;
    }
};

int MyClass::staticVar = 0;

int main() {
    MyClass obj1(5);
    cout << "StaticVar після створення: " << MyClass::staticVar << endl;

    {
        MyClass obj2(10);
        cout << "StaticVar після створення другого об'єкта: " << MyClass::staticVar << endl;
    }

    cout << "StaticVar після знищення другого об'єкта: " << MyClass::staticVar << endl;

    return 0;
}

