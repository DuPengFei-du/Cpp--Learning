#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
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

	// 	Date(const Date& d)
	// 	{
	// 		_year = d._year;
	// 		_month = d._month;
	// 		_day = d._day;
	// 		cout << "Date(Date&):" << this << endl;
	// 	}

	~Date()
	{
		cout << "~Date():" << this << endl;
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

	Date d3(2019, 5, 5);   //����ϣ��d3�����ݸ��ɺ�d1������һ���ģ��������������ʱ���������
	//�����������ø�ֵ����d1�е����ݸ�ֵ��d3
	//ͨ�����Կ�������û���κε�����
	d3 = d1;
}

int main()
{
	TestDate();
	return 0;
}


#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class String
{
public:
	String(const char* str = "")
	{
		cout << "String(const char* ):" << this << endl;
		if (nullptr == str)
			str = "";

		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}

	// �������캯��������ʽ�ṩ

	~String()
	{
		cout << "~String():" << this << endl;
		free(_str);
		_str = nullptr;
	}

private:
	char* _str;
};

void TestString()
{
	String s1("hello");
	String s2;
	s2 = s1;  //���ø�ֵ�Ĳ���
	//ͨ�����ӿ��Կ�����ʵs1��s2���ǹ��õ�ͬһ���ڴ�ռ䣬��������Դ�ͷŵ�ʱ���ǻ�
	//����ǳ����������
	//����������ֱ�Ӹ�ֵ�Ļ������ᵼ��s2�Ŀռ�û���ͷ�
	//��Ϊ��ֱ�Ӱ�s1�ĵ�ַ���Ƶ�s2����ȥ�ģ�����������ڴ�й¶
	//���Զ���string��ĸ�ֵ������Ҫ�����Լ�ȥ���
}


#include<iostream>
using namespace std;
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

	 d1 = d2 = d3;
	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}


	int _year;
	int _month;
	int _day;
};

Date& TestDate(Date& d)
{
	Date temp(d);
	temp._day += 1;
	return d;
}

void TestDate()
{
	Date d1(2019, 3, 24);
	Date d2(d1);
	d1 = TestDate(d2);
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
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "~Date():" << this << endl;
	}


	int _year;
	int _month;
	int _day;
};

Date TestDate(Date& d)
{
	Date temp(d);
	temp._day += 1;
	return d;
}

void TestDate()
{
	Date d1(2019, 3, 24);
	Date d2(d1);
	d1 = TestDate(d2);
}

int main()
{
	TestDate();
	return 0;
}
