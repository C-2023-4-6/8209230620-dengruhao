#include<iostream>
using namespace std;
int main()
{
	char y;
	int x,z,i;
	cin >> x >> y >> z;
	if (y == 43)//�Ӻ�
	{
		i = x + z;
		cout << "������Ϊ" << i << endl;
	}
	if (y == 45)//����
	{
		i = x - z;
		cout << "������Ϊ" << i << endl;
	}
	if (y == 42)//�˺�
	{
		i = x * z;
		cout << "������Ϊ" << i << endl;
	}
	if (y == 47)//����
		if (z != 0)
		{
			i = x / z;
			cout << "������Ϊ" << i << endl;
		}
		else cout << "��������Ϊ0" << endl;
	if (y == 37)//%
	{
		i = x % z;
		cout << "������Ϊ" << i << endl;
	}
	if (y != 43 && y != 45 && y != 42 && y != 47 && y != 37)
		cout << "��������Ϸ�" << endl;
	return 0;
}