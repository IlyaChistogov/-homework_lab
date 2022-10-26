#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество звёзд в основании, не меньше 2: ";
	cin >> n;
	while (n < 2)
	{
		cout << "Вы ввели число меньше 2";
		cout << "Введите количество звёзд в основании снова:";
		cin >> n;
	}
	int p = n - 1;
	int z = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= p; j++)
			cout << "  ";
		for (int j = 1; j <= z; j++)
			cout << "  * ";
		z++; p--;
		cout << endl;
	}
	return 0;
}