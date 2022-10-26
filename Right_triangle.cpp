#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int s;
	cout << "Введите длину катета не меньше 2: ";
	cin >> s;
	while (s < 2)
	{
		cout << "Вы ввели длину катета меньше 2";
		cout << "\nВведите длину катета снова:";
		cin >> s;
	}
	int c1 = s - 1;
	int c2 = 1;
	for (int i = 0; i < s; i++)
	{
		for (int j = 1; j <= c1; j++)
			cout << "  ";
		for (int j = 1; j <= c2; j++)
			cout << " *";
		c2++; c1--;
		cout << endl;
	}
	return 0;
}