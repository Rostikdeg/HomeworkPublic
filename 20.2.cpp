#include <iostream>
#include <string>

using namespace std;

class TrafficLight {
    string state;
public:
    TrafficLight(string s = "red") : state(s) {}
    string getState() const { return state; }
};


class Driver {
public:
    virtual void drive(const TrafficLight& light) = 0;
};


class TaxiDriver : public Driver {
public:
    void drive(const TrafficLight& light) override {
        cout << "Таксист проїхав навіть на " << light.getState() << "!\n";
    }
};


class LocalDriver : public Driver {
public:
    void drive(const TrafficLight& light) override {
        if (light.getState() == "green")
            cout << "Місцевий водій їде.\n";
        else
            cout << "Місцевий водій зупинився.\n";
    }
};


class TouristDriver : public Driver {
public:
    void drive(const TrafficLight& light) override {
        if (light.getState() == "green")
            cout << "Турист повільно поїхав.\n";
        else
            cout << "Турист стоїть.\n";
    }
};


class Pedestrian {
public:
    virtual void cross(const TrafficLight& light) = 0;
};


class LocalPedestrian : public Pedestrian {
public:
    void cross(const TrafficLight& light) override {
        cout << "Місцевий пішохід може перейти навіть на "
             << light.getState() << ".\n";
    }
};


class TouristPedestrian : public Pedestrian {
public:
    void cross(const TrafficLight& light) override {
        if (light.getState() == "green")
            cout << "Турист-пішохід переходить.\n";
        else
            cout << "Турист-пішохід чекає.\n";
    }
};


class Cyclist : public Pedestrian {
public:
    void cross(const TrafficLight& light) override {
        if (light.getState() == "green")
            cout << "Велосипедист їде через перехід.\n";
        else
            cout << "Велосипедист стоїть.\n";
    }
};

int main() {
    TrafficLight light("red");

    TaxiDriver taxi;
    LocalDriver local;
    TouristDriver tourist;
    LocalPedestrian ped1;
    TouristPedestrian ped2;
    Cyclist cyclist;

    cout << "Стан світлофора: " << light.getState() << endl;
    taxi.drive(light);
    local.drive(light);
    tourist.drive(light);
    ped1.cross(light);
    ped2.cross(light);
    cyclist.cross(light);

    return 0;
}
