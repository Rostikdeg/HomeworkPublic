#include <iostream>

using namespace std;

class SimpleCircle {
private:
    int* itsRadius;

public:
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    ~SimpleCircle() {
    }

    void setRadius(int r) { *itsRadius = r; }
    int getRadius() const { return *itsRadius; }
};

int main() {
    SimpleCircle c(7);
    cout << c.getRadius() << "\n";
    
    return 0;
}
