#include <iostream>
#include "windows.h"
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, a, b;
        int i=0;
        int k=7, h=5;
	cout << "\nВведіть х: ";
	cin >> x;
	cout << "\nВведіть A: ";
	cin >> a;
	cout << "\nВведіть B: ";
	cin >> b;
	cout << "\n x належить інтервалу [A ; B] ?   " << boolalpha << (x >= a == x <= b) << endl;
	system("pause");

	return 0;
}