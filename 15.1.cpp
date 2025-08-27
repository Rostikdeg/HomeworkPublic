#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void move() = 0;
    virtual void stop() = 0;
};


class Car : public Vehicle {
public:
    void move() override {
        cout << "Легковий автомобіль їде по дорозі." << endl;
    }
    void stop() override {
        cout << "Легковий автомобіль зупинився." << endl;
    }
};

class Bus : public Vehicle {
public:
    void move() override {
        cout << "Автобус везе пасажирів." << endl;
    }
    void stop() override {
        cout << "Автобус зупинився на зупинці." << endl;
    }
};

int main() {
    Car c;
    Bus b;

    c.move();
    c.stop();

    b.move();
    b.stop();

    return 0;
}