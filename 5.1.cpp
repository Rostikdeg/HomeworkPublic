#include <iostream>

using namespace std;

unsigned long int Perimeter(unsigned short int , unsigned short int);

unsigned short int a, b, c;

int main(){
    cout<<"Please enter a:";
    cin >> a;
    cout << "Please enter b:";
    cin >> b;

    c = Perimeter(a , b);
    cout << "c: " << c;
    return 0;
}


unsigned long int Perimeter(unsigned short int a ,unsigned short int b){
    return 2*(a+b);
}