#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int age;
	char gender;
};
//再C语言中的结构体，是只能放数据，不能放函数的，如果再C语言的前提下
//给结构体中放函数，那么编译的时候是会出错的，之能放数据
//因为C语言是面向过程的，数据和方法是分离开的
//但是在C++中，struct声明的结构体，不仅可以放数据还是可以放函数的
//也就是说C++把这些数据和操作这些数据的方法绑在一起了
int main()
{
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
struct Student
{
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1, s2, s3;  //学生对象(学生实体)
	s1.InitStudent("wq", 35, "男");
	s1.PrintStudnet();

	s2.InitStudent("ouhou", 5, "女");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "男");
	s3.PrintStudnet();

	return 0;
}


class Student
{
	//成员函数(也成为行为)
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

	//数据(也成为属性)
	char _name[20];
	int _age;
	char _gender[3];
};


#include<iostream>
#include<string>
using namespace std;
class Student
{
	//成员函数(也成为行为)
public:
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}
private:
	//数据(也成为属性)
	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1, s2, s3;  //学生对象(学生实体)
	s1.InitStudent("wq", 35, "男");
	s1.PrintStudnet();

	s2.InitStudent("nana", 5, "女");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "男");
	s3.PrintStudnet();

	return 0;
}


class A1
{
public:
	void f1()
	{

	}
private:
	int _a;
};
// 类中仅有成员函数
class A2
{
public:
	void f2()
	{

	}
};
// 类中什么都没有---空类
class A3
{

};


#include<iostream>
#include<string.h>
using namespace std;
class Date
{
public:
	void Display()
	{
			cout << _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();
	d2.Display();
	return 0;
}


class Student
{
public:
	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
	void InitStudent(char* _name, int age, char* gender)
	{
		//this = nullptr;
		strcpy(this->_name, _name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
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
	s1.InitStudent("Peter", 35, "男");
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "女");
	s2.PrintStudnet();
	return 0;
}


//用C语言的方式进行模拟
#include<iostream>
#include<string.h>
using namespace std;
struct Student
{
	char _name[20];
	int _age;
	char _gender[3];
};

void StudentInit(Student* ps, char* name, int age, char* gender)
{
	strcpy(ps->_name, name);
	ps->_age = age;
	strcpy(ps->_gender, gender);
}

void PrintStudent(Student* ps)
{
	printf("%s %d %s", ps->_name, ps->_age, ps->_gender);
}

int main()
{
	return 0;
}


/*
大致过程：
1. 识别类名
2. 识别类中成员变量
3. 识别类中的成员函数&改写
*/

class Student
{
public:
	/*
	void InitStudent(Student* const this, char* name, int age, char* gender)
	{    看起来成员函数有三个参数，实际上是有四个参数的，因为还有一个this指针
		strcpy(this->_name, name);
		this->_age = age;
		strcpy(this->_gender, gender);
	}
	*/
	void InitStudent(char* _name, int age, char* gender);
	// 	{
	// 		strcpy(this->_name, _name);    在编译器中实际的样子
	// 		_age = age;  
	// 		strcpy(_gender, gender);
	// 	}

	void TestFunc(...);
	// 	{
	// 	}

		/*
		// this是编译器自己维护(不是由我们来维护的)
		void PrintStudnet(Student* const this)
		{
			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
		}
		*/
	void PrintStudnet()
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
	s1.TestFunc();
	s1.TestFunc(10);
	s1.TestFunc(10, 20);
	// Student::InitStudent(&s1, "Peter", 35, "男")
	s1.InitStudent("Peter", 35, "男");
	// Student::PrintStudnet(&s1);
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "女");
	s2.PrintStudnet();
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
	//Date()   //构造函数  ，没有返回值
	//{
	//	cout << "Date()" << this << endl;   //打印this是为了看当前构造的是哪一个对象
	//	//把对象的地址打印出来
	//}
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
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
	//编译器生成的构造函数是默认的构造函数
	//默认的构造函数一定是无惨的
	//如果说，用户定义构造函数了，编译器就不会生成的
	//如果这个时候再创建一个带有三个参数的对象的话
	//就一定是不会创建成功的
	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
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


void TestFunc()
{

}

void TestFunc(int a)
{

}
//上面两个函数形成了重载
int main()
{
	return 0;
}

void TestFunc(double a)
{

}

void TestFunc(int a)
{

}
//上面两个函数形成了重载
int main()
{
	return 0;
}

void TestFunc(double a, int b)
{

}

void TestFunc(int a, double b)
{

}
//上面两个函数形成了重载
int main()
{
	return 0;
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


#include<iostream>
using namespace std;
inline int Add(int left, int right)
{
	return left + right;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << Add(a, b) << endl;    //替换发生在编译阶段
	cout << Add(a, ++b) << endl;    //替换发生在编译阶段
	//因为替换发生在编译阶段，所以他会参与到函数编译里面去，代码运行效率会比较高
	//看有没有展开就看反汇编代码有没有直接调用这个函数就可以了
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	auto a = 10;  //那将来就是整形 (编译器需要去推演a的类型)
	auto b = 12.34;   ////那将来就是浮点形
	auto c = a + b;   //编译器自己去解决
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}


void TestFor()
{
	int array[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
	{
		array[i] *= 2;
	}
	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
	{
		cout << *p << endl;
	}
}


void TestFor()
{
	int array[] = { 1, 2, 3, 4, 5 };
	for (auto& e : array)
	{
		e *= 2;
	}
	for (auto e : array)
	{
		cout << e << endl;
	}
	return 0;
}