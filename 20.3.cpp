#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Event {
    string name;
    string time;
public:
    Event(string n, string t) : name(n), time(t) {}
    void show() const { cout << "Подія: " << name << " о " << time << endl; }
};


class Participant {
    string name;
public:
    Participant(string n) : name(n) {}
    string getName() const { return name; }
};


class ConferenceRoom {
    string name;
    int capacity;
public:
    ConferenceRoom(string n, int c) : name(n), capacity(c) {}
    void show() const {
        cout << "Зала: " << name << " (Місць: " << capacity << ")\n";
    }
};


class Hotel {
    string name;
    int rooms;
public:
    Hotel(string n, int r) : name(n), rooms(r) {}
    void show() const {
        cout << "Готель: " << name << " (Номерів: " << rooms << ")\n";
    }
};

int main() {
    Event ev("Конференція з ІТ", "10:00");
    Participant p("Іван Іваненко");
    ConferenceRoom room("Велика зала", 100);
    Hotel h("Готель Дніпро", 50);

    ev.show();
    cout << "Учасник: " << p.getName() << endl;
    room.show();
    h.show();

    return 0;
}
