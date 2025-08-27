#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const string& str) {
    os << "[Строка: " << str << "]";
    return os;
}

int main() {
    string message = "Привіт, світ!";
    cout << message << endl;
    return 0;
}
