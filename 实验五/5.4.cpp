//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student(string n, double s) : num(n), score(s) {}
//	string num;
//	double score;
//};
//
//int main()
//{
//	void max(Student*);
//	Student s[5] =
//	{
//		Student("1",60),
//		Student("2",70),
//		Student("3",80),
//		Student("4",90),
//		Student("5",100)
//	};
//
//	max(s);
//
//	return 0;
//}
//
//
//void max(Student* p)
//{
//	Student* t;
//	Student* c;
//	double max;
//	for (t = p, c = t, max = t->score; t < (p + 5); ++t)
//	{
//		if (t->score > max)
//		{
//			max = t->score;
//			c = t;
//		}
//	}
//
//	cout << "成绩最高者为： " << c->num << endl;
//
//
//}
