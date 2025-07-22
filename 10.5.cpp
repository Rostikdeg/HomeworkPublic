#include <iostream>

using namespace std;

class SimpleCircle {
private:
    int* itsRadius;

public:
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    SimpleCircle(const SimpleCircle& other) {
        itsRadius = new int(*other.itsRadius);
    }

    SimpleCircle& operator=(const SimpleCircle& other) {
        if (this != &other) {
            delete itsRadius;
            itsRadius = new int(*other.itsRadius);
        }
        return *this;
    }

    SimpleCircle& operator++() {
        ++(*itsRadius);
        return *this;
    }

    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        (*itsRadius)++;
        return temp;
    }

    ~SimpleCircle() {}

    int getRadius() const { return *itsRadius; }
};

int main() {
    SimpleCircle c1;
    SimpleCircle c2(9);

    ++c1;
    c2++;

    cout << c1.getRadius() << "\n";
    cout << c2.getRadius() << "\n";

    c1 = c2;

    cout << c1.getRadius() << "\n";

    return 0;
}
