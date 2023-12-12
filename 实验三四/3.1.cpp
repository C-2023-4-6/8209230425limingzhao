//#include<iostream>
//using namespace std;
//void ys(int& x, int& y);
//void bs(int& x, int& y);
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    ys(m, n);
//    bs(m, n);
//    return 0;
//}
//
//void ys(int& x, int& y)
//{
//    int Y;
//    for (int i = 1; i <= x && i <= y; i++)
//    {
//        if (x % i == 0 && y % i == 0)
//        {
//            Y = i;
//        }
//    }
//    cout << "最大公约数为" << Y << endl;
//}
//
//void bs(int& x, int& y)
//{
//    int B;
//    for (int i = 1;; i++)
//    {
//        if (i % x == 0 && i % y == 0)
//        {
//            B = i; break;
//        }
//    }
//    cout << "最小公倍数为" << B << endl;
//}
