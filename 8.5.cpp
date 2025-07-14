#include <iostream>

using namespace std;

int main()
{
	int *pInt;
	*pInt = 9;//вказівник не ініціалізований
	cout << " The value at pInt: "<< *pInt;

	return 0;
}