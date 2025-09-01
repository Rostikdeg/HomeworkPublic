#include <iostream>
#include <string>
using namespace std;


class IReservable {
public:
    virtual void reserve(const string& name) = 0;
    virtual void cancel(const string& name) = 0;
    virtual void showReservations() const = 0;
    virtual ~IReservable() {}
};


class HotelRoom : public IReservable {
    string guest;
public:
    void reserve(const string& name) override {
        if (guest.empty()) {
            guest = name;
            cout << "Номер заброньовано для: " << name << endl;
        } else {
            cout << "Номер вже зайнятий.\n";
        }
    }
    void cancel(const string& name) override {
        if (guest == name) {
            guest.clear();
            cout << "Бронювання скасовано: " << name << endl;
        }
    }
    void showReservations() const override {
        if (!guest.empty())
            cout << "Номер зарезервовано: " << guest << endl;
        else
            cout << "Номер вільний.\n";
    }
};

int main() {
    HotelRoom room;
    room.reserve("Петро Петренко");
    room.showReservations();
    room.cancel("Петро Петренко");
    room.showReservations();
    return 0;
}
