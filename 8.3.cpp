#include <iostream>

using namespace std;

int main() {
    unsigned short yourAge;         
    unsigned short *pAge = &yourAge; 

    *pAge = 50;                      

    cout << "Ваш вік: " << yourAge << endl; 

    return 0;
}