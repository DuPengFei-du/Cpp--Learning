#define _CRT_SECURE_NO_WARNINGS 1



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
using namespace std;
class Date
{
public:
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


// 我们看看这个函数，是不是很僵硬？
class Date
{
public:
	Date(int year)
	{
		// 这里的year到底是成员变量，还是函数形参？
		year = year;
	}
private:
	int year;
};
// 所以我们一般都建议这样
class Date
{
public:
	Date(int year)
	{
		_year = year;
	}
private:
	int _year;

};
// 或者这样。
class Date
{
public:
	Date(int year)
	{
		m_year = year;
	}
private:
	int m_year;
};
// 其他方式也可以的，主要看公司要求。一般都是加个前缀或者后缀标识区分就行。


#include<iostream>
#include<assert.h>
using namespace std;

class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		array = (int*)malloc(sizeof(int) * capacity);
		assert(array);
		_capacity = capacity;
		_size = 0;
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
#include<string.h>
using namespace std;
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};
class Person
{
private:
	String _name;
	int _age;
};
int main()
{
	Person p;
	return 0;
}


int main()
{
	int a;
	int b = 10;
	int c(b);
	return 0
}
//结果就是b和c的结果都是10


#include<iostream>
using namespace std;
int main()
{
	int a;
	int b = 10;
	int c(b);

	string s1("hello");
	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
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
	//构造函数
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//看构造的是哪一个对象
	}

	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date&d):" << this << endl;
	}

	//析构函数
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
void TestDate()
{
	Date d1(2020, 5, 5);
	Date d2(d1);
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
	//构造函数
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//看构造的是哪一个对象
	}

	//析构函数
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
void TestDate()
{
	Date d1(2020, 5, 5);
	Date d2(d1);
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
	String s2(s1);
}

int main()
{
	TestString();
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
		cout << "Date(int year, int month, int day)" << endl;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << endl;
	}
	~Date()
	{
		cout << "~Date()" << endl;
	}

	//赋值运算符重载函数
	Date operator+(int day)
	{
		Date temp(*this);
		temp._day += day;
		return temp;
	}

	Date& operator++()
	{
		_day += 1;
		return *this;
	}

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
	Date d1(2020, 11, 18);

	d1.DisPlay();

	d1= d1 + 3;

	d1.DisPlay();

	++d1;

	d1.DisPlay();

	d1++;

	d1.DisPlay();

	--d1;

	d1.DisPlay();

	d1--;

	d1.DisPlay();

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
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	// 可读可写
	// Date* const  this
	void TestFunc1()
	{
		//this = nullptr;
		this->_day++;
	}

	// 在该函数中不能修改当前对象的成员变量
	// const修饰this指针
	// const Date* const this;
	void TestFunc2()const
	{
		this->_day++;
		//_year++;
		//_month++;
	}

	// 只读操作：const Date* const
	void TestFuncWithConst()const
	{
		//TestFunc1(/*this*/);   // Date* const
	}

	// Date* const：可读可写
	void TestFuncWithoutConst()
	{
		TestFunc2(); // const Date* const: 只读
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

	// Date* p = &d2;
	const Date* operator&()const
	{
		return this;
	}

private:
	int _year;
	int _month;
	mutable int _day;
	//但是有些时候，我还是希望有些值是可以变化的
	//加上const之后修改成员函数，那么成员函数里面所有的值都不能发生变化了
	//如果我希望有些值仍然是可以修改的话，那么我可以再某些变量的前面加上mutable
	//加上mutable之后就表明这个变量可以在const所修饰的成员变量中被修改
};

int main()
{
	Date d1(2019, 3, 24);
	const Date d2(2019, 3, 25); // 常量：d2中的内容不允许被修改
	cout << &d2 << endl;
	//d2.TestFunc1();  // TestFunc1成员函数：普通的成员函数，在函数中可以修改当前对象的成员
	d1.TestFunc1();
	d1.TestFunc2();
	return 0;
}


// Date* p = &d2;
const Date* operator&()const    //如何第一个const没有加的话，代码是不能通编译的
{
	return this;
	//因为要返回的是指针，但是如果返回的只是类类型的指针的话是不可以的，因为this指针是const类型的
	//所以返回值的前面也要加上const才可以
}
int main()
{
	Date d1(2019, 3, 24);
	const Date d2(2019, 3, 25); // 常量：d2中的内容不允许被修改
	cout << &d2 << endl;
	//d2.TestFunc1();  // TestFunc1成员函数：普通的成员函数，在函数中可以修改当前对象的成员
	d1.TestFunc1();
	d1.TestFunc2();
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