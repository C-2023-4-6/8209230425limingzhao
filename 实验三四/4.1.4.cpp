#include<iostream>
#include<vector>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int t;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];//将数组1赋值给数组3
	}
	for (int i = 0; i < size2; i++)
	{
		list3[i + size1] = list2[i];//注意i+size也可直接int i=size1，将数组2赋值给数组3
	}
	for (int i = 0; i < (size1 + size2) - 1; i++)//冒泡排序
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
		cout << list3[i] << " ";//输出排序好的数组3

	}
}

int main()
{
	int n1;
	int* a1;
	cout << "Enter list1:";
	cin >> n1;//输入数组1长度
	a1 = new int[n1];//使用动态分配内存来适应输入的不同的值
	for (int i = 0; i < n1; i++)
	{
		cin >> a1[i];
	}
	int n2;
	int* a2;
	cout << "Enter list2:";
	cin >> n2;//输入数组2长度
	a2 = new int[n2];
	for (int i = 0; i < n2; i++)
	{
		cin >> a2[i];
	}
	int* a3 = new int[n1 + n2];
	merge(a1, n1, a2, n2, a3);//调用函数
	delete a1, a2;
	system("pause");
	return 0;
}