#include<iostream>
using namespace std;

void px(int* p, int length)
{
	int t;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}
int main()
{
	int length, a;
	cout << "������Ԫ�ظ�����";
	cin >> length;
	int* p = new int[length];
	cout << "�������������֣�";
	for (int i = 0; i < length; i++)
	{
		cin >> p[i];
	}
	cout << "������������Ե����飺";
	cin >> a;
	cout << "p[" << a - 1 << "]=" << p[a - 1] << endl;
	px(p, length);
	for (int i = 0; i < length; i++)
	{
		cout << p[i] << " ";
	}
	delete p;
	system("pause");
	return 0;
}