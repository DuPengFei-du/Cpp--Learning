#define _CRT_SECURE_NO_WARNINGS 1



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
	Student s1, s2, s3;  //ѧ������(ѧ��ʵ��)
	s1.InitStudent("wq", 35, "��");
	s1.PrintStudnet();

	s2.InitStudent("ouhou", 5, "Ů");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "��");
	s3.PrintStudnet();

	return 0;
}


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


#include<iostream>
#include<string>
using namespace std;
class Student
{
	//��Ա����(Ҳ��Ϊ��Ϊ)
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
	//����(Ҳ��Ϊ����)
	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1, s2, s3;  //ѧ������(ѧ��ʵ��)
	s1.InitStudent("wq", 35, "��");
	s1.PrintStudnet();

	s2.InitStudent("nana", 5, "Ů");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "��");
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
// ������Ҫָ��PrintPersonInfo������Person�������
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
// ���н��г�Ա����
class A2
{
public:
	void f2()
	{

	}
};
// ����ʲô��û��---����
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
	//this:  Student* const   ����thisָ������ͣ���Ȼthisָ��������ǿ����޸ĵģ�����this�����ǲ����Ա��޸ĵ�
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
	s1.InitStudent("Peter", 35, "��");
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "Ů");
	s2.PrintStudnet();
	return 0;
}


//��C���Եķ�ʽ����ģ��
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
���¹��̣�
1. ʶ������
2. ʶ�����г�Ա����
3. ʶ�����еĳ�Ա����&��д
*/

#if 0
class Student
{
public:
	/*
	void InitStudent(Student* const this, char* name, int age, char* gender)
	{    ��������Ա����������������ʵ���������ĸ������ģ���Ϊ����һ��thisָ��
		strcpy(this->_name, name);
		this->_age = age;
		strcpy(this->_gender, gender);
	}
	*/
	void InitStudent(char* _name, int age, char* gender);
	// 	{
	// 		strcpy(this->_name, _name);    �ڱ�������ʵ�ʵ�����
	// 		_age = age;  
	// 		strcpy(_gender, gender);
	// 	}

	void TestFunc(...);
	// 	{
	// 	}

