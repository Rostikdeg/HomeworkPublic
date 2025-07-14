#include <iostream>
using namespace std;

int main() {
    int number;           
    int* pNumber = &number; 

    *pNumber = 42;   

    cout << "number: " << number << endl;
    cout << "&numbe: " << &number << endl;
    cout << "pNumber: " << pNumber << endl;
    cout << "*pNumber: " << *pNumber << endl;
    cout << "&pNumber: " << &pNumber << endl;
}