#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int j, i;//�����������С������
	cin >> a >> b;
	/*�������*/
	if (a < b)
	{
		j = a;
		while (1)
		{
			if ((a % j) == 0 && (b % j) == 0)
				break;
			else j--;
		}
	}
	else
	{
		j = b;
		while (1)
		{
			if ((a % j) == 0 && (b % j) == 0)
				break;
			else j--;
		}
	}
	/*�����������ĳ˻������������������Լ������С�������Ļ�*/
	i = a * b / j;
	cout << "�������Ϊ" << j << endl;
	cout << "��С������Ϊ" << i << endl;
}