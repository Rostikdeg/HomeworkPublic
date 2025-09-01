#include <iostream>
#include <string>

using namespace std;

class TrafficLight {
    string state; 
public:
    TrafficLight(string s = "red") : state(s) {}
    void change(string s) { state = s; }
    string getState() const { return state; }
};


class Street {
    string name;
public:
    Street(string n) : name(n) {}
    string getName() const { return name; }
};


class Pedestrian {
public:
    void cross(const TrafficLight& light) {
        if (light.getState() == "green")
            cout << "Пішохід переходить дорогу.\n";
        else
            cout << "Пішохід чекає.\n";
    }
};


class Car {
public:
    void move(const TrafficLight& light) {
        if (light.getState() == "green")
            cout << "Машина їде.\n";
        else
            cout << "Машина стоїть.\n";
    }
};

int main() {
    TrafficLight light("red");
    Street street1("Вулиця A"), street2("Вулиця B");
    Car car;
    Pedestrian ped;

    cout << "Стан світлофора: " << light.getState() << endl;
    car.move(light);
    ped.cross(light);

    light.change("green");
    cout << "\nСтан світлофора змінився: " << light.getState() << endl;
    car.move(light);
    ped.cross(light);

    return 0;
}
