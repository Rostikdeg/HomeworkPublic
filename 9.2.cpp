#include <iostream>

using namespace std;

int main() {
    int varOne = 6;
    int varTwo = 10;

    int *const ptr = &varOne;

    *ptr = 6; 

   
    int *ptr = &varTwo;

    cout << "varOne: " << varOne << endl;
    cout << "varTwo: " << *ptr << endl;

    return 0;
}