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
		 		: _year(year)
		 		, _month(month)
		 		, _day(day)
				, _t()   //�����޲ε�Ĭ�ϵĹ��캯��
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
	 //�ڱ����������ڼ䣬�Ѿ�Ϊmain�������ջ�ռ�
	 //�ÿռ����Ѿ������˺������еľֲ�����
	Date d;    // �ڹ��캯������֮ǰ�������ǲ����ڵ�
	Time t;
	t.TestFunc();

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
private:
	int _hour;
	int _minute;
	int _second;
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
	d = 2020;   // 2020---> ͨ�����ι��캯��--->��ʱ����
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


#include<iostream>
using namespace std;
class Date
{
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
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

	Time(Time&)
	{}

	Time& operator=(Time& t)
	{
		return *this;
	}

	~Time()
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	 	Date()
	 	{}

		/*
		Date(Date& d)
		   : _t(d._t)
		{}

		*/

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};
int main()
{
	Date d1; // ������Ĺ��캯�� // Time()
	Date d2(d1);  // Time(Time&)--->�Ҹ�����λ��--->Date��Ŀ������캯����
	Date d3;
	d3 = d1;

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
		:_count(0)   //��count�ĳ�ʼֵ����0
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;
	int _count;   // �ܷ���һ������ĳ�Ա����
};

int main()
{
	Test t1, t2;
	return 0;
}


#include<iostream>
using namespace std;
int g_count = 0;
class Test
{
public:
	Test()
	{
		g_count++;
	}

	Test(Test& t)
	{
		g_count++;
	}

	~Test()
	{
		g_count--;
	}

private:
	int _b;
};

void TestCount()
{
	Test t1, t2;   //����������洴�����������󣬳��˺�����֮������
	cout << g_count << endl;
}

int main()
{
	Test t1, t2;
	//�����������Ҳ������������������������Ķ���û�б����ٵ�ʱ��һ�����ĸ�����
	//������ĺ������еĶ���������֮�󣬾�ֻʣ������������
	TestCount();
	cout << g_count << endl;
	return 0;
}


#include<iostream>
using namespace std;
// ���ܹ������˶��ٸ�����
// �����ı���----���ܰ�����ÿ�������У�Ӧ�������ж�����
// 1. ʹ��ȫ�ֱ���---->����---ȱ�ݣ�����ȫ
//int g_count = 0;

// ��ͨ��Ա����                static��Ա����
// �����ڳ�ʼ���б��г�ʼ��         ����
// ÿ�������ж�����             ֻ��һ�ݣ�û�а����ھ���Ķ����У������ж������
// ����ͨ���������             ����ͨ������ֱ�ӷ��� || Ҳ����ͨ��������������ֱ�ӷ���
class Test
{
public:
	Test()
		: _b(0)   //��ͨ���͵ı��������ڳ�Ա��ʼ���б��λ�ý��г�ʼ��
		//���ǣ�static��Ա���������ڳ�Ա�ĳ�ʼ���б��н��г�ʼ��
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	static int GetCount()
	{
		return _count;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;
	static int _count;   // �ܷ���һ������ĳ�Ա����
};

int Test::_count = 0;

void TestCount()
{
	Test t1, t2;
	//cout << g_count << endl;
	cout << t1.GetCount() << endl;
}

int main()
{
	//��GetCount����static���͵ģ��Ϳ��Բ�ͨ������ȥ������
	Test::GetCount();
	Test t1, t2;
	cout << Test::GetCount() << endl;
	cout << sizeof(t1) << endl;
	//cout << &t1._count << "=" << &t2._count << endl;    
	//��ο���static��Ա���������г�Ա������ģ�������ÿ����Ա�����ж����Դ�����һ��
	//���ſ���ͨ����ӡ��ͬ������static��Ա�����ĵ�ַ��������ӡ�����ĵ�ַ�Ľ���ǲ���һ����
	//�Ϳ����жϳ���������ÿ������������һ�ݣ��������б�������һ��static��Ա����
	//static��Ա�����Ĵ�С�ǲ������ڶ����С����ģ���Ϊ�������ж��������е�
	
	//cout << Test::_count << endl;
	//����ͨ������ֱ�ӷ��� || Ҳ����ͨ��������������ֱ�ӷ���
	//��Ϊstatic���Ƕ��������еģ����Կ���ͨ������ȥ���ʣ���ȻҲ���Բ�ͨ������ȥ����
	//���ǿ��Եģ���ô�����з��ʷ�ʽ��ʲô������

	//�����з��ʷ�ʽ��ʲô����
	//int a = 10;
	//a = t1._count;
	//a = Test::_count; 
	//��ʵ�ڵײ�û��ʲô���𣬱���������󶼻ᴦ��ɵڶ��ַ�ʽ�ķ���

	TestCount();
	cout << Test::GetCount() << endl;
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
		: _b(0)
	{
		_count++;
	}

	Test(Test& t)
	{
		_count++;
	}

	 ��ͨ�ĳ�Ա��������һ�����ص�thisָ��
	 ���Է�����ͨ�ĳ�Ա����
	int GetB()
	{
		GetCount();
		cout << this << endl;
		return this->_b;
	}

	 ��̬��Ա����: û��thisָ��
	 ���ܷ�����ͨ�ĳ�Ա����
	static int GetCount()
	{
		cout << this << endl;
		cout << _b << endl;
		GetB();  ���ܵ���
		return _count;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;

	 //�൱�������ж���һ��������޹ص�ȫ�ֱ���---���ж�����
	static int _count;   // ����
};


int Test::_count = 0;  // ���ٿռ�

int main()
{
	Test t;
	t.GetB();

	Test::GetCount();
	return 0;
}