//namespace N2
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//	//命名空间还可以嵌套
//	namespace N3
//	{
//		int a = 10;
//		int b = 20;
//		int Mul(int left, int right)
//		{
//			return left * right;
//		}
//	}
//}
//printf("%d\n", N2::N3::a);  //在主函数中进行调用


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
////得出规律，注意：半缺省参数只能从右往左依次给出
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
//inline int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Add(a, b) << endl;    //替换发生在编译阶段
//	cout << Add(a, ++b) << endl;    //替换发生在编译阶段
//	//因为替换发生在编译阶段，所以他会参与到函数编译里面去，代码运行效率会比较高
//	//看有没有展开就看反汇编代码有没有直接调用这个函数就可以了
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


//void TestFunc()
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a)
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a, int b)
//{
//
//}
//
//void TestFunc(int a, double b)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//struct Student
//{
//	char name[20];
//	int age;
//	char gender;
//};
////再C语言中的结构体，是只能放数据，不能放函数的，如果再C语言的前提下
////给结构体中放函数，那么编译的时候是会出错的，之能放数据
////因为C语言是面向过程的，数据和方法是分离开的
////但是在C++中，struct声明的结构体，不仅可以放数据还是可以放函数的
////也就是说C++把这些数据和操作这些数据的方法绑在一起了
//int main()
//{
//	return 0;
//}



//#include<iostream>
//struct Student
//{
//	int age;
//	char name[20];
//	char gender[20];
//}s1,s2;
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//struct Student
//{
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
//	s2.InitStudent("ouhou", 5, "女");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "男");
//	s3.PrintStudnet();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//struct Student
//{
//	int age;
//	char name[20];
//	char gender[20];
//
//	void Func()
//	{
//		cout << "你好啊" << endl;
//	}
//};
//int main()
//{
//	Student s1,s2;
//
//	s1.Func();
//	s2.Func();
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


//#include<iostream>
//#include<string.h>
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


//class Person
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//// 这里需要指定PrintPersonInfo是属于Person这个类域
//void Person::PrintPersonInfo()
//{
//	cout << _name << " "_gender << " " << _age << endl;
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


//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	void SetTime(int hour, int minute, int second)
//	{
//		_hour = hour;
//		_minute = minute;
//		_second = second;
//	}
//
//	void Display()
//	{
//		cout << _hour << ":" << _minute << ":" << _second << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//int main()
//{
//	Time t;
//	t.SetTime(14, 22, 23);
//	t.Display();
//
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