#define _CRT_SECURE_NO_WARNINGS 1



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


#include<iostream>
#include<string.h>
using namespace std;
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};
class Person
{
private:
	String _name;
	int _age;
};
int main()
{
	Person p;
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
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << "Date(int year, int month, int day)" << this << endl;
	}

	~Date()
	{
		cout << "~Date()" << this << endl;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << this << endl;
	}

	void DisPlay()
	{
		cout << _year << "/"<<_month << "/" << _day << endl;
	}

	//���и�ֵ�����������

	Date& operator++()
	{
		_day += 1;
		return *this;
	}

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

	bool operator==(const Date& d)
	{
		return _year == d._year &&
			   _month == d._month &&
			   _day == d._day;
	}

	//�Ը�ֵ�����������
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


private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2021, 2, 10);

	d1.DisPlay();

	++d1;

	d1.DisPlay();

	d1++;

	d1.DisPlay();

	d1--;

	d1.DisPlay();

	--d1;

	d1.DisPlay();
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
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	// �ɶ���д
	// Date* const  this
	void TestFunc1()
	{
		//this = nullptr;
		this->_day++;
	}

	// �ڸú����в����޸ĵ�ǰ����ĳ�Ա����
	// const����thisָ��
	// const Date* const this;
	void TestFunc2()const
	{
		this->_day++;
		//_year++;
		//_month++;
	}

	// ֻ��������const Date* const
	void TestFuncWithConst()const
	{
		//TestFunc1(/*this*/);   // Date* const
	}

	// Date* const���ɶ���д
	void TestFuncWithoutConst()
	{
		TestFunc2(); // const Date* const: ֻ��
	}

	// (1+2)*3 ---> 12+3*
	~Date()
	{
		cout << "~Date():" << this << endl;
	}

	Date* operator&()
	{
		return this;
	}

	// Date* p = &d2;
	const Date* operator&()const
	{
		return this;
	}

private:
	int _year;
	int _month;
	mutable int _day;
	//������Щʱ���һ���ϣ����Щֵ�ǿ��Ա仯��
	//����const֮���޸ĳ�Ա��������ô��Ա�����������е�ֵ�����ܷ����仯��
	//�����ϣ����Щֵ��Ȼ�ǿ����޸ĵĻ�����ô�ҿ�����ĳЩ������ǰ�����mutable
	//����mutable֮��ͱ����������������const�����εĳ�Ա�����б��޸�
};

int main()
{
	Date d1(2019, 3, 24);
	const Date d2(2019, 3, 25); // ������d2�е����ݲ��������޸�
	cout << &d2 << endl;
	//d2.TestFunc1();  // TestFunc1��Ա��������ͨ�ĳ�Ա�������ں����п����޸ĵ�ǰ����ĳ�Ա
	d1.TestFunc1();
	d1.TestFunc2();
	return 0;
}


// Date* p = &d2;
const Date* operator&()const    //��ε�һ��constû�мӵĻ��������ǲ���ͨ�����
{
	return this;
	//��ΪҪ���ص���ָ�룬����������ص�ֻ�������͵�ָ��Ļ��ǲ����Եģ���Ϊthisָ����const���͵�
	//���Է���ֵ��ǰ��ҲҪ����const�ſ���
}
int main()
{
	Date d1(2019, 3, 24);
	const Date d2(2019, 3, 25); // ������d2�е����ݲ��������޸�
	cout << &d2 << endl;
	//d2.TestFunc1();  // TestFunc1��Ա��������ͨ�ĳ�Ա�������ں����п����޸ĵ�ǰ����ĳ�Ա
	d1.TestFunc1();
	d1.TestFunc2();
	return 0;
}


class Date
{
public:
	Date* operator&()
	{
		return this;
	}
	const Date* operator&()const
	{
		return this;
	}
private:
	int _year; // ��
	int _month; // ��
	int _day; // ��
};


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