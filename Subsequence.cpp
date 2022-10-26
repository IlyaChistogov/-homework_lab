#include <iostream> 
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, n;
	n = 0;
	cout << "\nВведите число: ";
	cin >> a;
	while ((a == 0) && (n != 4))
	{
		cout << "\nВы вели 0, введите число снова: ";
		cin >> a;
		n++;
	}
	min = a;
	while (a != 0)
	{
		cout << "\nВведите число: ";
		cin >> a;
		if (a < min && a != 0)
			min = a;
	}
	if (min == 0)
	{
		cout << "нулевая последовательность";
	}
	else {
		cout << "min = " << min << endl;
	}
	return 0;
}