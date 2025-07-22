#include <iostream>

using namespace std;

class Shape {
public:
    Shape() {}
};

class Rectangle : public Shape {
protected:
    int length, width;

public:
    Rectangle(int l, int w) : Shape(), length(l), width(w) {}
};

class Square : public Rectangle {
public:
    Square(int l) : Rectangle(l, l) {}
};

int main() {
    Square s(5);
    return 0;
}
