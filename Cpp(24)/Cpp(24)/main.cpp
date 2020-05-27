//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	//是全缺省的构造函数
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//看构造的是哪一个对象
//		//通过打印this可以看出我当前构造的是那一个对象
//		//打印this会把我们现在构造的对象的地址打印出来
//	}
//
//	//析构函数
//	//对于日期类来说，有没有析构函数其实都是无所谓的
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
//		//看构造的是哪一个对象
//	}
//
//	//拷贝构造函数
//	//给出类类型的引用
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date&d):" << this << endl;
//	}
//	//看当前拷贝构造的是哪个对象
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


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
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
//	// 	Date(const Date& d)
//	// 	{
//	// 		_year = d._year;
//	// 		_month = d._month;
//	// 		_day = d._day;
//	// 		cout << "Date(Date&):" << this << endl;
//	// 	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//
//	Date d3(2019, 5, 5);   //本来希望d3的内容给成和d1内容是一样的，但是由于输入的时候输入错了
//	//所以我们利用赋值，把d1中的内容赋值给d3
//	//通过调试看出代码没有任何的问题
//	d3 = d1;
//}
//
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


//共用数据的保护

/*
C++系统虽然采取了不少有效的措施，比如说设置一个private保护，从而增加数据的
安全性，但是有些数据往往是共享的，例如实参和形参，变量和引用，数据及其
指针等，人们可以在不同的场合通过不同的途径访问同一个数据对象。
有时在无意之中的误操作可能会改变有关数据的状况，而这是人们所不希望出现的

那么，既要使得数据能在一定的范围内共享，又要保证他不会被
任意的修改，那么这时候，我们就可以把有关的数据定为常量
*/


//常对象

/*
可以在定义对象是加上关键字const，指定对象为常对象
常对象必须要有初始值，比如说
*/
Time const t1(12, 34, 46);
//这样，在t1的生命周期中，对象t1的所有数据成员的值都不可以被改变
//凡是希望数据成员不被改变的对象，可以声明为常对象
//定义常对象的一般形式为：
//类型 const 对象名 实参表
//也可以把const写作最左边
//const 类名 对象名 
//二者是等价的
//在定义对象的时候必须同时对他进行初始化的操作，因为之后就不能再改变了


//说明：
/*
如果一个对象被声明为常对象，则通过这个对象之恩调用它的常成员函数，而不能调用这个对象的普通成员函数
除了由系统自动调用的隐式构造函数和析构函数

这么做是为了防止普通成员函数去修改常对象成员函数中的值
*/