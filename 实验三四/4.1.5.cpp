#include<iostream>
#include<cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int a, b, index, j, k;
	a = strlen(s1);//strlen��ȡ�ַ���
	b = strlen(s2);
	bool* s3;
	s3 = new bool[a];//�ڶ��Ͻ�����̬����
	for (int m = 0; m < a; m++)
	{
		s3[m] = false;//��ʼ����������Ԫ��ȫ����ֵΪfalse
	}
	for (int i = 0; i < b - a + 1; i++)//����s2������ĸ��������ĸ��ȻҪ�����ڵڶ��仰b-a+1���ַ�ǰ
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      //����s2���������
		{
			if (s1[j] == s2[k])//������Ӧ������ͬ���ַ�����ֵ
			{
				index = i;//��¼��һ����ȵ��ַ�
				s3[j] = true;//��ֵΪ��ȷ
			}
		}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)//����ĸδ�����ڵڶ��仰b-a+1���ַ�ǰ
			{
				return -1;//���򷵻�-1
				break;
			}
			if (s3[n])
			{
				h++;//��¼��ֵ�ĸ���
			}
		}
		if (h == a)//���һ�������������
		{
			return index;//��ȫ����������򷵻��±�
		}
	}
}
int main()
{
	int size = 999;
	char s1[999], s2[999];
	cout << "Enter the first string : ";
	cin.getline(s1, size);//��ȡһ��
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	system("pause");
	return 0;
}