//#include<iostream>
//using namespace std;
//int main() {
//	int arr[10] = { 1,10,9,3,4,7,6,5,8,2, };
//	cout << "排序前" << endl;
//	for (int i = 0; i <= 9; i++) {
//		cout << arr[i] << "  ";
//	}
//	for (int j = 0; j < 9; j++) //循环行次
//	{
//		for (int k = 0; k < 9- j; k++)//每行循环次数
//		{
//			if (arr[k] > arr[k + 1]) {
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//
//		}
//	}
//	cout << "排序后" << endl;
//	for (int i = 0; i <= 9; i++) {
//		cout << arr[i] << "  ";
//	}
//
//
//	return 0;
//}