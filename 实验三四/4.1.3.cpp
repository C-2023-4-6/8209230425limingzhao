#include<iostream>
using namespace std;

int main()
{
	const int length = 100;
	bool arr[length];//创建bool型数组
	for (int i = 0; i < length; i++)
	{
		arr[i] = false;//初始化——false为关
	}
	for (int i = 0; i < length; i++)//第一层循环从第一个同学开始
	{
		for (int j = i; j < length; j += i + 1)//按照题给条件选择对应柜门
		{
			//改变状态
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
	cout << "最后开着的柜子有：" << endl;
	for (int i = 0; i < length; i++)
	{
		if (arr[i])//输出开着的柜子
		{
			cout << i + 1 << "\t";//注意应该输出i+1（易错）
		}
	}
	cout << endl;
	system("pause");
	return 0;
}