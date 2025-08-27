#include <iostream>

using namespace std;

class BoundedArray {
private:
    static const int SIZE = 5;
    int arr[SIZE];

public:
    void set(int index, int value) {
        if (index >= 0 && index < SIZE)
            arr[index] = value;
        else
            cout << "Помилка: індекс поза межами!" << endl;
    }

    int get(int index) {
        if (index >= 0 && index < SIZE)
            return arr[index];
        else
            return -1;
    }
};

int main() {
    BoundedArray arr;
    arr.set(0, 10);
    arr.set(1, 20);
    cout << "Елемент 0: " << arr.get(0) << endl;
    cout << "Елемент 1: " << arr.get(1) << endl;

    return 0;
}
