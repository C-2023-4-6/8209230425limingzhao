//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int size = 10;//限定输出10个数
//	int length = 0;
//	int arr[size];
//	cout << "输入十个数:";
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];//依次输入10个数字，储存在数组中
//	}
//	cout << arr[0] << " ";//第一个不可能重复，单独拎出来
//	for (int m = 1; m < size; m++)//m=1从第二个数字开始
//	{
//		for (int j = 0; j < m; j++)//此次从第一个开始依次比较
//		{
//			if (arr[m] != arr[j])//进行比较去除
//			{
//				if (j == m - 1)//相邻则输出
//				{
//					cout << arr[m] << " ";
//				}
//				else
//				{
//					continue;//不在一起跳出本次循环
//
//				}
//			}
//			else
//			{
//				break;//从第一个相等开始则不输出直接跳出本层循环
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}