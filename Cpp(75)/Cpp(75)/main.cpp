#define _CRT_SECURE_NO_WARNINGS 1



class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day)
	{
		cout << "Date(int year, int month, int day)" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day),
		_day(day)
	{
		cout << "Date(int year, int month, int day)" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day)
	{
		// 		_year = d._year;
		// 		_month = d._month;
		// 		_day = d._day;
		cout << "Date(Date&):" << this << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
#if 0
	// 初始化列表
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{
		// 构造函数体中是赋初值不是初始化
// 		_year = year;
// 		_month = month;
// 		_day = day;
		//r = _day;
		cout << "Date(int,int,int):" << this << endl;
	}
#endif

	// 初始化列表
	// 1. 初始化列表中成员的出现次序，不代表其真正的初始化次序
	// 2. 成员变量在初始化列表中的初始化次序为其在类中的声明次序
	// 建议：最好不要使用成员初始化成员
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
		, _r(_day)
		, _a(_day)
	{
		// 构造函数体中是赋初值不是初始化
		// 		_year = year;
		// 		_month = month;
		// 		_day = day;
		//r = _day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day)
		, _r(d._r)
		, _a(d._a)
	{
		// 		_year = d._year;
		// 		_month = d._month;
		// 		_day = d._day;
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
	int& _r;
	const int _a;
};


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour, int minute, int second)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}


private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
		, _t(0, 0, 0)
		//, _t()   //调用无参的默认的构造函数
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
	//如果没有上面的_t(0, 0, 0)，直接给出Time_t是会报错的，原因在于
	//声明了一个time类的对象t，那么这个对象t一定是需要进行初始化的
	//那么编译器会默认去Time类中寻找没有参数的构造函数，但是Time类此时是没有
	//显示给出无参的构造函数的，所以就会出错
	//那么我们为了可以正确的创建出来这个Time类类型的对象的话，那么我们就需要给出来一个有参数的
	//就好比说_t(0, 0, 0)，就可通过编译了
};

int main()
{
	//Date d(2019, 3, 24);
	Date d;
	return 0;
}


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

	void TestFunc()
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		// 		: _year(year)
		// 		, _month(month)
		// 		, _day(day)
				//, _t()   //调用无参的默认的构造函数
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

	void TestFunc()
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		// 		: _year(year)
		// 		, _month(month)
		// 		, _day(day)
				//, _t()   //调用无参的默认的构造函数
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

int main()
{
	// 在编译器编译期间，已经为main分配好了栈空间
	// 该空间中已经包含了函数体中的局部对象
	Date d;    // 在构造函数调用之前，对象是不存在的
	Time t;
	t.TestFunc();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year)
		: _year(year)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	Date& operator=(const Date& d)
	{
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d(2019);
	d = 2020;
	//一个是日期类型的变量，一个是整形的变量，在我们之前想的是，这时不能通过编译的
	//但是没想到，这样的代码是可以通过编译的，原因在于
	// 2020---> 通过单参构造函数--->临时对象
	//也就是说构造函数具有类型转换的功能，本来是一个int类型，然后被转换了
	// 用一个整形变量给日期类型对象赋值
	// 实际编译器背后会用2020构造一个无名对象，最后用无名对象给d1对象进行赋值
	//但是一般情况下，会把这种类型转换禁止掉，那么如何来禁止呢？
	//禁止的方法就是在构造函数前面加上一个explicit关键字
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
		:_count(0)   //把count的初始值给成0
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;
	int _count;   // 能否定义一个共享的成员变量
};

int main()
{
	Test t1, t2;
	return 0;
}


#include<iostream>
using namespace std;
int g_count = 0;
class Test
{
public:
	Test()
	{
		g_count++;
	}

	Test(Test& t)
	{
		g_count++;
	}

	~Test()
	{
		g_count--;
	}

private:
	int _b;
};

void TestCount()
{
	Test t1, t2;   //这个函数里面创建了两个对象，出了函数体之后销毁
	cout << g_count << endl;
}

int main()
{
	Test t1, t2;
	//这个函数里面也创建了两个对象，所以在上面的对象没有被销毁的时候，一共有四个对象
	//当上面的函数体中的对象被销毁了之后，就只剩了两个对象了
	TestCount();
	cout << g_count << endl;
	return 0;
}


#include<iostream>
using namespace std;
int g_count = 0;
class Test
{
public:
	Test()
	{
		g_count++;
	}

