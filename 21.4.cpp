#include <iostream>
#include <string>
using namespace std;

template <typename T>
class List {
private:
    class ListCell {
    public:
        T val;
        ListCell* next;
        ListCell(T value, ListCell* cell = 0) : val(value), next(cell) {}
    };

    ListCell* head;
    ListCell* tail;
    int theCount;

public:
    List() : head(0), tail(0), theCount(0) {}
    ~List() {
        while (head) {
            ListCell* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    void append(T value) {
        ListCell* cell = new ListCell(value);
        if (tail) tail->next = cell;
        else head = cell;
        tail = cell;
        theCount++;
    }

    bool is_present(T value) const {
        for (ListCell* p = head; p; p = p->next) {
            if (p->val == value) return true;
        }
        return false;
    }
};

class Cat {
public:
    string name;
    Cat(string n = "Безіменний") : name(n) {}
    bool operator==(const Cat& other) const {
        return name == other.name;
    }
};

int main() {
    List<string> listOfStrings;
    List<Cat> listOfCats;
    List<int> listOfInts;

    listOfStrings.append("Привіт");
    listOfCats.append(Cat("Felix"));
    listOfInts.append(100);

    return 0;
}
