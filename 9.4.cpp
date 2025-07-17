#include <iostream>

using namespace std;

int* createDanglingPointer() {
    int localVar = 42;
    return &localVar;  
}

int main() {
    int *ptr = createDanglingPointer();
    cout << *ptr << endl;
    return 0;
}