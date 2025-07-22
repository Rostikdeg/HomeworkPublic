// simplecircle_3.cpp
#include <iostream>
using namespace std;

class SimpleCircle {
private:
    int* itsRadius;

public:
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    // Конструктор копіювання
    SimpleCircle(const SimpleCircle& other) {
        itsRadius = new int(*other.itsRadius);
    }

    ~SimpleCircle() {}

    int getRadius() const { return *itsRadius; }
};

int main() {
    SimpleCircle c1(10);
    SimpleCircle c2 = c1;
    cout << c2.getRadius() << "\n";
    return 0;
}
