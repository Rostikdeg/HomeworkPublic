#include <iostream>

using namespace std;

int myFunc(unsigned short int, unsigned short int);

unsigned short int Number1,Number2;
int a;

int main(){
    cout << "Please enter two numbers";
    cout << "\nFirst number : ";
    cin >> Number1;
    cout << "second number : ";
    cin >> Number2;

    a = myFunc(Number1, Number2);
    
    if(a != -1){
        cout << "Everything is fine. Your number is " << a;
    }else{
        cout << "Error";
    }

    return 0;
}

int myFunc(unsigned short int N1, unsigned short int N2){
    if (N2 != 0) {
        return N1 / N2;
    }else{
        return -1;  
    }
}