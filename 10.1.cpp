#include <iostream>

using namespace std;

class SimpleCircle {
private:
    int itsRadius;

public:
    SimpleCircle(int r = 0) : itsRadius(r) {}

    SimpleCircle& operator++() {
        ++itsRadius;
        return *this;
    }


    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        itsRadius++;
        return temp;
    }

    int getRadius() const { return itsRadius; }
};

int main() {
    SimpleCircle c(5);
    ++c;
    cout << c.getRadius() << "\n";

    c++;
    cout << c.getRadius() << "\n";

    return 0;
}
