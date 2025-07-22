#include <iostream>

using namespace std;

class SimpleCircle {
private:
    int* itsRadius;

public:
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    SimpleCircle& operator=(const SimpleCircle& other) {
        if (this == &other) return *this;

        delete itsRadius;
        itsRadius = new int(*other.itsRadius);
        return *this;
    }

    ~SimpleCircle() {}

    int getRadius() const { return *itsRadius; }
};

int main() {
    SimpleCircle c1(3), c2;
    c2 = c1;
    cout << c2.getRadius() << "\n";

    return 0;
}
