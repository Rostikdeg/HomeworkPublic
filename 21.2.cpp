#include <iostream>
using namespace std;

class List {
private:
    class ListCell {
    public:
        int val;
        ListCell* next;
        ListCell(int value, ListCell* cell = 0) : val(value), next(cell) {}
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

    void insert(int value) {
        head = new ListCell(value, head);
        if (!tail) tail = head;
        theCount++;
    }

    void append(int value) {
        ListCell* cell = new ListCell(value);
        if (tail) tail->next = cell;
        else head = cell;
        tail = cell;
        theCount++;
    }

    bool is_present(int value) const {
        for (ListCell* p = head; p; p = p->next) {
            if (p->val == value) return true;
        }
        return false;
    }

    bool is_empty() const { return head == 0; }
    int count() const { return theCount; }
};
