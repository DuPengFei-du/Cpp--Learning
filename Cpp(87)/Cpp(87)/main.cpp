#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void SetData(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}
	void DisPlay()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}
private:
	char* _name;
	int _age;
	char* _gender;
};
int main()
{
	Student s1;

	s1.SetData("zhangsan", 20, "nv");

	s1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	void InitDate(int year, int month, int day)   //进行初始化的操作
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //打印进行检测
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2, d3;

	d1.InitDate(2020, 4, 30);
	d1.PrintDate();

	d2.InitDate(2020, 4, 29);
	d2.PrintDate();

	d3.InitDate(2020, 4, 28);
	d3.PrintDate();
}


#include<iostream>
using namespace std;
class Date
{
public:
	//无参的构造函数
	Date()   //构造函数  ，没有返回值
	{
		cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
		//把对象的地址打印出来
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//两个构造函数形成了重载

	//创建几个对象，编译器就会调用几次构造韩素
	void InitDate(int year, int month, int day)   //进行初始化的操作
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //打印进行检测
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2, d3;
	Date d4(2020, 4, 27);
	Date d5();
	//并不是创建了一个对象
	//这是一个函数声明，相当于我是有一个函数名称
	//为d5的函数，这个函数的返回值类型是Date类型，没有参数


	d1.InitDate(2020, 4, 30);
	d1.PrintDate();

	d2.InitDate(2020, 4, 29);
	d2.PrintDate();

	d3.InitDate(2020, 4, 28);
	d3.PrintDate();

	d4.PrintDate();

}


#include<iostream>
using namespace std;
class Date
{
public:
	//无参的构造函数
	Date()   //构造函数  ，没有返回值
	{
		cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
		//把对象的地址打印出来
	}

	//全缺省的构造函数
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//两个构造函数形成了重载

	//创建几个对象，编译器就会调用几次构造韩素
	void InitDate(int year, int month, int day)   //进行初始化的操作
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //打印进行检测
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
}


#include<iostream>
#include<string>
using namespace std;
struct Student
{
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1, s2, s3;  //学生对象(学生实体)
	s1.InitStudent("wq", 35, "男");
	s1.PrintStudnet();

	s2.InitStudent("ouhou", 5, "女");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "男");
	s3.PrintStudnet();

	return 0;
}


class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// 基本类型(内置类型)
	int _year;
	int _month;
	int _day;
	// 自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;
}


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


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//看构造的是哪一个对象
	}

	~Date()
	{
		//对于日期类来说，这里面没有什么资源是需要去释放的
		//所以对于日期类来说，给不给析构函数其实都没有什么影响
		cout << "~Date():" << this << endl;
		//看析构的是哪一个对象
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 5, 5);
	Date d2(d1);

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int year, int month, int day)" << this << endl;
	}
	~Date()
	{
		cout << "~Date()" << this << endl;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << this << endl;
	}

	void DisPlay()   //打印进行检测
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 1, 1);

	d1.DisPlay();
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
	String s2(s1);
}

int main()
{
	TestString();
	return 0;
}


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
		if (this != &d)    //意思就是如果是自己给自己赋值的话，就不需要来做了
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	// *this + day
	// 问题：加完之后的结果可能是非法日期？？？
	Date operator+(int day)
	{
		Date temp(*this);
		temp._day += day;
		return temp;
	}
	//先给一个临时变量temp，然后再去修改临时变量
	//temp中内容，然后返回temp，要知道，现在不是以引用的方式返回的
	//是以值得方式返回的


	// 首先返回引用
	// 返回引用是否可行---->引用作为函数的返回值类型：不能返回函数栈上的空间
	Date& DateAdd(int day)
	{
		_day += day;
		return *this;
	}

	bool operator==(const Date& d)
	{
		return _year == d._year &&
			_month == d._month &&
			_day == d._day;
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	// 前置++
	// d2 = ++d1
	Date& operator++()
	{
		_day += 1;
		return *this;
	}

	// 后置++
	// d2 = d1++
	Date operator++(int)
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}

	Date& operator--()
	{
		_day -= 1;
		return *this;
	}

	Date operator--(int)
	{
		Date temp(*this);
		_day -= 1;
		return temp;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	int* _p;
};

 不能重载非法运算符----
 Date operator@(int a)
 {
 	Date d;
 	return d;
 }

 int operator+(int left, int right)
 {
 	return left + right;
 }

void TestDate()
{
	int a = 10;
	int b = 20;
	int c;
	c = a + b;
	a = b = c;

	Date d1(2019, 3, 22);
	d1.DateAdd(3);
	d1 = d1 + 3;


	Date d2(d1);
	d2 = d1++;
	d2 = ++d1;

	Date d3(2018, 3, 22);
	d3 = d3;
	d3 = d1;
	d3.operator=(d1);
	d1 = d2 = d3;
	d1.operator=(d2.operator=(d3));
	if (d3 == d1)
		;

	Date& d4 = d3;

	d4 = d3;
}

int main()
{
	TestDate();
	return 0;
}


class Date
{
public:
	Date* operator&()
	{
		return this;
	}
	const Date* operator&()const
	{
		return this;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};


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
	     _day(day)
	{
		cout << "Date(int year, int month, int day)" << this << endl;
	}
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 1, 1);

	d1.DisPlay();
	return 0;
}


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
给出的建议是最好不要使用成员变量去初始化另一个成员变量的值


尽量使用初始化列表对变量进行初始化的操作
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


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
		: _b(0)
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	// 普通的成员函数：有一个隐藏的this指针
	// 可以访问普通的成员变量
	int GetB()
	{
		GetCount();
		cout << this << endl;
		return this->_b;
	}

	// 静态成员函数: 没有this指针
	// 不能访问普通的成员变量
	static int GetCount()
	{
		//cout << this << endl;
		//cout << _b << endl;
		//GetB();  不能调用
		return _count;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;

	// 相当于在类中定义一个与对象无关的全局变量---所有对象共享
	static int _count;   // 声明
};


int Test::_count = 0;  // 开辟空间

int main()
{
	Test t;
	t.GetB();

	Test::GetCount();
	return 0;
}