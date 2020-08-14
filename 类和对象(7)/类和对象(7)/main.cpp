//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void TestFunc1()
//	{
//		cout << this << endl;
//		this->_a = 20;   //如果没有这句话的话，下面的代码是可以正常通过编译的
//		cout << "TestFunc()" << endl;
//	}
//
//	void TestFunc2()
//	{
//		this->_a = 10;
//	}
//
//protected:
//	int _a;
//};
//
//
//int g_a = 10;
//
//int main()
//{
//	cout << g_a << endl;
//	A* ps = nullptr;
//	ps->TestFunc1();// TestFunc1(ps)
//	return 0;
//}


//日期类
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
//
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.SetDate(2020, 6, 16);
//	d1.DisPlay();
//
//	Date d2;
//	d2.SetDate(2020, 6, 17);
//	d2.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date()
//	{
//		//无参数的构造函数
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month<< "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	Date d2(2020, 6, 17);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//Date()
//	//{
//	//	//无参数的构造函数
//	//	cout << "Date()" << this << endl;
//	//}
//
//	//Date(int year,int month,int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//	cout << _year << "." << _month<< "." << _day << endl;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	Date d2(2020, 6, 17);
//
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


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////参数列表不一样
////称其为函数重载
////调用的时候，调用那种的，就用哪种的
////编译器在编译的时候要进行参数类型的推演，他要确定你所传的参数到底是什么类型的
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //编译是可以通过编译的，但是计算的值是不对的
//	//c语言是不允许重名的函数的
//	return 0;
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
//	//但是通过监视来看，可以看书retVal的值最后还是变成300了
//	//原因在于retVal是ret的别名，一直是空间的别名，空间没有发生变化，所以
//	//相当于是自动变化。
//	return 0;
//}
////但是实际上，这一段代码是有问题的，ret除了函数的作用域只会，就会把空间归还给操作系统了，那么retValue还在引用ret，就相当于是在引用无效的空间


//// F.h
//#include <iostream>
//using namespace std;
//inline void f(int i);
//// F.cpp
//#include "F.h"
//void f(int i)
//{
//	cout << i << endl;
//}
//// main.cpp
//#include "F.h"
//int main()
//{
//	f(10);
//	return 0;
//}
//// 链接错误：main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl f(int)" (?
////f@@YAXH@Z)，该符号在函数 _main 中被引用比
////inline修饰的类似具有文件作用域，也就是说只能在当前文件内适用，链接属性只存在于自己的当前文件内部，类似于static,所以一般不把声明和定义分开。


//#include<iostream>
//using namespace std;
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


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	return 0;
//}


//struct Student
//{
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//
//void InitStudent(Student* this, char* name, int age, char* gender)
//{
//	strcpy(this->_name, name);
//	this->_age = age;
//	strcpy(this->_gender, gender);
//}
//
//void PrintStudent(Student* this)
//{
//	printf("%s %d %s", this->_name, this->_age, this->_gender);
//}
//
//int main()
//{
//	return 0;
//}


//class A
//{
//public:
//	void TestFunc1()
//	{
//		cout << this << endl;
//		this->_a = 20;   //如果没有这句话的话，下面的代码是可以正常通过编译的
//		cout << "TestFunc()" << endl;
//	}
//
//	void TestFunc2()
//	{
//		this->_a = 10;
//	}
//
//protected:
//	int _a;
//};
//
//
//int g_a = 10;
//
//int main()
//{
//	cout << g_a << endl;
//	A* ps = nullptr;
//	ps->TestFunc1();// TestFunc1(ps)
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//	
//	Date d2(2020, 6, 19);
//	
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
//
//	void DispPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
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
//
//	Date d2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//	
//	Date d2(2020, 6, 19);
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	//对于日期类来说，没有涉及到资源的管理，其实有没有析构函数都是可以的
//	//也不会造成内存泄漏的问题
//	//先构造的后析构
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//
//	Date d2(2020, 6, 19);
//
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//class SeqList
//{
//public:
//	//构造函数
//	SeqList(int capacity = 10)
//	{
//		*array = (int)malloc(sizeof(int) * capacity);
//		if (nullptr == array)
//		{
//			assert(0);
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	//因为涉及到了空间的开辟，所以需要析构函数来完成对象资源的释放
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
//
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	SeqList s;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
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
//
//	d1.InitDate(2020, 4, 30);
//	d1.PrintDate();
//
//	d2.InitDate(2020, 4, 29);
//	d2.PrintDate();
//
//	d3.InitDate(2020, 4, 28);
//	d3.PrintDate();
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
//
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