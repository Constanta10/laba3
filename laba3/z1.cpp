#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x;
	cout << "������� �����:";
	cin >> x;
	if (x % 2 != 0 && x % 100 >= 1) {
		cout << "����� �������� �������� � �����������" << endl;
 }
	else  {
		cout << "����� ������������" << endl;
	}
	return 0;
}