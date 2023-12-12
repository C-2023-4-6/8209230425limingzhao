#include<iostream>
#include<vector>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int t;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];//������1��ֵ������3
	}
	for (int i = 0; i < size2; i++)
	{
		list3[i + size1] = list2[i];//ע��i+sizeҲ��ֱ��int i=size1��������2��ֵ������3
	}
	for (int i = 0; i < (size1 + size2) - 1; i++)//ð������
	{
		for (int j = 0; j < (size1 + size2) - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				t = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = t;
			}
		}
	}
	cout << "The merged list is ";
	for (int i = 0; i < (size1 + size2); i++)
	{
		cout << list3[i] << " ";//�������õ�����3

	}
}

int main()
{
	int n1;
	int* a1;
	cout << "Enter list1:";
	cin >> n1;//��������1����
	a1 = new int[n1];//ʹ�ö�̬�����ڴ�����Ӧ����Ĳ�ͬ��ֵ
	for (int i = 0; i < n1; i++)
	{
		cin >> a1[i];
	}
	int n2;
	int* a2;
	cout << "Enter list2:";
	cin >> n2;//��������2����
	a2 = new int[n2];
	for (int i = 0; i < n2; i++)
	{
		cin >> a2[i];
	}
	int* a3 = new int[n1 + n2];
	merge(a1, n1, a2, n2, a3);//���ú���
	delete a1, a2;
	system("pause");
	return 0;
}