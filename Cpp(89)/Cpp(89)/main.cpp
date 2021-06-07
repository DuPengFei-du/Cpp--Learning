#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//public:
//	void SetData(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//	void DisPlay()
//	{
//		cout << _name << "-" << _age << "-" << _gender;
//	}
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//
//	s1.SetData("dudu", 20, "女");
//
//
//	s1.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetData(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	d1.SetData(2020, 3, 19);
//
//	d1.DisPlay();
//
//}


//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
//	void InitStudent(const char* _name, int age,const char* gender)
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
//class Test
//{
//public:
//	void TestFunc()
//	{
//		//cout << &this << endl;
//		Test* const& p = this;   //这句话就相当于是在打印this指针的地址
//		//因为this指针不能直接打印地址，因为this指针是一个常量，所以打印
//		//this指针别名的地址
//		cout << &p << endl;
//	}
//
//public:
//	int _t;
//};
//
//int main()
//{
//	int* p = nullptr;   //给成空
//	int*& q = p;
//
//	cout << &q << endl;
//	cout << &p << endl;
//	//打印出来之后发现两个变量的地址是一样的，p和q的地址相同
//
//	Test t;
//	t.TestFunc();   //通过对象去调用函数
//
//	return 0;
//}
////然后之后去监视ebp和esp两个寄存器的地址，发现this的地址刚好在ebp和esp
////两个寄存器的地址之间


//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << this << endl;    //我的意图是要去打印this，然后发现代码可以正常通过编译
//		//那么，也就是说，此时，我的对象已经构造好了
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//int main()
//{
//	Time t;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year)
//		: _year(year)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		return *this;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d(2019);
//	d = 2020;
//	//一个是日期类型的变量，一个是整形的变量，在我们之前想的是，这时不能通过编译的
//	//但是没想到，这样的代码是可以通过编译的，原因在于
//	// 2020---> 通过单参构造函数--->临时对象
//	//也就是说构造函数具有类型转换的功能，本来是一个int类型，然后被转换了
//	// 用一个整形变量给日期类型对象赋值
//	// 实际编译器背后会用2020构造一个无名对象，最后用无名对象给d1对象进行赋值
//	//但是一般情况下，会把这种类型转换禁止掉，那么如何来禁止呢？
//	//禁止的方法就是在构造函数前面加上一个explicit关键字
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	explicit Date(int year)
//		: _year(year)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		return *this;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d(2019);
//	d = 2020;   // 2020---> 通过单参构造函数--->临时对象
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Time
//{
//	friend void TestFriend();
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << this->_hour << endl;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	// 友元函数
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	void PrintDate()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	/*
//	// d << cout;
//	void operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	*/
//
//	friend void TestFriend();
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestFriend()
//{
//	Time t;
//	t._hour = 16;
//
//	Date d;
//	d._year = 2019;
//}
//
//// 4. 将该函数作为类的友元函数
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	// _cout<<d.GetYear()<<"-"<<d.GetMonth()<<"-"<<d.GetDay();
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//
//// >> istream
//
//int main()
//{
//	Date d(2019, 3, 24);
//	d.PrintDate();
//	cout << 10 << endl; // cout<<10  cout<<endl;
//
//	cout << d << endl;
//	//cout << 10;
//	//cout << d;
//
//	//d.operator<<(cout);
//	//d << cout;
//
//	return 0;
//}


////new和delete针对内置类型
//#include<iostream>
//using namespace std;
//int main()
//{
//	//申请单个元素的空间
//	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
//	//new出来的空间利用指针来进行接收
//	//new后面跟上的都是类型的名称
//	//使用这种方法的好处就在于不需要进行强制类型转化
//	//也不需要用户去计算需要开辟多大内存空间的空间(malloc的缺陷)
//
//	int* p2 = new int(10);
//	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
//	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
//	//也就是说使用new可以初始化成任意你希望它初始化成为的值
//	//但是在C语言里面是不行的，C语言里面只能初始化成0(calloc函数的功能)
//	//new可以将空间初始化成为任意的值
//
//	//申请连续的空间
//	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
//	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
//	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
//	return 0;
//}


