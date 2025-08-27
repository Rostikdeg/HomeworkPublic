#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Введіть текст (натисніть Enter для завершення): " << endl;

    while (cin.get(ch)) {           // читаємо символ за символом
        if (ch == '\n') break;      // завершуємо при Enter
        cout << ch;                 // одразу виводимо символ
    }

    cout << endl << "Введення завершено." << endl;
    return 0;
}
