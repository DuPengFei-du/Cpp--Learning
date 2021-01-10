#define _CRT_SECURE_NO_WARNINGS 1


���캯�����������Ǹ�ֵ�Ĳ���
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


ֻ�й��캯���Ϳ������캯�����г�ʼ���б�
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
	Date(int year, int month, int day)
		:_year(year),
		_month(month),
		_day(day)
	{
		cout << "Date(int year, int month, int day)" << this << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020,11, 12);

	return 0;
}


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