//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int size = 10;//�޶����10����
//	int length = 0;
//	int arr[size];
//	cout << "����ʮ����:";
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];//��������10�����֣�������������
//	}
//	cout << arr[0] << " ";//��һ���������ظ������������
//	for (int m = 1; m < size; m++)//m=1�ӵڶ������ֿ�ʼ
//	{
//		for (int j = 0; j < m; j++)//�˴δӵ�һ����ʼ���αȽ�
//		{
//			if (arr[m] != arr[j])//���бȽ�ȥ��
//			{
//				if (j == m - 1)//���������
//				{
//					cout << arr[m] << " ";
//				}
//				else
//				{
//					continue;//����һ����������ѭ��
//
//				}
//			}
//			else
//			{
//				break;//�ӵ�һ����ȿ�ʼ�����ֱ����������ѭ��
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}