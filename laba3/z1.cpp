#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x;
	cout << "введите число:";
	cin >> x;
	if (x % 2 != 0 && x % 100 >= 1) {
		cout << "число является нечетным и трехзначным" << endl;
 }
	else  {
		cout << "число неправильное" << endl;
	}
	return 0;
}