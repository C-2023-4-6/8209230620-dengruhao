#include<iostream>
using namespace std;
int main() 
{
	int zm, kg, sz, qt;
	zm = kg = sz = qt = 0;
	int c;
	while ( (c=getchar()) != '\n')
	{  
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))//Ӣ����ĸ
		{
			zm++;
		}
		else 
		{
			if (c == 32)//SPACE
				kg++;
			else
			{
				if (c >= 48 && c <= 57)//����
					sz++;
				else
					qt++;
			}
		}
	}
	cout << "��ĸΪ" << zm << endl;
	cout << "�ո�Ϊ" << kg << endl;
	cout << "�����ַ�Ϊ" << sz<< endl;
	cout << "����Ϊ" << qt << endl;
}