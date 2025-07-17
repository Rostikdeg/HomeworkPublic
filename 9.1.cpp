#include <iostream>

using namespace std;

int main() {
    int value = 10;
    int &ref = value;
    int *ptr = &value;
    
    cout << "Value: " << value << endl;

    ref = 20;
    cout << "Value: " << value << endl;
    *ptr = 30;
    cout << "Value: " << value << endl;
    return 0;
}