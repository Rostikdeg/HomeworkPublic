#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Введіть число: ";  
    cin >> number;              

    cout << "Ви ввели: " << number << endl;

    if (number < 0) {
        cerr << "Помилка: число не може бути від'ємним!" << endl; 
    } else {
        clog << "Інформація: введене число коректне." << endl;    
    }

    return 0;
}
