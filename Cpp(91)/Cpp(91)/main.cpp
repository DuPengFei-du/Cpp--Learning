#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//using namespace std;
//void Test(int a = 10)   //跟的是一个默认值，好处就是主函数里面不用传参了
////如果用户再调用函数的同时进行了传参操作，那么使用的就是用户所传进去的参数
//{
//	cout << a << endl;
//}
//int main()
//{
//	Test();
//	Test(100);
//	return 0;
//}


////缺省参数的分类
////全缺省参数和半缺省参数
//void TestFunc(int a = 1, int b = 2, int c = 3)
//{
//	//所有参数都有缺省值称为全缺省参数
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//
////半缺省参数
////void TestFunc2(int a=1,int b=2,int c)   
////无法通过编译，把b的值拿掉，也无法通过编译
////只有把a的值拿掉，才能通过编译
////a和b都拿掉，有c也是可以的
////得出规律，注意：半缺省参数只能从右往左一次给出
//void TestFunc2(int a, int b, int c = 3)  //可以通过编译
//{
//	//部分参数带有缺省值
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//int main()
//{
//	//全缺省
//	TestFunc();  //打印 1 2 3
//	TestFunc(10);  //打印 10 2 3 
//	TestFunc(10, 20);  //打印10 20 3
//	TestFunc(10, 20, 30);  //打印10 20 30
//
//	//半缺省
//	TestFunc2(10, 20);
//	TestFunc2(10, 20, 30);
//
//	return 0;
//}


