#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
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
	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1;

	s1.SetData("lisi", 22, "nv");

	s1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;

	d1.SetDate(2020, 10, 15);

	d1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date()
	{
		cout << "Date()" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;

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
	Date(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
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
	Date d1(2020, 10, 15);

	d1.DisPlay();

	Date d2 = d1;

	d2.DisPlay();

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


//赋值运算符重载
#include<iostream>
using namespace std;
class Date
{
public:
	//构造函数
	Date()
	{
		cout << "Date(int year, int month, int day)" << endl;
	}

	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int year, int month, int day)" << endl;
	}

	//析构函数
	~Date()
	{
		cout << "~Date()" << endl;
	}

	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << endl;
	}

	//打印函数
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	//赋值运算符重载
	Date operator+(int day)
	{
		Date temp(*this);
		temp._day += day;
		return temp;
	}

	bool operator>(const Date& d)
	{
		return _year > d._year ||
			_year == d._year && _month > d._month ||
			_year == d._year && _month == d._month && _day > d._day;
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

	//对于后置加加的重载
	Date operator++(int)
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}

	Date& operator++()
	{
		_day += 1;
		return *this;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 10, 15);

	d1.DisPlay();

	Date d2;

	d2 = d1;

	d2.DisPlay();

	d1 = d1 + 3;

	d1.DisPlay();


	if (d2 > d1)
		cout << "d2>d1" << endl;
	else
		cout << "d2<d1" << endl;

	d1++;

	d1.DisPlay();

	++d1;

	d1.DisPlay();
	return 0;
}