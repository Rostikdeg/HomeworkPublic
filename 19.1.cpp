#include <iostream>
#include <fstream>
#include <cctype>  

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Будь ласка, вкажіть ім'я файлу!" << endl;
        return 1;
    }

    ifstream file(argv[1]); 
    if (!file) {
        cout << "Не вдалося відкрити файл!" << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        if (isprint(ch)) { 
            cout << ch;
        }
    }

    file.close();
    return 0;
}
