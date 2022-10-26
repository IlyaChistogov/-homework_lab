#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const char s = '*';
	int a;
	cout << "Введите длину стороны квадрата не меньше 3: ";
	cin >> a;
	while (a < 3)
	{
		cout << "Вы вели длину меньше 3 ";
		cout << "\nВведите длуну стороны снова: ";
		cin >> a;
	}

	for (int i = 0; i < a; i++)
		cout << s;
	cout << endl;

	for (int i = 0; i < a - 2; i++)
		cout << s << setw(a - 1) << s << endl;

	for (int i = 0; i < a; i++)
		cout << s;
	cout << endl;

	return 0;
}