/*
1) обмежена тільки обсягом оперативної пам’яті
2) ні прямогу доступа немає 
3) Останій знак "ь"
*/

#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);

    first->next = second;

    cout << "Перший елемент: " << first->data << endl;
    cout << "Другий елемент: " << first->next->data << endl;

    delete first;
    delete second;

    return 0;
}