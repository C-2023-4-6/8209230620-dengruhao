#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C, F;
	cout << "�����뻪���¶�:" << endl;
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << "ת�������϶�Ϊ��" << setprecision(3) << C << endl;
}
