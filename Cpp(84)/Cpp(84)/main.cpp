#define _CRT_SECURE_NO_WARNINGS 1



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


int main()
{
	int a;
	int b = 10;
	int c(b);

	string s1("hello");
	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
	return 0
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
		cout << this << endl;    //我的意图是要去打印this，然后发现代码可以正常通过编译
		//那么，也就是说，此时，我的对象已经构造好了
	}
private:
	int _hour;
	int _minute;
	int _second;
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

//命名空间不是类型，是一个作用域
//C语言中有全局作用域和局部作用域
//定义命名空间相当于是定义了一个新的作用域
namespace N1
{
	//可以定义变量，也可以定义函数
	int a = 1;
	int b = 2;
	int Add(int left, int right)
	{
		return left + right;
	}
}

int a = 20;  //那么如果我想要打印全局作用域中的a的话，我要怎么打印？
//printf("%d\n", ::a); 

int main()
{
	int a = 30;
	printf("%d\n", a);  //在这个时候调用printf函数打印的肯定是主函数中的a
	printf("%d\n", ::a);  //::为作用域限定符，如果在一个变量前面
	//加上了::就代表我现在访问的是全局作用域中的变量
	printf("%d\n", N1::a);
	//访问命名空间的a，只需要在作用域限定符的前面加上命名空间的名称就可以了
	return 0;
}
//三个a分别属于三个不同的作用域，所以编译起来是不会有任何问题的
//那么，在什么情况下会是有问题的？
//就是在同一个命名空间中有两个相同的变量的时候，这个时候是有问题的


namespace N2
{
	int a = 10;
	int b = 20;
	int c = 30;
	int Sub(int left, int right)
	{
		return left - right;
	}
	//命名空间还可以嵌套
	namespace N3
	{
		int a = 10;
		int b = 20;
		int Mul(int left, int right)
		{
			return left * right;
		}
	}
}
printf("%d\n", N2::N3::a);  //在主函数中进行调用


using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	Add(10, 20);
	return 0;
}
//使用方便，但是冲突就会多


#include<iostream>
using namespace std;
int main()
{
	//C语言中是不会对printf函数进行语法检测的
	//printf("%d %d %d", 10);    //编译器是不会报错的
	//这是完全可以通过编译的，只是会有警告
	//警告来自于后两个参数是未知的
	//使用printf还有一个不太好的点就是
	//要输出什么类型的数据，这个格式控制符一定要给对，而且需要我们自己来给出
	//要记住很多种格式，很容易出错
	//所以再C++中我们使用cout
	cout << "change world" << endl;
	cout << 10 << " " << 12.34 << " " << 'a' << endl;
	//不用在乎所输出的东西的类型是什么
	return 0;
}


//缺省参数的分类
//全缺省参数和半缺省参数
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//所有参数都有缺省值称为全缺省参数
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}

//半缺省参数
//void TestFunc2(int a=1,int b=2,int c)   
//无法通过编译，把b的值拿掉，也无法通过编译
//只有把a的值拿掉，才能通过编译
//a和b都拿掉，有c也是可以的
//得出规律，注意：半缺省参数只能从右往左一次给出
void TestFunc2(int a, int b, int c = 3)  //可以通过编译
{
	//部分参数带有缺省值
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}
int main()
{
	//全缺省
	TestFunc();  //打印 1 2 3
	TestFunc(10);  //打印 10 2 3 
	TestFunc(10, 20);  //打印10 20 3
	TestFunc(10, 20, 30);  //打印10 20 30

	//半缺省
	TestFunc2(10, 20);
	TestFunc2(10, 20, 30);

	return 0;
}


int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}
//参数列表不一样
//称其为函数重载
//调用的时候，调用那种的，就用哪种的
//编译器在编译的时候要进行参数类型的推演，他要确定你所传的参数到底是什么类型的
int main()
{
	Add(1, 2);
	Add(1.2, 3.4);  //编译是可以通过编译的，但是计算的值是不对的
	//c语言是不允许重名的函数的
	return 0;
}


short Add(short left, short right)
{
	return left + right;
}
int Add(short left, short right)
{
	return left + right;
}


#include<iostream >
using namespace std;

void Swap(int a, int b)
{
	cout << &a << " " << &b << " " << endl;
	int temp = a;
	a = b;
	b = temp;
	//交换的是形参的内容，不是实参的内容
}

void Swap(int* pa, int* pb)
{
	cout << &pa << " " << &pb << " " << endl;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//两个swap形成了重载
int main()
{
	int a = 1;
	int b = 2;
	cout << &a << " " << &b << " " << endl;
	//Swap(a, b);  //如果只是值传递的话，是不行的
	Swap(&a, &b);
	cout << a << " " << b << " " << endl;
}


int main()
{
	int a = 10;
	int& ra = a;  //ra是a的别名
	cout << &ra << "=" << &a << endl;
	ra = 20;  //改变了ra的同时，那么a的值也是会发生改变的

	int& rb = a;  //rb也在引用a ，一个变量可以有多个引用
	rb = 30;  //那么修改rb的同时，ra和a也都发生了改变

	int& rra = ra;
	rra = 40;   //那么都会发生改变
	//因为用的都是同一块空间

	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;

	return 0;
}


int main()
{
	const int a = 10;   //在C语言中，const所修饰的量其实还是一个变量，只是这个变量不能被修改
	//但是，在C++中，const所修饰的量，就已经是一个常量了，不能被修改
	//同时具有宏常量的属性
	//如何知道在C++中，const所修饰的量是常量，就用数组去检测，如下所示：
	//int array[a];  //看是否可以通过编译


	//int& ra = a;  //ra的值是可以修改的
	//此时，是无法通过编译的，因为a是const类型的
	//而ra是普通类型的
	//那么，如何修改，才能让代码通过编译呢？
	//只需要在前面加上const 就可以了
	const int& ra = a;  //称为const类型的引用，或者常引用

	double d = 12.34;
	const int& rd = d;  //(居然可以通过编译？？)  不加const是不能通过编译的 
	cout << &rd << " " << &d << " " << endl;
	//但是打印的地址是不一样的，说明rd引用的就不是d
	//原因是，编译器会创建一个临时变量，吧double整形的部分放在临时变量中
	//让rd引用临时变量，而不是d，临时变量是编译器创建的
	//我们不知道他的名字也不知道他的地址，所以我们是无法对他进行任何修改的
	//既然改不成，那就说明这个空间本来就具有常性
	//所以加上const就可以通过编译了
	return 0;
}