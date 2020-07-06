#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		cout << "SeqList(int):" << this << endl;
//		array = (int*)malloc(sizeof(int) * capacity);
//		assert(array);
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	//析构函数
//	~SeqList()
//	{
//		if (array)
//		{
//			free(array);
//			_capacity = 0;
//			_size = 0;
//		}
//		cout << "~SeqList():" << this << endl;
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
//
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	Person p;
//	return 0;
//}
//
//
//int main()
//{
//	int a;
//	int b = 10;
//	int c(b); 
//	return 0
//}
////结果就是b和c的结果都是10
//
//
//#include<iostream>
//#include<string>
//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//
//	string s1("hello");    
//	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year=2020, int month=5, int day=5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//看构造的是哪一个对象
//	}
//
//	~Date()
//	{
//		//对于日期类来说，这里面没有什么资源是需要去释放的
//		//所以对于日期类来说，给不给析构函数其实都没有什么影响
//		cout << "~Date():" << this << endl;
//		//看析构的是哪一个对象
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//看构造的是哪一个对象
//	}
//
//	//拷贝构造函数
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date&d):" << this << endl;
//	}
//
//	//析构函数
//	~Date()
//	{
//		//对于日期类来说，这里面没有什么资源是需要去释放的
//		//所以对于日期类来说，给不给析构函数其实都没有什么影响
//		cout << "~Date():" << this << endl;
//		//看析构的是哪一个对象
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//}
//int main()
//{
//	TestDate();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//看构造的是哪一个对象
//	}
//
//	//析构函数
//	~Date()
//	{
//		//对于日期类来说，这里面没有什么资源是需要去释放的
//		//所以对于日期类来说，给不给析构函数其实都没有什么影响
//		cout << "~Date():" << this << endl;
//		//看析构的是哪一个对象
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//}
//int main()
//{
//	TestDate();
//	return 0;
//}


//// 这里会发现下面的程序会崩溃掉？这里就需要我们以后讲的深拷贝去解决。
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		if (nullptr == str)
//			return;
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//}


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		cout << "String(const char* ):" << this << endl;
//		if (nullptr == str)
//			str = "";
//
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	// 拷贝构造函数必须显式提供
//
//	~String()
//	{
//		cout << "~String():" << this << endl;
//		free(_str);
//		_str = nullptr;
//	}
//
//private:
//	char* _str;
//};
//
//void TestString()
//{
//	String s1("hello");
//	//String s2(s1);
//	String s2;
//	s2 = s1;
//}
//
//int main()
//{
//	TestString();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	// 	Date(const Date& d)
//	// 	{
//	// 		_year = d._year;
//	// 		_month = d._month;
//	// 		_day = d._day;
//	// 		cout << "Date(Date&):" << this << endl;
//	// 	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//
//	Date d3(2019, 5, 5);   //本来希望d3的内容给成和d1内容是一样的，但是由于输入的时候输入错了
//	//所以我们利用赋值，把d1中的内容赋值给d3
//	//通过调试看出代码没有任何的问题
//	d3 = d1;
//}
//
//int main()
//{
//	TestDate();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		cout << "String(const char* ):" << this << endl;
//		if (nullptr == str)
//			str = "";
//
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	// 拷贝构造函数必须显式提供
//
//	~String()
//	{
//		cout << "~String():" << this << endl;
//		free(_str);
//		_str = nullptr;
//	}
//
//private:
//	char* _str;
//};
//
//void TestString()
//{
//	String s1("hello");
//	String s2(s1);
//}
//
//int main()
//{
//	TestString();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		cout << "String(const char* ):" << this << endl;
//		if (nullptr == str)
//			str = "";
//
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	// 拷贝构造函数必须显式提供
//
//	~String()
//	{
//		cout << "~String():" << this << endl;
//		free(_str);
//		_str = nullptr;
//	}
//
//private:
//	char* _str;
//};
//
//void TestString()
//{
//	String s1("hello");
//	String s2;
//	s2 = s1;  //利用赋值的操作
//	//通过监视可以看出其实s1和s2还是公用的同一块内存空间，所以在资源释放的时候还是会
//	//出现浅拷贝的问题
//	//而且这样子直接赋值的话，还会导致s2的空间没有释放
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(Date&):" << this << endl;
//	}
//
//	// d1 = d2 = d3;
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//
//		return *this;
//	}
//
//	// *this + day
//	// 问题：加完之后的结果可能是非法日期？？？
//	Date operator+(int day)
//	{
//		Date temp(*this);
//		temp._day += day;
//		return temp;
//	}
//
//
//
//	// 首先返回引用
//	// 返回引用是否可行---->引用作为函数的返回值类型：不能返回函数栈上的空间
//	Date& DateAdd(int day)
//	{
//		_day += day;
//		return *this;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year &&
//			_month == d._month &&
//			_day == d._day;
//	}
//
//	bool operator!=(const Date& d)
//	{
//		return !(*this == d);
//	}
//
//	// 前置++
//	// d2 = ++d1
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//
//	// 后置++
//	// d2 = d1++
//	Date operator++(int)
//	{
//		Date temp(*this);
//		_day += 1;
//		return temp;
//	}
//
//	Date& operator--()
//	{
//		_day -= 1;
//		return *this;
//	}
//
//	Date operator--(int)
//	{
//		Date temp(*this);
//		_day -= 1;
//		return temp;
//	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	int* _p;
//};
//
//// 不能重载非法运算符----
//// Date operator@(int a)
//// {
//// 	Date d;
//// 	return d;
//// }
//
//// int operator+(int left, int right)
//// {
//// 	return left + right;
//// }
//
//void TestDate()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	c = a + b;
//	a = b = c;
//
//	Date d1(2019, 3, 22);
//	d1.DateAdd(3);
//	d1 = d1 + 3;
//
//
//	Date d2(d1);
//	d2 = d1++;
//	d2 = ++d1;
//
//	Date d3(2018, 3, 22);
//	d3 = d3;
//	d3 = d1;
//	d3.operator=(d1);
//	d1 = d2 = d3;   
//	d1.operator=(d2.operator=(d3));
//	if (d3 == d1)
//		;
//
//	Date& d4 = d3;
//
//	d4 = d3;
//}
//
//int main()
//{
//	TestDate();
//	return 0;
//}


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(Date&):" << this << endl;
	}

	// d1 = d2 = d3;
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	// 在该函数中不能修改当前对象的成员变量
	void TestFunc()const
	{
		//_day++;
	}

	// (1+2)*3 ---> 12+3*
	~Date()
	{
		cout << "~Date():" << this << endl;
	}

	Date* operator&()
	{
		return this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	char* str = "hello";
	//str[0] = 'H';

	Date d1;
	cout << &d1 << endl;
	d1.TestFunc();

	const Date d2;
	cout << &d2 << endl;
	d2.TestFunc();

	return 0;
}