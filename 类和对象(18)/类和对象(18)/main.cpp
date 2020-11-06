#define _CRT_SECURE_NO_WARNINGS 1



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


#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void Set(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}
	void Print()
	{
		cout << _name <<"-"<< _age <<"-"<< _gender << endl;
	}
private:
	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1;
	s1.Set("zhangsan", 20, "nv");
	s1.Print();

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


//person.h

#pragma once 
class Person
{
	void InitPerson(char* name, char* gender, int age);
	void PrintPerson();

	char name[20];
	char gender[3];
	int age;
};


//Person.cpp

#include"Person.h"

#include<string.h>
#include<iostream>
using namespace std;

void Person::InitPerson(char* name, char* gender, int age)
{
	strcpy_s(_name, name);
	_age = age;
	strcpy_s(_gender, gender);
}
void Person::PrintPerson()
{
	cout << _name << "-" << _age << "-" << _gender << endl;
}


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


class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
// 这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " "_gender << " " << _age << endl;
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
//需要特别注意的就是，空类的大小是1


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


#include<iostream>
using namespace std;
class Date
{
public:
	void Set(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Set(2020, 9, 15);
	d1.Display();
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


struct Student
{
	char _name[20];
	int _age;
	char _gender[3];
};

void InitStudent(Student* this, char* name, int age, char* gender)
{
	strcpy(this->_name, name);
	this->_age = age;
	strcpy(this->_gender, gender);
}

void PrintStudent(Student* this)
{
	printf("%s %d %s", this->_name, this->_age, this->_gender);
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

#if 0
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
class A
{
public:
	void TestFunc1()
	{
		cout << this << endl;
		this->_a = 20;   //如果没有这句话的话，下面的代码是可以正常通过编译的
		cout << "TestFunc()" << endl;
	}

	void TestFunc2()
	{
		this->_a = 10;
	}

protected:
	int _a;
};


int g_a = 10;

int main()
{
	cout << g_a << endl;
	A* ps = nullptr;
	ps->TestFunc1();// TestFunc1(ps)
	return 0;
}


#include<iostream>
using namespace std;
class A
{
public:
	void TestFunc1()
	{
		cout << this << endl;
		cout << "TestFunc()" << endl;
	}

	void TestFunc2()
	{
		this->_a = 10;
	}

protected:
	int _a;
};


int g_a = 10;

int main()
{
	cout << g_a << endl;
	A* ps = nullptr;
	ps->TestFunc1();// TestFunc1(ps)
	return 0;
}


class Test
{
public:
	void TestFunc()
	{
		//cout << &this << endl;
		Test* const& p = this;   //这句话就相当于是在打印this指针的地址
		//因为this指针不能直接打印地址，因为this指针是一个常量，所以打印
		//this指针别名的地址
		cout << &p << endl;
	}

public:
	int _t;
};

int main()
{
	int* p = nullptr;   //给成空
	int*& q = p;

	cout << &q << endl;
	cout << &p << endl;
	//打印出来之后发现两个变量的地址是一样的，p和q的地址相同

	Test t;
	t.TestFunc();   //通过对象去调用函数

	return 0;
}
//然后之后去监视ebp和esp两个寄存器的地址，发现this的地址刚好在ebp和esp
//两个寄存器的地址之间