////new和delete针对内置类型
//#include<iostream>
//using namespace std;
//int main()
//{
//	//申请单个元素的空间
//	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
//	//new后面跟上的都是类型的名称
//	//使用这种方法的好处就在于不需要进行强制类型转化
//	//也不需要用户去计算需要开辟多大内存空间的空间
//
//	int* p2 = new int(10);
//	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
//	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
//	//也就是说使用new可以初始化成任意你希望它初始化成为的值
//	//但是在C语言里面是不行的，C语言里面只能初始化成0
//
//	//申请连续的空间
//	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
//	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
//	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
//	//这个初始化的方法是C++11里面所提供的一个新的特性
//
//	//空间的释放
//	delete p1;
//	delete p2;
//	//p1，p2的空间在栈上，但是他们所指向的空间在堆上
//
//	//如果delete释放的是一段连续的空间的话，需要用delte[]来进行释放
//
//	delete[] p3;
//	delete[] p4;
//	//p3的p4的区别就是一个初始化了，一个没有进行初始化
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	//构造函数
//	Test()
//	{
//		cout << "Test()" << this << endl;   //打印当前构造的是哪个对象
//	}
//
//	//析构函数
//	~Test()
//	{
//		cout << "~Test()" << this << endl;   //打印当前构造的是哪个对象
//	}
//private:
//	int _t;
//};
//
//void TestNewDelete()
//{
//	Test* pt1 = new Test;   //new申请出来的空间不需要进行判空，大多数情况下都是可以保证申请空间成功的
//	delete pt1;
//
//	Test* pt2 = new Test[10];   //创建了10个对象，就会调用10此构造函数
//	delete[] pt2;
//
//}
//
//int main()
//{
//	//用new来申请自定义类型的空间
//	TestNewDelete();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include <crtdbg.h>
//using namespace std;
//void TestFunc()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	delete p1;
//
//	int* p2 = (int*)malloc(sizeof(int));
//	delete[] p2;
//
//	int* p3 = new int;
//	free(p3);
//
//	int* p4 = new int;
//	delete[] p4;
//
//	int* p5 = new int[10];
//	free(p5);
//
//	int* p6 = new int[10];
//	delete p6;
//	//如果把这句delete去掉，就会出现下面的这种报错信息
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();   //用于检测内存是否发生泄漏的方法
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		_ptr = new int[10];
//	}
//
//	~Test()
//	{
//		delete[] _ptr;
//		_ptr = nullptr;
//	}
//
//private:
//	int* _ptr;
//};
//
//void TestFunc()
//{
//	//崩溃
//	//代码崩溃的原因在于，使用malloc进行申请空间的时候，malloc是没有调用构造函数的
//	//但是下面的delete是会去调用析构函数的，那么这时候就没有对象明确的指向，调用析构函数的话
//	//是一定会崩溃的
//	//所以类中ptr的this指针是存在的，但是this指针所指向的内容是随机值，所以不能对其进行释放
//	//一释放就会发生崩溃的情况
//	//p1因为没有调用构造函数，所以p1指向的并不是一个对象，而delete会将p1所指向的空间当成对象释放
//	//但是现在根本没有对象，所以代码会崩溃
//	//因为_ptr指针并没有被初始化，所以代码会崩溃
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//崩溃
//	//道理和上面的是差不多的，同样的delete[]也是会去调用析构函数的
//	//但是你使用malloc的话，对象其实是没有的，因为malloc不会去调用构造函数的
//	//没有这个对象还非要去释放的话，那么是一定会发生崩溃的
//	Test* p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//内存泄漏
//	//原因在于用new去申请空间的话，是会去调用构造函数的，那么this指针实际上就是相当于有了
//	//明确的指向了，但是在释放对象的资源的时候，使用了free
//	//free是不会去调用析构函数的，所以对象的资源其实是没有被释放掉的
//	//所以是会造成内存泄漏的
//	//p3是指向对象的空间，并且这个对面里面其实是有资源的
//	//free并没有把对象里面的孔吉纳释放掉，所以说会造成内存泄漏的问题
//	Test* p3 = new Test;
//	//p3的空间是在栈上的，p3所指向的内容他的空间是在堆上的
//	free(p3);
//	_CrtDumpMemoryLeaks();
//	//这个方法可以用来检测内存是否泄露了
//	//但是缺点在于，他不会告诉我们，在代码中的哪个位置内存泄漏了
//
//	//崩溃
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//崩溃
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//崩溃+内存泄漏
//	Test* p6 = new Test[10];
//	delete p6;
//}
////涉及到[]的位置都发生崩溃了
//int main()
//{
//	TestFunc();
//	return 0;
//}


