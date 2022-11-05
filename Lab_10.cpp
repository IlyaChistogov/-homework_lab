#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a[1000], n, k, l, s, m;
	cout << "Введите колличество элементов массива\n";
	cin >> n /*>> m*/;//m - заданный номер
	cout << "Сколько элементов нужно удалить\n";
	cin >> k;
	cout << "Заполните массив\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Введите номер нового элемента\n";
	cin >> l;//l - index, s - число
	cout << "Введите новый элемент\n";
	cin >> s;

	for (int i = n/*m*/; i < n - k; i++)
		for (int j = i + k; i < n; i++)
			a[i] = a[j];
	n -= k;

	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;

	for (int i = n - 1; i >= l; i--)
		a[i + 1] = a[i];
	n++;
	a[l] = s;


	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;

	return 0;
}