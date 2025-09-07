#include <iostream>
#include <string>
using namespace std;

class xOutOfMemory {
public:
    xOutOfMemory()
    {
        theMsg = new char[20];           // Ошибка выделение памяти внутри исключения — 
                                         // если памяти нет, то исключение не сможет создаться.
        strcpy(theMsg, "error in memory"); // Ошибка использование strcpy требует <cstring>.
    }
    ~xOutOfMemory()
    {
        delete[] theMsg;                 // Ошибка здесь освобождается память,
                                         // а затем ниже идет обращение к ней.
        cout << "Memory restored. " << endl;
    }
    char *Message() { return theMsg; }   // Ошибка возвращается указатель на память,
                                         // которая уже может быть удалена в деструкторе.
private:
    char *theMsg;
};

int main()
{
    try
    {
        char *var = new char;           // Ошибка оператор new в C++ при нехватке памяти
                                        // кидает исключение bad_alloc, а не возвращает nullptr.
        if (var == nullptr)             // Ошибка эта проверка никогда не сработает.
        {
            xOutOfMemory *px = new xOutOfMemory; //  Ошибка снова new внутри исключения.
            throw px;                   //  Ошибка кидается указатель, 
                                        // но в catch ловится объект.
        }
    }
    catch (xOutOfMemory theException)   //  Ошибка  тут ловится объект по значению, 
                                        // а кинули указатель → никогда не сработает.
    {
        cout << theException->Message() << endl; // Ошибка обращение как к указателю,
                                                 // но theException — объект, а не указатель.
        delete theException;                     // Ошибка нельзя удалять объект, 
                                                 // созданный на стеке (theException).
    }
    return 0;
}
