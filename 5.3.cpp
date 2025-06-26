#include <iostream>

using namespace std;

void myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    y = myFunc(int/*Тут має бути x*/);//це void функція 
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)
{
    return (4 * x); //це void функція 
}