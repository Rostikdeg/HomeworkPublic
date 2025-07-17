#include <iostream>

using namespace std;

int* createPointer() {
    int *p = new int(42); 
    return p;
}

int main() {
    int *ptr = createPointer();
    cout << *ptr << endl;
    delete ptr;  
    return 0;
}