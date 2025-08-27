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

    void print() {
        cout << "Normal: " << normalVar << ", Static: " << staticVar << endl;
    }
};

int MyClass::staticVar = 0;

int main() {
    MyClass *a = new MyClass(1);
    MyClass *b = new MyClass(2);
    MyClass *c = new MyClass(3);

    a->print();
    b->print();
    c->print();

    delete a;
    delete b;
    delete c;

    cout << "StaticVar після видалення: " << MyClass::staticVar << endl;

    return 0;
}
