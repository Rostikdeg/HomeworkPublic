#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int age;
    Student(string n, int a) : name(n), age(a) {}
};

class PrintStudent {
public:
    void operator()(const Student& s) const {
        cout << s.name << " (" << s.age << ")\n";
    }
};

class SchoolClass {
    vector<Student> students;
public:
    void addStudent(const Student& s) { students.push_back(s); }
    void increaseAge() { for (auto& s : students) s.age++; }
    void show() const {
        for (auto& s : students) {
            PrintStudent()(s);
        }
    }
};

int main() {
    SchoolClass cls;
    cls.addStudent(Student("Іван", 15));
    cls.addStudent(Student("Марія", 14));
    cls.increaseAge();
    cls.show();
    return 0;
}
