#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = &SomeVariable;
	/*тут пропущено знак "*" */pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}
