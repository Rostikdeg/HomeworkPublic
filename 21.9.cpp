#include <iostream>
using namespace std;

template <typename T>
void swapData(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapData(x, y);
    cout << x << " " << y << endl;
    return 0;
}
