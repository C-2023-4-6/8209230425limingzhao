#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;//��ʼ��
	}
	for (int i = 0; i < 100; i++)
	{
		counts[s[i] - 'a']++;//����ASCIIֵ���������Խ��мӼ�
		counts[s[i] - 'A']++;
	}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s, counts);//���ú���
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)//�г��ֲ����
		{
			cout << (char)(i + 'a') << ":" << counts[i] << " times" << endl;
		}
	}
	system("pause");
	return 0;
}