#include <iostream>

using namespace std;

class BoundedArray {
private:
    static const int SIZE = 10;
    int data[SIZE];

public:
    int& operator[](int index) {
        if (index >= 0 && index < SIZE)
            return data[index];
        else {
            cout << "Помилка індексу!" << endl;
            exit(1);
        }
    }
};

class Set {
private:
    BoundedArray arr;
    int count = 0;

public:
    void add(int value) {
        arr[count++] = value;
    }

    void print() {
        for (int i = 0; i < count; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Set mySet;
    mySet.add(5);
    mySet.add(10);
    mySet.add(15);

    cout << "Множина: ";
    mySet.print();

    return 0;
}
