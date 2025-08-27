#include <iostream>

using namespace std;

class MyClass {
private:
    int value;
    static int counter;       

public:

    MyClass(int v) {
        value = v;
        counter++; 
        cout << "Створено об'єкт зі значенням " << value 
             << ". Кількість об'єктів: " << counter << endl;
    }

  
    ~MyClass() {
        counter--;
        cout << "Знищено об'єкт зі значенням " << value 
             << ". Кількість об'єктів: " << counter << endl;
    }
};


int MyClass::counter = 0;

int main() {
    MyClass a(10);
    {
        MyClass b(20);
        MyClass c(30);
    } 
    MyClass d(40);

    return 0;
}
