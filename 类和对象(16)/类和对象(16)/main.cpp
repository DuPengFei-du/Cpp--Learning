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
	String s2(s1);
}

int main()
{
	TestString();
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


class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day)
	{
		cout << "Date(int year, int month, int day)" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day),
		_day(day)
	{
		cout << "Date(int year, int month, int day)" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day)
	{
		// 		_year = d._year;
		// 		_month = d._month;
		// 		_day = d._day;
		cout << "Date(Date&):" << this << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


#include<iostream>
using namespace std;
class Date
{
public:
#if 0
	// ��ʼ���б�
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{
		// ���캯�������Ǹ���ֵ���ǳ�ʼ��
// 		_year = year;
// 		_month = month;
// 		_day = day;
		//r = _day;
		cout << "Date(int,int,int):" << this << endl;
	}
#endif

	// ��ʼ���б�
	// 1. ��ʼ���б��г�Ա�ĳ��ִ��򣬲������������ĳ�ʼ������
	// 2. ��Ա�����ڳ�ʼ���б��еĳ�ʼ������Ϊ�������е���������
	// ���飺��ò�Ҫʹ�ó�Ա��ʼ����Ա
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
		, _r(_day)
		, _a(_day)
	{
		// ���캯�������Ǹ���ֵ���ǳ�ʼ��
		// 		_year = year;
		// 		_month = month;
		// 		_day = day;
		//r = _day;
		cout << "Date(int,int,int):" << this << endl;
	}

	Date(const Date& d)
		: _year(d._year)
		, _month(d._month)
		, _day(d._day)
		, _r(d._r)
		, _a(d._a)
	{
		// 		_year = d._year;
		// 		_month = d._month;
		// 		_day = d._day;
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
	int& _r;
	const int _a;
};


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour, int minute, int second)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}


private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
		, _t(0, 0, 0)
		//, _t()   //�����޲ε�Ĭ�ϵĹ��캯��
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
	//���û�������_t(0, 0, 0)��ֱ�Ӹ���Time_t�ǻᱨ��ģ�ԭ������
	//������һ��time��Ķ���t����ô�������tһ������Ҫ���г�ʼ����
	//��ô��������Ĭ��ȥTime����Ѱ��û�в����Ĺ��캯��������Time���ʱ��û��
	//��ʾ�����޲εĹ��캯���ģ����Ծͻ����
	//��ô����Ϊ�˿�����ȷ�Ĵ����������Time�����͵Ķ���Ļ�����ô���Ǿ���Ҫ������һ���в�����
	//�ͺñ�˵_t(0, 0, 0)���Ϳ�ͨ��������
};

int main()
{
	//Date d(2019, 3, 24);
	Date d;
	return 0;
}


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

	void TestFunc()
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		// 		: _year(year)
		// 		, _month(month)
		// 		, _day(day)
				//, _t()   //�����޲ε�Ĭ�ϵĹ��캯��
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this << endl;    //�ҵ���ͼ��Ҫȥ��ӡthis��Ȼ���ִ����������ͨ������
		//��ô��Ҳ����˵����ʱ���ҵĶ����Ѿ��������
	}
private:
	int _hour;
	int _minute;
	int _second;
};


#include<iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{
		cout << this->_hour << endl;
	}

	void TestFunc()
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		// 		: _year(year)
		// 		, _month(month)
		// 		, _day(day)
				//, _t()   //�����޲ε�Ĭ�ϵĹ��캯��
	{
		cout << "Date(int,int,int):" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

int main()
{
	// �ڱ����������ڼ䣬�Ѿ�Ϊmain�������ջ�ռ�
	// �ÿռ����Ѿ������˺������еľֲ�����
	Date d;    // �ڹ��캯������֮ǰ�������ǲ����ڵ�
	Time t;
	t.TestFunc();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year)
		: _year(year)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	Date& operator=(const Date& d)
	{
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d(2019);
	d = 2020;
	//һ�����������͵ı�����һ�������εı�����������֮ǰ����ǣ���ʱ����ͨ�������
	//����û�뵽�������Ĵ����ǿ���ͨ������ģ�ԭ������
	// 2020---> ͨ�����ι��캯��--->��ʱ����
	//Ҳ����˵���캯����������ת���Ĺ��ܣ�������һ��int���ͣ�Ȼ��ת����
	// ��һ�����α������������Ͷ���ֵ
	// ʵ�ʱ������������2020����һ������������������������d1������и�ֵ
	//����һ������£������������ת����ֹ������ô�������ֹ�أ�
	//��ֹ�ķ��������ڹ��캯��ǰ�����һ��explicit�ؼ���
	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	explicit Date(int year)
		: _year(year)
	{
		cout << "Date(int,int,int):" << this << endl;
	}

	Date& operator=(const Date& d)
	{
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d(2019);
	d = 2020;   // 2020---> ͨ�����ι��캯��--->��ʱ����
	return 0;
}