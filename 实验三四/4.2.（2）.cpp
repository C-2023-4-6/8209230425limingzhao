#include<iostream>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString)
{
	int a, sum = 0;
	a = strlen(hexString);
	int* arr;
	arr = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			arr[i] = ((int)(hexString[i]) - 55) * (pow(16, a - 1 - i));
		}
		else
		{
			arr[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		}
		sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	char arr[1000];
	cout << "������һ��ʮ����������";
	cin.getline(arr, 1000);
	cout << "ת��Ϊʮ������Ϊ��" << parseHex(arr);

	system("pause");
	return 0;
}