//int main()
//{
//	const int a = 10;   //在C语言中，const所修饰的量其实还是一个变量，只是这个变量不能被修改
//	//但是，在C++中，const所修饰的量，就已经是一个常量了，不能被修改
//	//同时具有宏常量的属性
//	//如何知道在C++中，const所修饰的量是常量，就用数组去检测，如下所示：
//	//int array[a];  //看是否可以通过编译
//
//
//	//int& ra = a;  //ra的值是可以修改的
//	//此时，是无法通过编译的，因为a是const类型的
//	//而ra是普通类型的
//	//那么，如何修改，才能让代码通过编译呢？
//	//只需要在前面加上const 就可以了
//	const int& ra = a;  //称为const类型的引用，或者常引用
//
//	double d = 12.34;
//	const int& rd = d;  //(居然可以通过编译？？)  不加const是不能通过编译的 
//	cout << &rd << " " << &d << " " << endl;
//	//但是打印的地址是不一样的，说明rd引用的就不是d
//	//原因是，编译器会创建一个临时变量，吧double整形的部分放在临时变量中
//	//让rd引用临时变量，而不是d，临时变量是编译器创建的
//	//我们不知道他的名字也不知道他的地址，所以我们是无法对他进行任何修改的
//	//既然改不成，那就说明这个空间本来就具有常性
//	//所以加上const就可以通过编译了
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define MAX(a,b) (((a)>(b))?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << MAX(a, b) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //那将来就是整形 (编译器需要去推演a的类型)
//	auto b = 12.34;   //那将来就是浮点形
//	auto c = a + b;   //编译器自己去解决
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
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
//		cout << _year << "/" << _month << "/"<<_day << endl;
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
//	d1.SetData(2020, 1, 1);
//
//	d1.DisPlay();
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


//// Date* p = &d2;
//const Date* operator&()const    //如何第一个const没有加的话，代码是不能通编译的
//{
//	return this;
//	//因为要返回的是指针，但是如果返回的只是类类型的指针的话是不可以的，因为this指针是const类型的
//	//所以返回值的前面也要加上const才可以
//}
//int main()
//{
//	Date d1(2019, 3, 24);
//	const Date d2(2019, 3, 25); // 常量：d2中的内容不允许被修改
//	cout << &d2 << endl;
//	//d2.TestFunc1();  // TestFunc1成员函数：普通的成员函数，在函数中可以修改当前对象的成员
//	d1.TestFunc1();
//	d1.TestFunc2();
//	return 0;
//}


//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&()const
//	{
//		return this;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};


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
//	Test(int t = 20)
//		: _t(t)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _t;
//};
//int main()
//{
//	//注意:pt指向的空间并不是一个test类型的对象
//	//因为malloc不会是不会调用构造函数的
//	//所以没有创建出来对象
//	//如果想要把pt指向的空间变成Test类型的对象的话
//	//只需要在该空间上执行构造函数完成初始化的操作
//	//那么想要完成这种操作的话，就需要使用定位new了
//	Test* pt = (Test*)malloc(sizeof(Test));
//
//	new(pt) Test;
//	//这样操作完成之后才算一个真正的对象
//	//当然，如果构造函数有参数的话，你也可以把构造函数的参数带上
//	//就像下面这个样子
//	//new(pt) Test（100);
//
//	//既然已经是一个对象了，用完之后记得释放掉
//	delete pt;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.0, 2.0);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T1,typename T2>
//T1 Add(T1 x, T2 y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1, 2.0);
//	return 0;
//}


//#include<iostream>
//using namespace std;
////函数模板
////用户给一个葫芦，编译器画瓢
//#include<stdio.h>
//template<typename T>    //模板参数列表
//T Add(T x, T y)         //参数列表
//{
//	return x + y;
//}
////所以我们现在要告诉编译器，到底是一个什么东西
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	return 0;
//}


//#include<iostream>
//using namespace std;
////函数模板
////用户给一个葫芦，编译器画瓢
//#include<stdio.h>
//template<typename T>    //模板参数列表
//T Add(T x, T y)         //参数列表
//{
//	return x + y;
//}
////所以我们现在要告诉编译器，到底是一个什么东西
//int main()
//{
//	Add(1, 2);
//
//	Add(1.0, 2.0);
//
//	return 0;
//}


////为了让顺序表中可以存储任意类型的元素
//template<class T>
////上面的这句话，就说明了T是代表了一种类型的
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		capacity = capacity < 10 ? 10 : capacity;
//		array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void PushBack(const T& data);   //可以把他放在类外进行定义
//
//	~SeqList()
//	{
//		if (array)
//		{
//			delete[] array;
//			array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	//int* array;
//	//在这个时候，我们把int换成T之后，就可以存储任意类型的数据了
//	T* array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
////如果再类外进行定义的话，其实现在T是没有被识别的
////如果想要T被识别的话，需要再给出一边模板
////当热，还要再函数名称的前面给出类的名字
//template<class T>
//
//void SeqList<T>::PushBack(const T& data)
//{
//	//要进行元素插入的时候首先需要检测一下是否需要扩容
//	_CheckCapacity();
//
//	array[_size] = data;
//
//	size++;
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString1()
//{
//	string s1;   //构造了一个空的字符串
//
//	string s2("hello world");    //可以采用C语言格式的字符串来进行构造
//	//只需要给一个char * 的参数其实就是可以的
//
//	string s3(10, '$');   //给字符串里面放下10个$的符号
//
//	string s4(s2);    //利用拷贝构造函数
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}
//
//int main()
//{
//	TestString1();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//
//	cin >> s1;
//
//	cout << s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString2()
//{
//	string s1("little bit,huge dream!!!");
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	//两个求出来的结果是一摸一样的
//
//	cout << s1.capacity() << endl;
//
//	if (s1.empty())
//		cout << "空字符串" << endl;
//	else
//		cout << "不是空字符串" << endl;
//
//	s1.clear();
//
//	if (s1.empty())
//		cout << "空字符串" << endl;
//	else
//		cout << "不是空字符串" << endl;
//}
//int main()
//{
//	TestString2();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(40);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(50);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(40);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//多出来的5个字符用!进行填充
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//多出来的5个字符用!进行填充
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(20, '$');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(40, '&');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString5()
//{
//	string s1("hello");
//	cout << s1[0] << endl;
//	s1[0] = 'H';
//	cout << s1 << endl;
//
//	//如果s1中的字母不是大写，那么我们就把他改成大写
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= 'a' && s1[i] <= 'z')
//		{
//			s1[i] -= 32;
//		}
//	}
//	//使用迭代器进行打印的操作
//	//迭代器，将其看成一个指针来使用
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	cout << endl;
//
//	//除了使用迭代器的方式进行打印，我们还可以使用基于范围的for循环来进行打印的操作
//	//string本身就是一个范围确定的序列
//	//所以可以支持范围for
//	for (auto c : s1)
//	{
//		cout << c << endl;
//	}
//}
//int main()
//{
//	TestString5();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString6()
//{
//	string s1("hello");
//	cout << s1[0] << endl;
//	s1[0] = 'H';
//	cout << s1 << endl;
//
//	//如果s1中的字母不是大写，那么我们就把他改成大写
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= 'a' && s1[i] <= 'z')
//		{
//			s1[i] -= 32;
//		}
//	}
//	//使用迭代器进行打印的操作
//	//迭代器，将其看成一个指针来使用
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	cout << endl;
//
//	//除了使用迭代器的方式进行打印，我们还可以使用基于范围的for循环来进行打印的操作
//	//string本身就是一个范围确定的序列
//	//所以可以支持范围for
//	for (auto c : s1)
//	{
//		cout << c << endl;
//	}
//
//	const string s2("world");  //这么定义的话，其实就已经表明了s2种的内容是不可以被修改的
//
//	s2[0] = 'W';
//}
//int main()
//{
//	TestString6();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString7()
//{
//	string s;
//
//	s.push_back('I');
//
//	s.append(" ");
//
//	string ss("Love");
//
//	s.append(ss);
//
//	s += " ";
//
//	s += "China";
//
//	cout << s << endl;
//}
//int main()
//{
//	TestString7();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString1()
//{
//	int a1;
//	int a2 = 10;
//	int a3(a2);
//
//	string s1;   //构造了一个空的字符串
//
//	string s2("hello world");    //可以采用C语言格式的字符串来进行构造
//	//只需要给一个char * 的参数其实就是可以的
//
//	string s3(10, '$');   //给字符串里面放下10个$的符号
//
//	string s4(s2);    //利用拷贝构造函数
//
//	string s5 = "hello world";
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString2()
//{
//	string s1("little bit,huge dream!!!");
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	//两个求出来的结果是一摸一样的
//
//	cout << s1.capacity() << endl;
//
//	if (s1.empty())
//		cout << "空字符串" << endl;
//	else
//		cout << "不是空字符串" << endl;
//
//	s1.clear();
//
//	if (s1.empty())
//		cout << "空字符串" << endl;
//	else
//		cout << "不是空字符串" << endl;
//}
//int main()
//{
//	TestString2();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//多出来的5个字符用!进行填充
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//多出来的5个字符用!进行填充
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(20, '$');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(40, '&');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


