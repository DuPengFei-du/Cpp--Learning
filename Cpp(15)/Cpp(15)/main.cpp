#define  _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
using namespace std;
#define MAX(a,b) (((a)>(b))?(a):(b))
int main()
{
	int a = 10;
	int b = 20;
	cout << MAX(a, b) << endl;
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
	cout << Add(a, b) << endl;    //�滻�����ڱ���׶�
	cout << Add(a, ++b) << endl;    //�滻�����ڱ���׶�
	//��Ϊ�滻�����ڱ���׶Σ�����������뵽������������ȥ����������Ч�ʻ�Ƚϸ�
	//����û��չ���Ϳ�����������û��ֱ�ӵ�����������Ϳ�����
	return 0;
}


// F.h
#include <iostream>
using namespace std;
inline void f(int i);
// F.cpp
#include "F.h"
void f(int i)
{
	cout << i << endl;
}
// main.cpp
#include "F.h"
int main()
{
	f(10);
	return 0;
}
// ���Ӵ���main.obj : error LNK2019: �޷��������ⲿ���� "void __cdecl f(int)" (?
//f@@YAXH@Z)���÷����ں��� _main �б����ñ�
//inline���ε����ƾ����ļ�������Ҳ����˵ֻ���ڵ�ǰ�ļ������ã���������ֻ�������Լ��ĵ�ǰ�ļ��ڲ���������static,����һ�㲻�������Ͷ���ֿ���


#include<iostream>
using namespace std;
int main()
{
	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
	auto b = 12.34;   ////�ǽ������Ǹ�����
	auto c = a + b;   //�������Լ�ȥ���
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	auto pa1 = &a;
	auto pa2 = &a;
	auto& ra = a;
	cout << typeid(pa1).name() << endl;
	cout << typeid(pa2).name() << endl;
	cout << typeid(ra).name() << endl;
	return 0;
}
//��ӡ�Ľ��p1,p2��Ϊint * ,ra��ӡ�Ľ��Ϊint


#include<iostream>
using namespace std;
int main()
{
	auto a = 1, b = 2;
	auto c = 12, d = 12.34;  //��һ�оͻ������Ϊֻ��һ��auto�����׸���ʲô����
	���Ǳ������޷�ȷ����
}


void TestAuto()
{
	int a[] = { 1,2,3 };
	auto b[] = { 4��5��6 };  //��Ϊ������������֪���м���Ԫ��
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


void TestPtr()
{
	int* p1 = NULL;
	int* p2 = 0;
	// ����
}


//#ifndef NULL
//#ifdef __cplusplus
//#define NULL 0
//#else
//#define NULL ((void *)0)
//#endif
//#endif


void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	return 0;
}


#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int age;
	char gender;
};
//��C�����еĽṹ�壬��ֻ�ܷ����ݣ����ܷź����ģ������C���Ե�ǰ����
//���ṹ���зź�������ô�����ʱ���ǻ����ģ�֮�ܷ�����
//��ΪC������������̵ģ����ݺͷ����Ƿ��뿪��
//������C++�У�struct�����Ľṹ�壬�������Է����ݻ��ǿ��Էź�����
//Ҳ����˵C++����Щ���ݺͲ�����Щ���ݵķ�������һ����
int main()
{
	return 0;
}


#include<iostream>
#include<string.h>
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
	Student s1, s2, s3;  //ѧ������(ѧ��ʵ��)
	s1.InitStudent("wq", 35, "��");
	s1.PrintStudnet();

	s2.InitStudent("ouhou", 5, "Ů");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "��");
	s3.PrintStudnet();

	return 0;
}


#include<iostream>
using namespace std;
class Student
{
	//��Ա����(Ҳ��Ϊ��Ϊ)
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

	//����(Ҳ��Ϊ����)
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


class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
 ������Ҫָ��PrintPersonInfo������Person�������
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
 ���н��г�Ա����
class A2
{
public:
	void f2()
	{

	}
};
 ����ʲô��û��---����
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
	int _year; // ��
	int _month; // ��
	int _day; // ��
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
	 this:  Student* const
	void InitStudent(char* _name, int age, char* gender)
	{
		this = nullptr;
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
	s1.InitStudent("Peter", 35, "��");
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "Ů");
	s2.PrintStudnet();
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
