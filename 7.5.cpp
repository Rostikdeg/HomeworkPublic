#include <iostream>

using namespace std;

int main(){
    int i = 100;

    do
    {
        i+=2;
        cout << i << ", ";
    }while(i < 200);
    
    return 0;
}