////模拟实现string类
//#include<iostream>
//#include<string>
//namespace bite
//{
//	class string
//	{
//		//为了防止和标注库中的内容引起冲突，我们采用bite命名空间
//	public:
//		//首先给出string类的构造
//		/*string()
//		{
//
//		}
//
//		string(const char* str)
//		{
//			if (str == "")
//				_str = nullptr;
//		}*/
//
//		//上面的两种方式是可以合并的
//		string(const char* str = "")
//		{
//			if (str == nullptr)
//				//我们就去构造一个空的字符串
//				//也是一个有效的字符串，只不过是字符串中只包含一个\0
//			{
//				_str = new char[1];
//				*_str = '\0';
//			}
//			else
//			{
//				//如果传递过来的东西不是空字符串的话
//				_str = new char[strlen(str) + 1];
//				strcpy(_str, str);
//			}
//		}
//
//		////当然,还有简单的构造方式
//		//string(const char* str)
//		//{
//		//	if (nullptr == str)
//		//	{
//		//		str = "";
//		//	}
//		//	_str = new char[strlen(str) + 1];
//		//	strcpy(_str, str);
//		//}
//
//		//给出析构
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//			}
//		}
//
//		//给出拷贝构造函数
//		string(const string& s)
//			:_str(new char[strlen(s._str)+1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		//赋值运算符重载
//
//
//	private:
//		//要实现string类，首先需要给出一个指针，指向我所要存放字符串的那一块空间
//		char* _str;
//	};
//
//}
//
//void TestString()
//{
//	bite::string s1; //构造一个空的字符串
//	bite::string s2("hello");
//	bite::string s3(s2);
//
//}
//
//int main()
//{
//	TestString();
//
//	return 0;
//}


//模拟实现string类
#include<iostream>
namespace bite
{
	class string
	{
	public:
		//首先给出构造函数
		string(const char* str)
		{
			if (str == nullptr)
			{
				//去构造一个空的字符串
				_str = new char[1];
				*_str = '\0';
			}
			else
			{
				//真正去开辟内存空间
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构函数
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		//拷贝构造函数
		string(const string& s)
			//给_str重新开辟内存空间
			:
		{

		}
	private:
		//模拟实现string类
		char* _str;
	};
}