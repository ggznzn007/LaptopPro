#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;
	//1. ��(year)�� 4�� ����̸鼭 100�� ����� �ƴϸ� ����.
	// (year%4 == 0) AND (year%100 != 0)
	//�Ǵ�
	//2. 400�� ����̸� ����.
	//(year%400 == 0)
	if (((year % 4 == 0) && (year % 100 == 0)) || (year % 400 == 0))
	{
		cout << "no";
	}
	else
	{
		cout << "yes";
	}
	return 0;
}