		/*
		// this�Ǳ������Լ�ά��(������������ά����)
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
	// Student::InitStudent(&s1, "Peter", 35, "��")
	s1.InitStudent("Peter", 35, "��");
	// Student::PrintStudnet(&s1);
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "Ů");
	s2.PrintStudnet();
	return 0;
}


class A
{
public:
	void TestFunc1()
	{
		cout << this << endl;
		this->_a = 20;   //���û����仰�Ļ�������Ĵ����ǿ�������ͨ�������
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
		Test* const& p = this;   //��仰���൱�����ڴ�ӡthisָ��ĵ�ַ
		//��Ϊthisָ�벻��ֱ�Ӵ�ӡ��ַ����Ϊthisָ����һ�����������Դ�ӡ
		//thisָ������ĵ�ַ
		cout << &p << endl;
	}

public:
	int _t;
};

int main()
{
	int* p = nullptr;   //���ɿ�
	int*& q = p;

	cout << &q << endl;
	cout << &p << endl;
	//��ӡ����֮�������������ĵ�ַ��һ���ģ�p��q�ĵ�ַ��ͬ

	Test t;
	t.TestFunc();   //ͨ������ȥ���ú���

	return 0;
}
//Ȼ��֮��ȥ����ebp��esp�����Ĵ����ĵ�ַ������this�ĵ�ַ�պ���ebp��esp
//�����Ĵ����ĵ�ַ֮��


class Date
{
	//�����������ĺ������������ʲô��û��
	//������ʵ����6��Ĭ�ϵĳ�Ա����
};


#include<iostream>
using namespace std;
class Date
{
public:
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
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
	//�޲εĹ��캯��
	Date()   //���캯��  ��û�з���ֵ
	{
		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
		//�Ѷ���ĵ�ַ��ӡ����
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
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
	//�����Ǵ�����һ������
	//����һ�������������൱��������һ����������
	//Ϊd5�ĺ�������������ķ���ֵ������Date���ͣ�û�в���


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
	//�޲εĹ��캯��
	//Date()   //���캯��  ��û�з���ֵ
	//{
	//	cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
	//	//�Ѷ���ĵ�ַ��ӡ����
	//}
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
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
	//���������ɵĹ��캯����Ĭ�ϵĹ��캯��
	//Ĭ�ϵĹ��캯��һ�����޲ҵ�
	//���˵���û����幹�캯���ˣ��������Ͳ������ɵ�
	//������ʱ���ٴ���һ���������������Ķ���Ļ�
	//��һ���ǲ��ᴴ���ɹ���
	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	//�޲εĹ��캯��
	Date()   //���캯��  ��û�з���ֵ
	{
		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
		//�Ѷ���ĵ�ַ��ӡ����
	}

	//ȫȱʡ�Ĺ��캯��
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
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


class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// ��������(��������)
	int _year;
	int _month;
	int _day;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d;
	return 0;
}


#include<iostream>
#include<assert.h>
using namespace std;

class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		cout << "SeqList(int):" << this << endl;
		array = (int*)malloc(sizeof(int) * capacity);
		assert(array);
		_capacity = capacity;
		_size = 0;
	}

	//��������
	~SeqList()
	{
		if (array)
		{
			free(array);
			_capacity = 0;
			_size = 0;
		}
		cout << "~SeqList():" << this << endl;
	}
private:
	int* array;
	int _size;
	int _capacity;
};
void TestSeqList()
{
	SeqList s;
}
int main()
{
	SeqList s(100);

	return 0;
}


int main()
{
	int a;
	int b = 10;
	int c(b);

	string s1("hello");
	string s2(s1);     //��s1ȥ����s2��Ȼ��s1��s2�����ݾ�һģһ����
	return 0
}
//����ͨ�����ӿ��Կ�����s1��s2�ĵ�ַ��һ���ģ�Ҳ����˵s1��s2��ͬһ��ռ䣬��ô�ڽ���������ʱ��ͻ�������⣬Ҳ����˵��ͬһ��ռ�����������


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//�����������һ������
	}

	~Date()
	{
		//������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
		//���Զ�����������˵������������������ʵ��û��ʲôӰ��
		cout << "~Date():" << this << endl;
		//������������һ������
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 5, 5);
	Date d2(d1);

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	//���캯��
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//�����������һ������
	}

	//�������캯��
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date&d):" << this << endl;
	}

	//��������
	~Date()
	{
		//������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
		//���Զ�����������˵������������������ʵ��û��ʲôӰ��
		cout << "~Date():" << this << endl;
		//������������һ������
	}
private:
	int _year;
	int _month;
	int _day;
};
void TestDate()
{
	Date d1(2020, 5, 5);
	Date d2(d1);
}
int main()
{
	TestDate();
	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	//���캯��
	Date(int year = 2020, int month = 5, int day = 5)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int ,int):" << this << endl;
		//�����������һ������
	}

	//��������
	~Date()
	{
		//������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
		//���Զ�����������˵������������������ʵ��û��ʲôӰ��
		cout << "~Date():" << this << endl;
		//������������һ������
	}
private:
	int _year;
	int _month;
	int _day;
};
void TestDate()
{
	Date d1(2020, 5, 5);
	Date d2(d1);
}
int main()
{
	TestDate();
	return 0;
}


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(Date&):" << this << endl;
	}

	// d1 = d2 = d3;
	Date& operator=(const Date& d)
	{
		if (this != &d)    //��˼����������Լ����Լ���ֵ�Ļ����Ͳ���Ҫ������
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	// *this + day
	// ���⣺����֮��Ľ�������ǷǷ����ڣ�����
	Date operator+(int day)
	{
		Date temp(*this);
		temp._day += day;
		return temp;
	}
	//�ȸ�һ����ʱ����temp��Ȼ����ȥ�޸���ʱ����
	//temp�����ݣ�Ȼ�󷵻�temp��Ҫ֪�������ڲ��������õķ�ʽ���ص�
	//����ֵ�÷�ʽ���ص�


	// ���ȷ�������
	// ���������Ƿ����---->������Ϊ�����ķ���ֵ���ͣ����ܷ��غ���ջ�ϵĿռ�
	Date& DateAdd(int day)
	{
		_day += day;
		return *this;
	}

	bool operator==(const Date& d)
	{
		return _year == d._year &&
			_month == d._month &&
			_day == d._day;
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	// ǰ��++
	// d2 = ++d1
	Date& operator++()
	{
		_day += 1;
		return *this;
	}

	// ����++
	// d2 = d1++
	Date operator++(int)
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}

	Date& operator--()
	{
		_day -= 1;
		return *this;
	}

	Date operator--(int)
	{
		Date temp(*this);
		_day -= 1;
		return temp;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	int* _p;
};

// �������طǷ������----
// Date operator@(int a)
// {
// 	Date d;
// 	return d;
// }

// int operator+(int left, int right)
// {
// 	return left + right;
// }

void TestDate()
{
	int a = 10;
	int b = 20;
	int c;
	c = a + b;
	a = b = c;

	Date d1(2019, 3, 22);
	d1.DateAdd(3);
	d1 = d1 + 3;


	Date d2(d1);
	d2 = d1++;
	d2 = ++d1;

	Date d3(2018, 3, 22);
	d3 = d3;
	d3 = d1;
	d3.operator=(d1);
	d1 = d2 = d3;
	d1.operator=(d2.operator=(d3));
	if (d3 == d1)
		;

	Date& d4 = d3;

	d4 = d3;
}

int main()
{
	TestDate();
	return 0;
}