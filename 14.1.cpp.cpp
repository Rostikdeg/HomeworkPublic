#include <iostream>

using namespace std;

enum VehicleType { ROCKET, AIRPLANE, JETPLANE };

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

int main() {
    JetPlane jp;

    jp.launch();    
    jp.fly();      
    jp.jetInfo();  

    cout << "Тип JetPlane: " << jp.type << endl;  
    return 0;
}
