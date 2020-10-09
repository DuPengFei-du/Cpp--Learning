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
//	//一个是没有参数的构造函数，一个是具有三个参数的构造函数 
//
//	//创建几个对象，编译器就会调用几次构造函数
//	//调用构造函数的次数与对象的次数是相同的
//	//因为构造函数调用的时机就是在创建对象的时候调用
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


//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//	return 0
//}
////结果就是b和c的结果都是10


//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//
//	string s1("hello");
//	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
//	return 0
//}
////但是通过监视可以看出，s1和s2的地址是一样的，也就是说s1和s2是同一块空间，那么在进行析构的时候就会出现问题，也就是说，同一块空间析构了两次


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
////这个代码我们没有显示的声明拷贝构造函数，但是d2对象仍然创建成功了，d2的内容和d1的内容是一摸一样的
////同时，代码并没有什么问题，也没有崩溃，但是有些时候，编译器自动声明的拷贝构造函数是有问题的


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


//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//
//	string s1("hello");
//	string s2(s1);     //用s1去构造s2，然后s1和s2的内容就一模一样了
//	return 0
//}
////但是通过监视可以看出，s1和s2的地址是一样的，也就是说s1和s2是同一块空间，那么在进行析构的时候就会出现问题，也就是说，同一块空间析构了两次


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


////日期类
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//	}
//
//	//析构函数
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//
//	//拷贝构造函数
//	//构造函数的重载形式
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_year = d._day;
//		cout << "Date(const Date& d)" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2020, 8, 11);
//
//	Date d2(d1); //用d1去拷贝构造d2
//
//	return 0;
//}


////赋值运算符的重载
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//	}
//
//	//拷贝构造函数
//	//构造函数的重载形式
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date& d)" << this << endl;
//	}
//
//	//运算符重载函数
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//
//
//	Date operator+(int day)
//	{
//		Date temp(*this);
//		temp._day += day;
//		return temp;
//	}
//
//	Date operator++(int)
//	{
//		Date temp(*this);
//		_day += 1;
//		return temp;
//	}
//
//	Date operator++()
//	{	
//		_day += 1;
//		return *this;
//	}
//
//
//	//析构函数
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2020, 8, 11);
//
//	Date d2(2020, 8, 12);
//
//	d2 = d1;
//
//	d2 = d1++;
//
//	d2 = ++d1;
//	return 0;
//}


//#include<iostream>
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
//		if (this != &d)    //意思就是如果是自己给自己赋值的话，就不需要来做了
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
//	//先给一个临时变量temp，然后再去修改临时变量
//	//temp中内容，然后返回temp，要知道，现在不是以引用的方式返回的
//	//是以值得方式返回的
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
//
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