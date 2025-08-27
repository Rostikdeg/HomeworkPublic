#include <iostream>
using namespace std;

enum VehicleType { ROCKET, AIRPLANE, JETPLANE, BOEING747 };


class Rocket {
public:
    VehicleType type = ROCKET;
    void launch() {
        cout << "Ракета стартует!" << endl;
    }
};


class Airplane {
public:
    VehicleType type = AIRPLANE;
    void fly() {
        cout << "Літак летить в небі!" << endl;
    }
};


class JetPlane : public Rocket, public Airplane {
public:
    VehicleType type = JETPLANE;
    void jetInfo() {
        cout << "Це реактивний літак (тип: JETPLANE)." << endl;
    }
};


class Boeing747 : public JetPlane {
public:
    VehicleType type = BOEING747;
    void boeingInfo() {
        cout << "Boeing747 — пасажирський реактивний літак (тип: BOEING747)." << endl;
    }
};

int main() {
    Boeing747 b;

    b.launch();    
    b.fly();        
    b.jetInfo();    
    b.boeingInfo();  

    cout << "Тип Boeing747: " << b.type << endl;  

    return 0;
}