	Test(Test& t)
	{
		g_count++;
	}

	~Test()
	{
		g_count--;
	}

private:
	int _b;
};

void TestCount()
{
	Test t1, t2;   //这个函数里面创建了两个对象，出了函数体之后销毁
	cout << g_count << endl;
}

int main()
{
	Test t1, t2;
	//这个函数里面也创建了两个对象，所以在上面的对象没有被销毁的时候，一共有四个对象
	//当上面的函数体中的对象被销毁了之后，就只剩了两个对象了
	g_count = 0;  //如果进行了修改，那么就会得到不正确的计数了
	TestCount();
	cout << g_count << endl;
	return 0;
}


#include<iostream>
using namespace std;
// 类总共创建了多少个对象？
// 计数的变量----不能包含在每个对象中，应该是所有对象共享
// 1. 使用全局变量---->可以---缺陷：不安全
//int g_count = 0;

// 普通成员变量                static成员变量
// 可以在初始化列表中初始化         不行
// 每个对象中都包含             只有一份，没有包含在具体的对象中，是所有对象共享的
// 必须通过对象访问             可以通过对象直接访问 || 也可以通过类名加作用域直接访问
class Test
{
public:
	Test()
		: _b(0)   //普通类型的变量可以在成员初始化列表的位置进行初始化
		//但是，static成员变量不能在成员的初始化列表中进行初始化
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	static int GetCount()
	{
		return _count;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;
	static int _count;   //只是一个声明，static类型的变量必须要在类外进行初始化操作
};

int Test::_count = 0;   //才算是真正开辟了内存空间
//要在类外进行初始化的操作

void TestCount()
{
	Test t1, t2;
	//cout << g_count << endl;
	cout << t1.GetCount() << endl;
}

int main()
{
	//把GetCount给成static类型的，就可以不通过对象去访问了
	Test::GetCount();
	Test t1, t2;
	cout << Test::GetCount() << endl;
	cout << sizeof(t1) << endl;
	//cout << &t1._count << "=" << &t2._count << endl;    
	//如何看出static成员变量是所有成员都共享的，而不是每个成员变量中都各自存在有一份
	//我门可以通过打印不同变量中static成员变量的地址，来看打印出来的地址的结果是不是一样的
	//就可以判断出来到底是每个变量存在有一份，还是所有变量共享一个static成员变量
	//static成员变量的大小是不计算在对象大小里面的，因为其是所有对象所共有的

	//cout << Test::_count << endl;
	//可以通过对象直接访问 || 也可以通过类名加作用域直接访问
	//因为static不是独享所独有的，所以可以通过对象去访问，当然也可以不通过对象去访问
	//都是可以的，那么这两中访问方式有什么区别呢

	//这两中访问方式有什么区别
	//int a = 10;
	//a = t1._count;
	//a = Test::_count; 


	TestCount();
	cout << Test::GetCount() << endl;
	return 0;
}


class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// 非静态成员变量，可以在成员声明时给缺省值。
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;
int main()
{
	A a;
	a.Print();
	return 0;
}


#include<iostream>
using namespace std;
class Time
{
	friend void TestFriend();
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
	// 友元函数
	friend ostream& operator<<(ostream& _cout, const Date& d);
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	/*
	// d << cout;
	void operator<<(ostream& _cout)
	{
		_cout << _year << "-" << _month << "-" << _day << endl;
	}
	*/

	friend void TestFriend();

private:
	int _year;
	int _month;
	int _day;
};

void TestFriend()
{
	Time t;
	t._hour = 16;

	Date d;
	d._year = 2019;
}

// 4. 将该函数作为类的友元函数
ostream& operator<<(ostream& _cout, const Date& d)
{
	// _cout<<d.GetYear()<<"-"<<d.GetMonth()<<"-"<<d.GetDay();
	_cout << d._year << "-" << d._month << "-" << d._day;
	return _cout;
}

// >> istream

int main()
{
	Date d(2019, 3, 24);
	d.PrintDate();
	cout << 10 << endl; // cout<<10  cout<<endl;

	cout << d << endl;
	//cout << 10;
	//cout << d;

	//d.operator<<(cout);
	//d << cout;

	return 0;
}


#include<iostream>
using namespace std;
class Time
{
	friend class Date;
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

	void TestFriendClass()
	{
		Date d;
		d._year = 2019;
	}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
	friend class Time;
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << _t._hour << ":" << _t._minute << ":" << _t._second << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};