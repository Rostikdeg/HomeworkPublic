#include <iostream>

using namespace std;

unsigned short int Number, degree, a;
int i = 1;

unsigned short int myFunc(unsigned short int, unsigned short int);

int main(){
    cout << "\nPlease enter number\n";
    cin >> Number;
    cout <<"Please enter degree\n";
    cin >> degree;

    a = myFunc(Number, degree);

    cout << a;
    
    return 0;
}

unsigned short int myFunc(unsigned short int number, unsigned short int degree){
    number = number * Number;
    i++;
    if (i == degree){
        return number;
    }else{
        number = myFunc(number, degree);
        return number;
    }
}
