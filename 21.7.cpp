#include <iostream>
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

    friend bool operator==(const List<T>& a, const List<T>& b) {
        if (a.theCount != b.theCount) return false;
        auto pa = a.head;
        auto pb = b.head;
        while (pa && pb) {
            if (!(pa->val == pb->val)) return false;
            pa = pa->next;
            pb = pb->next;
        }
        return true;
    }
};
