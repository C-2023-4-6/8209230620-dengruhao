#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	cout << "������������������" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if (x + y > z && x + z > y && z + y > x)
	{
		cout << "�ܳ�Ϊ��" << x + y + z << endl;
		if (x == y || x == z || z == y)
			cout << "��������Ϊ����������" << endl;
		else
			cout << "�������β��ǵ���������" << endl;
	}
	else
		cout << "��ɲ�����������" << endl;
	return 0;
}
