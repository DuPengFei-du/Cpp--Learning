#define _CRT_SECURE_NO_WARNINGS 1


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////参数列表不一样
////称其为函数重载
////调用的时候，调用那种的，就用哪种的
////编译器在编译的时候要进行参数类型的推演，他要确定你所传的参数到底是什么类型的
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //编译是可以通过编译的，但是计算的值是不对的
//	//c语言是不允许重名的函数的
//	return 0;
//}


//void TestFunc()
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a)
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a, int b)
//{
//
//}
//
//void TestFunc(int a, double b)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}


//void TestFunc()
//{}
//void TestFunc(int a = 0)
//{}
//int main()
//{
//	TestFunc(10);  //是可以通过编译的，会调用下面的哪个参数
//	TestFunc();    //是不会通过编译的
//	对重载函数的调用不明确，第一个可以调用，第二个也可以调用
//	return 0;
//}


//short Add(short left, short right)
//{
//	return left + right;
//}
//int Add(short left, short right)
//{
//	return left + right;
//}


//用类来实现输入输出时间
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":"<<t1.minute << ":"<< t1.sec << endl;
	return 0;
}


#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;

	Time t2;
	cin >> t2.hour;
	cin >> t2.minute;
	cin >> t2.sec;
	cout << t2.hour << ":" << t2.minute << ":" << t2.sec << endl;
	return 0;
}
//定义了两个对象
/*
这个程序是清晰易懂的，但是在主函数中对不同的对象一一写出有关的操作会使得程序冗长
如果有10个对象，那么主函数会有多长呢？这样会降低程序的清晰度使得阅读困难
为了解决这个问题可以使用哈纳树来进行输入输出
*/