//#include<iostream>
//using namespace std;
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


//#include<iostream>
//using namespace std;
//int main()
//{
//	char c = 'c';
//	char& rc = c;
//	char* pc = &c;
//	cout << sizeof(rc) << endl;
//	cout << sizeof(pc) << endl;
//	return 0;
//}
////打印的结果为1和4


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //那将来就是整形 (编译器需要去推演a的类型)
//	auto b = 12.34;   ////那将来就是浮点形
//	auto c = a + b;   //编译器自己去解决
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}


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


////用C语言的方式进行模拟
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Student
//{
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//
//void StudentInit(Student* ps, char* name, int age, char* gender)
//{
//	strcpy(ps->_name, name);
//	ps->_age = age;
//	strcpy(ps->_gender, gender);
//}
//
//void PrintStudent(Student* ps)
//{
//	printf("%s %d %s", ps->_name, ps->_age, ps->_gender);
//}
//
//int main()
//{
//	return 0;
//}


///*
//大致过程：
//1. 识别类名
//2. 识别类中成员变量
//3. 识别类中的成员函数&改写
//*/
//
//
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
//	//Date()   //构造函数  ，没有返回值
//	//{
//	//	cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
//	//	//把对象的地址打印出来
//	//}
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
//void TestSeqList()
//{
//	SeqList s(100);
//}
//int main()
//{
//	TestSeqList();
//	return 0;
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