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


//#include<iostream>
//using namespace std;
//// 我们看看这个函数，是不是很僵硬？
//class Date
//{
//public:
//	Date(int year)
//	{
//		// 这里的year到底是成员变量，还是函数形参？
//		year = year;
//	}
//private:
//	int year;
//};
//// 所以我们一般都建议这样
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
//// 或者这样。
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
//// 其他方式也可以的，主要看公司要求。一般都是加个前缀或者后缀标识区分就行。


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
//
//void TestSeqList()
//{
//	SeqList s;
//}
//
//int main()
//{
//	SeqList s(100);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 2020, int month = 5, int day = 5)
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
//		看构造的是哪一个对象
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
//		对于日期类来说，这里面没有什么资源是需要去释放的
//		所以对于日期类来说，给不给析构函数其实都没有什么影响
//		cout << "~Date():" << this << endl;
//		看析构的是哪一个对象
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
//int main()
//{
//	//C语言中是不会对printf函数进行语法检测的
//	//printf("%d %d %d", 10);    //编译器是不会报错的
//	//这是完全可以通过编译的，只是会有警告
//	//警告来自于后两个参数是未知的
//	//使用printf还有一个不太好的点就是
//	//要输出什么类型的数据，这个格式控制符一定要给对，而且需要我们自己来给出
//	//要记住很多种格式，很容易出错
//	//所以再C++中我们使用cout
//	cout << "change world" << endl;
//	cout << 10 << " " << 12.34 << " " << 'a' << endl;
//	//不用在乎所输出的东西的类型是什么
//	return 0;
//}


//void TestFunc(int a = 20);
//
//void TestFunc(int a = 20)
//{
//
//}
////这样子的代码就会出错，原因在于如果两个位置同时来给的话，可能会给的不一样
////可能就会说不清了，给在声明的位置会比较好一些，因为有时候需要用到第三方库，要给出函数声明才能使用，而且如果定义的参数的初值不一样，编译器就会混乱；缺省参数值只能是常量或全局变量
//int main()
//{
//	return 0;
//}


//#include<iostream >
//using namespace std;
//
//void Swap(int a, int b)
//{
//	cout << &a << " " << &b << " " << endl;
//	int temp = a;
//	a = b;
//	b = temp;
//	//交换的是形参的内容，不是实参的内容
//}
//
//void Swap(int* pa, int* pb)
//{
//	cout << &pa << " " << &pb << " " << endl;
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
////两个swap形成了重载
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << &a << " " << &b << " " << endl;
//	//Swap(a, b);  //如果只是值传递的话，是不行的
//	Swap(&a, &b);
//	cout << a << " " << b << " " << endl;
//}


//int& Add(int left, int right)  //按照引用的方式返回
//{
//	int ret = left + right;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& retVal = Add(a, b);
//	Add(100, 200);   //按理来说，这一步并没有返回值来接收
////	但是通过监视来看，可以看书retVal的值最后还是变成300了
////	原因在于retVal是ret的别名，一直是空间的别名，空间没有发生变化，所以
//	相当于是自动变化。
//	return 0;
//}
//但是实际上，这一段代码是有问题的，ret除了函数的作用域只会，就会把空间归还给操作系统了，那么retValue还在引用ret，就相当于是在引用无效的空间


//class Student
//{
//	//成员函数(也成为行为)
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//	//数据(也成为属性)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};


////Person.cpp
//
//#include"Person.h"
//
//#include<string.h>
//#include<iostream>
//using namespace std;
//
//void Person::InitPerson(char* name, char* gender, int age)
//{
//	strcpy_s(_name, name);
//	_age = age;
//	strcpy_s(_gender, gender);
//}
//void Person::PrintPerson()
//{
//	cout << _name << "-" << _age << "-" << _gender << endl;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	//成员函数(也成为行为)
//public:
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//private:
//	//数据(也成为属性)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1, s2, s3;  //学生对象(学生实体)
//	s1.InitStudent("wq", 35, "男");
//	s1.PrintStudnet();
//
//	s2.InitStudent("nana", 5, "女");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "男");
//	s3.PrintStudnet();
//
//	return 0;
//}


//class A1
//{
//public:
//	void f1()
//	{
//
//	}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2
//{
//public:
//	void f2()
//	{
//
//	}
//};
//// 类中什么都没有---空类
//class A3
//{
//
//};


//class Student
//{
//public:
//	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
//	void InitStudent(char* _name, int age, char* gender)
//	{
//		//this = nullptr;
//		strcpy(this->_name, _name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//	s1.InitStudent("Peter", 35, "男");
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "女");
//	s2.PrintStudnet();
//	return 0;
//}


///*
//大致过程：
//1. 识别类名
//2. 识别类中成员变量
//3. 识别类中的成员函数&改写
//*/
//
//#if 0
//class Student
//{
//public:
//	/*
//	void InitStudent(Student* const this, char* name, int age, char* gender)
//	{    看起来成员函数有三个参数，实际上是有四个参数的，因为还有一个this指针
//		strcpy(this->_name, name);
//		this->_age = age;
//		strcpy(this->_gender, gender);
//	}
//	*/
//	void InitStudent(char* _name, int age, char* gender);
//	// 	{
//	// 		strcpy(this->_name, _name);    在编译器中实际的样子
//	// 		_age = age;  
//	// 		strcpy(_gender, gender);
//	// 	}
//
//	void TestFunc(...);
//	// 	{
//	// 	}
//
//		/*
//		// this是编译器自己维护(不是由我们来维护的)
//		void PrintStudnet(Student* const this)
//		{
//			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
//		}
//		*/
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//	s1.TestFunc();
//	s1.TestFunc(10);
//	s1.TestFunc(10, 20);
//	// Student::InitStudent(&s1, "Peter", 35, "男")
//	s1.InitStudent("Peter", 35, "男");
//	// Student::PrintStudnet(&s1);
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "女");
//	s2.PrintStudnet();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1,d2;
//
//	d1.SetDate(2020, 6, 19);
//	d1.DisPlay();
//
//	d2.SetDate(2020, 6, 20);
//	d2.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//没有参数的构造函数
//	Date()
//	{
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	/*void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//
//	Date d3(2020, 6, 19);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//没有参数的构造函数
//	Date()
//	{
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	/*void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}*/
//
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
//	Date d1, d2;
//
//	Date d3(2020, 6, 19);
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		array = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == array)
//		{
//			assert(0);
//			return;
//		}
//	}
//	
//	~SeqList()
//	{
//		if (array)
//		{
//			free(array);
//			array = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	SeqList s(100);
//	return 0;
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
//#include<string.h>
//#include<stdlib.h>
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
//	//因为是直接把s1的地址复制到s2上面去的，所以造成了内存泄露
//	//所以对于string类的赋值还是需要我们自己去完成
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
