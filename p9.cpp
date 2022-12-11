#include <iostream>
#include "windows.h"
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int u, p, j;
        int i=0;
        int k=7, h=5;
	cout << "\nВведіть U: ";
	cin >> u;
	cout << "\nВведіть P: ";
	cin >> p;
	cout << "\nВведіть J: ";
	cin >> j;
	cout << "\n x належить інтервалу [P ; J] ?   " << boolalpha << (u >= p == u <= j) << endl;
	system("pause");
	return 0;
}