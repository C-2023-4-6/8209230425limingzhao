#include<iostream>
using namespace std;

int main()
{
	const int length = 100;
	bool arr[length];//����bool������
	for (int i = 0; i < length; i++)
	{
		arr[i] = false;//��ʼ������falseΪ��
	}
	for (int i = 0; i < length; i++)//��һ��ѭ���ӵ�һ��ͬѧ��ʼ
	{
		for (int j = i; j < length; j += i + 1)//�����������ѡ���Ӧ����
		{
			//�ı�״̬
			if (arr[j])
			{
				arr[j] = false;
			}
			else
			{
				arr[j] = true;
			}
		}
	}
	cout << "����ŵĹ����У�" << endl;
	for (int i = 0; i < length; i++)
	{
		if (arr[i])//������ŵĹ���
		{
			cout << i + 1 << "\t";//ע��Ӧ�����i+1���״�
		}
	}
	cout << endl;
	system("pause");
	return 0;
}