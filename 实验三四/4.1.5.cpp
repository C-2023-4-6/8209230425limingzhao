#include<iostream>
#include<cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int a, b, index, j, k;
	a = strlen(s1);//strlen读取字符数
	b = strlen(s2);
	bool* s3;
	s3 = new bool[a];//在堆上建立动态数组
	for (int m = 0; m < a; m++)
	{
		s3[m] = false;//初始化，将数组元素全部赋值为false
	}
	for (int i = 0; i < b - a + 1; i++)//控制s2的首字母，其首字母必然要出现在第二句话b-a+1个字符前
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      //控制s2的总输出数
		{
			if (s1[j] == s2[k])//检索对应连续相同的字符并赋值
			{
				index = i;//记录第一个相等的字符
				s3[j] = true;//赋值为正确
			}
		}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)//首字母未出现在第二句话b-a+1个字符前
			{
				return -1;//无则返回-1
				break;
			}
			if (s3[n])
			{
				h++;//记录赋值的个数
			}
		}
		if (h == a)//与第一个语句的数量相等
		{
			return index;//完全连续的相等则返回下标
		}
	}
}
int main()
{
	int size = 999;
	char s1[999], s2[999];
	cout << "Enter the first string : ";
	cin.getline(s1, size);//获取一行
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	system("pause");
	return 0;
}