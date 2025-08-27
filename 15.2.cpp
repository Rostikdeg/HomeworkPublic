#include <iostream>

using namespace std;


class Vehicle {
public:
    virtual void move() = 0;
    virtual void stop() = 0;
};


class Car : public Vehicle {
public:
  
    void stop() override {
        cout << "Автомобіль зупинився." << endl;
    }
    virtual void move() = 0; 
};


class SportsCar : public Car {
public:
    void move() override {
        cout << "Спортивний автомобіль мчить дуже швидко!" << endl;
    }
};


class Wagon : public Car {
public:
    void move() override {
        cout << "Фургон перевозить вантаж." << endl;
    }
};


class Coupe : public Car {
public:
    void move() override {
        cout << "Двомісний автомобіль-купе виїхав у подорож." << endl;
    }
};

int main() {
    SportsCar s;
    Wagon w;
    Coupe c;

    s.move(); s.stop();
    w.move(); w.stop();
    c.move(); c.stop();

    return 0;
}
