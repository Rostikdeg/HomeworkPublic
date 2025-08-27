#include <iostream>

using namespace std;

int main() {
    char gameField[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameField[i][j] = '.';  
            cout << gameField[i][j] << " ";
        }
        
        cout << endl;
    }

    return 0;
}