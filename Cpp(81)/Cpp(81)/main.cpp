#define _CRT_SECURE_NO_WARNINGS 1



class Date
{
	//看起来这个类的函数体里面好像什么都没有
	//但是其实还有6个默认的成员函数
};


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
	//Date()   //构造函数  ，没有返回值
	//{
	//	cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
	//	//把对象的地址打印出来
	//}
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
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
	//编译器生成的构造函数是默认的构造函数
	//默认的构造函数一定是无惨的
	//如果说，用户定义构造函数了，编译器就不会生成的
	//如果这个时候再创建一个带有三个参数的对象的话
	//就一定是不会创建成功的
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

	string s1("hello");
	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
	return 0
}
//但是通过监视可以看出，s1和s2的地址是一样的，也就是说s1和s2是同一块空间，那么在进行析构的时候就会出现问题，也就是说，同一块空间析构了两次


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

	void DisPlay()
	{
		cout << _year << "/"<<_month << "/" << _day << endl;
	}

	//进行赋值运算符的重载

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

	bool operator==(const Date& d)
	{
		return _year == d._year &&
			   _month == d._month &&
			   _day == d._day;
	}

	//对赋值运算符的重载
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


private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2021, 2, 10);

	d1.DisPlay();

	++d1;

	d1.DisPlay();

	d1++;

	d1.DisPlay();

	d1--;

	d1.DisPlay();

	--d1;

	d1.DisPlay();
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

// 不能重载非法运算符----
// Date operator@(int a)
// {
// 	Date d;
// 	return d;
// }

// int operator+(int left, int right)
// {
// 	return left + right;
// }

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