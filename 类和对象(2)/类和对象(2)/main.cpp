#include<iostream>
using namespace std;

//class A
//{
//public:
//	void TestFunc1()
//	{
//		cout << this << endl;
//		this->_a = 20;
//		cout << "TestFunc()" << endl;
//	}
//
//	void TestFunc2()
//	{
//		this->_a = 10;
//	}
//
//protected:
//	int _a;
//};
//
//
//int g_a = 10;
//
//int main()
//{
//	cout << g_a << endl;
//	A* ps = nullptr;
//	ps->TestFunc1();// TestFunc1(ps)
//	return 0;
//}


//class Test
//{
//public:
//	void TestFunc()
//	{
//		//cout << &this << endl;
//		Test* const& p = this;   //是引用
//		cout << &p << endl;
//	}
//
//public:
//	int _t;
//};
//
//int main()
//{
//	int* p = nullptr;
//	int*& q = p;   //q是p的引用
//
//	cout << &q << endl;   //打印查看两个变量的地址是否一样
//	cout << &p << endl;
//	 
//	Test t;    //定义一个对象
//	t.TestFunc();   //通过对象去调用
//
//	return 0;
//}
////说明this指针的位置在栈上


////空类
//class Date
//{
//	//看起来这个类的函数体里面好像什么都没有
//	//但是其实还有6个默认的成员函数
//};


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void InitDate(int year, int month, int day)   //进行初始化的操作
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //打印进行检测
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1, d2, d3;
//
//	d1.InitDate(2020, 4, 30);
//	d1.PrintDate();
//
//	d2.InitDate(2020, 4, 29);
//	d2.PrintDate();
//
//	d3.InitDate(2020, 4, 28);
//	d3.PrintDate();
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//无参的构造函数
//	Date()   //构造函数  ，没有返回值
//	{
//		cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
//		//把对象的地址打印出来
//	}
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//两个构造函数形成了重载
//
//	//创建几个对象，编译器就会调用几次构造韩素
//	void InitDate(int year, int month, int day)   //进行初始化的操作
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //打印进行检测
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1, d2, d3;
//	Date d4(2020, 4, 27);
//	Date d5();     
//	//并不是创建了一个对象
//	//这是一个函数声明，相当于我是有一个函数名称
//	//为d5的函数，这个函数的返回值类型是Date类型，没有参数
//
//
//	d1.InitDate(2020, 4, 30);
//	d1.PrintDate();
//
//	d2.InitDate(2020, 4, 29);
//	d2.PrintDate();
//
//	d3.InitDate(2020, 4, 28);
//	d3.PrintDate();
//
//	d4.PrintDate();
//
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//无参的构造函数
//	//Date()   //构造函数  ，没有返回值
//	//{
//	//	cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
//	//	//把对象的地址打印出来
//	//}
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//两个构造函数形成了重载
//
//	//创建几个对象，编译器就会调用几次构造韩素
//	void InitDate(int year, int month, int day)   //进行初始化的操作
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //打印进行检测
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	//编译器生成的构造函数是默认的构造函数
//	//默认的构造函数一定是无惨的
//	//如果说，用户定义构造函数了，编译器就不会生成的
//	//如果这个时候再创建一个带有三个参数的对象的话
//	//就一定是不会创建成功的
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//无参的构造函数
//	Date()   //构造函数  ，没有返回值
//	{
//		cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
//		//把对象的地址打印出来
//	}
//
//	//全缺省的构造函数
//	Date(int year=2000, int month=1, int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//两个构造函数形成了重载
//
//	//创建几个对象，编译器就会调用几次构造韩素
//	void InitDate(int year, int month, int day)   //进行初始化的操作
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //打印进行检测
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//全缺省的构造函数
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//两个构造函数形成了重载
//
//	//创建几个对象，编译器就会调用几次构造韩素
//	void InitDate(int year, int month, int day)   //进行初始化的操作
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //打印进行检测
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//}


//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}


// //我们看看这个函数，是不是很僵硬？
//class Date
//{
//public:
//	Date(int year)
//	{
//		 //这里的year到底是成员变量，还是函数形参？
//		year = year;
//	}
//private:
//	int year;
//};
// //所以我们一般都建议这样
//class Date
//{
//public:
//	Date(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//
//};
// //或者这样。
//class Date
//{
//public:
//	Date(int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
// 
//其他方式也可以的，主要看公司要求。一般都是加个前缀或者后缀标识区分就行。

//
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		array = (int*)malloc(sizeof(int) * capacity);
//		assert(array);
//		_capacity = capacity;
//		_size = 0;
//	}
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//void TestSeqList()
//{
//	SeqList s;
//}
//int main()
//{
//	SeqList s(100);
//
//	return 0;
//}


#include<iostream>
#include<assert.h>
using namespace std;

class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		cout << "SeqList(int):" << this << endl;
		array = (int*)malloc(sizeof(int) * capacity);
		assert(array);
		_capacity = capacity;
		_size = 0;
	}

	//析构函数
	~SeqList()
	{
		if (array)
		{
			free(array);
			_capacity = 0;
			_size = 0;
		}
		cout << "~SeqList():" << this << endl;
	}
private:
	int* array;
	int _size;
	int _capacity;
};
void TestSeqList()
{
	SeqList s;
}
int main()
{
	SeqList s(100);

	return 0;
}