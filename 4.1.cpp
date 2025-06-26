#include <iostream>

using namespace std;

int a, c;

int main(){
    cout << "Please enter two numbers ";
    cout << "\na:";
    cin >> a;
    cout << "c:";
    cin >> c;

    if (c > a){
        c = a;
        cout << "c > a\n";
        cout << "c = " << c;
    }else{
        a = c;
        cout << "a > c\n";
        cout << "a = " << a;
    }

    return 0;
}