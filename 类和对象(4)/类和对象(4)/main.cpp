#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
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

	// 	Date(const Date& d)
	// 	{
	// 		_year = d._year;
	// 		_month = d._month;
	// 		_day = d._day;
	// 		cout << "Date(Date&):" << this << endl;
	// 	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}


private:
	int _year;
	int _month;
	int _day;
};


void TestDate()
{
	Date d1(2020, 5, 5);
	Date d2(d1);

	Date d3(2019, 5, 5);   //本来希望d3的内容给成和d1内容是一样的，但是由于输入的时候输入错了
	//所以我们利用赋值，把d1中的内容赋值给d3
	//通过调试看出代码没有任何的问题
	d3 = d1;
}

int main()
{
	TestDate();
	return 0;
}


#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class String
{
public:
	String(const char* str = "")
	{
		cout << "String(const char* ):" << this << endl;
		if (nullptr == str)
			str = "";

		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}

	// 拷贝构造函数必须显式提供

	~String()
	{
		cout << "~String():" << this << endl;
		free(_str);
		_str = nullptr;
	}

private:
	char* _str;
};

void TestString()
{
	String s1("hello");
	String s2;
	s2 = s1;  //利用赋值的操作
	//通过监视可以看出其实s1和s2还是公用的同一块内存空间，所以在资源释放的时候还是会
	//出现浅拷贝的问题
	//而且这样子直接赋值的话，还会导致s2的空间没有释放
	//因为是直接把s1的地址复制到s2上面去的，所以造成了内存泄露
	//所以对于string类的赋值还是需要我们自己去完成
}


#include<iostream>
using namespace std;
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

	 d1 = d2 = d3;
	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}


	int _year;
	int _month;
	int _day;
};

Date& TestDate(Date& d)
{
	Date temp(d);
	temp._day += 1;
	return d;
}

void TestDate()
{
	Date d1(2019, 3, 24);
	Date d2(d1);
	d1 = TestDate(d2);
}

int main()
{
	TestDate();
	return 0;
}


#include<iostream>
using namespace std;
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
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}


	int _year;
	int _month;
	int _day;
};

Date TestDate(Date& d)
{
	Date temp(d);
	temp._day += 1;
	return d;
}

void TestDate()
{
	Date d1(2019, 3, 24);
	Date d2(d1);
	d1 = TestDate(d2);
}

int main()
{
	TestDate();
	return 0;
}
