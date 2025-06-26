#include <iostream>

using namespace std;

int myFunc(unsigned short int, unsigned short int);

unsigned short int Number1,Number2;
int a;

int main(){
    Number1 = 250;
    Number2 = 0;

    a = myFunc(Number1, Number2);
    
    cout << "a: "<< a;

    return 0;
}

int myFunc(unsigned short int N1, unsigned short int N2){
    if (N2 != 0) {
        return N1 / N2;
    }else{
        return -1;  
    }
}