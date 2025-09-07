#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MyContainer {
private:
    vector<T> data;  
public:
    void push_front(const T& value) {
        data.insert(data.begin(), value);
    }

    void push_back(const T& value) {
        data.push_back(value);
    }

    void pop_front() {
        if (!data.empty()) {
            data.erase(data.begin());
        }
    }

    void pop_back() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    T& front() {
        return data.front();
    }

    T& back() {
        return data.back();
    }

    void insert(int index, const T& value) {
        if (index >= 0 && index <= data.size()) {
            data.insert(data.begin() + index, value);
        }
    }

    int size() const {
        return data.size();
    }

    typename vector<T>::iterator begin() {
        return data.begin();
    }

    typename vector<T>::iterator end() {
        return data.end();
    }
};


int main() {
    MyContainer<int> c;

    c.push_back(10);
    c.push_back(20);
    c.push_front(5);
    c.insert(1, 7);  

    cout << "Перший елемент: " << c.front() << endl;
    cout << "Останній елемент: " << c.back() << endl;
    cout << "Розмір: " << c.size() << endl;

    cout << "Вміст контейнера: ";
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    c.pop_front();
    c.pop_back();

    cout << "Після pop_front та pop_back: ";
    for (auto it = c.begin(); it != c.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
