#include <iostream> 
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, n;
	n = 0;
	cout << "\n������� �����: ";
	cin >> a;
	while ((a == 0) && (n != 4))
	{
		cout << "\n�� ���� 0, ������� ����� �����: ";
		cin >> a;
		n++;
	}
	min = a;
	while (a != 0)
	{
		cout << "\n������� �����: ";
		cin >> a;
		if (a < min && a != 0)
			min = a;
	}
	if (min == 0)
	{
		cout << "������� ������������������";
	}
	else {
		cout << "min = " << min << endl;
	}
	return 0;
}