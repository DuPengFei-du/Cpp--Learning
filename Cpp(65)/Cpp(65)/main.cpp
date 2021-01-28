#define _CRT_SECURE_NO_WARNINGS 1



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


��������ȥ����Ĭ�ϵĹ��캯��
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
	//g_count = 0;  //����������޸ģ���ô�ͻ�õ�����ȷ�ļ�����
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
	static int _count;   //ֻ��һ��������static���͵ı�������Ҫ��������г�ʼ������
};

int Test::_count = 0;   //�����������������ڴ�ռ�
//Ҫ��������г�ʼ���Ĳ���

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

	// ��ͨ�ĳ�Ա��������һ�����ص�thisָ��
	// ���Է�����ͨ�ĳ�Ա����
	int GetB()
	{
		GetCount();
		cout << this << endl;
		return this->_b;
	}

	// ��̬��Ա����: û��thisָ��
	// ���ܷ�����ͨ�ĳ�Ա����
	static int GetCount()
	{
		//cout << this << endl;
		//cout << _b << endl;
		//GetB();  ���ܵ���
		return _count;
	}

	~Test()
	{
		_count--;
	}

private:
	int _b;

	// �൱�������ж���һ��������޹ص�ȫ�ֱ���---���ж�����
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


class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// �Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ��
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;
int main()
{
	A a;
	a.Print();
	return 0;
}


#include<iostream>

//�����ռ䲻�����ͣ���һ��������
//C��������ȫ��������;ֲ�������
//���������ռ��൱���Ƕ�����һ���µ�������
namespace N1
{
	//���Զ��������Ҳ���Զ��庯��
	int a = 1;
	int b = 2;
	int Add(int left, int right)
	{
		return left + right;
	}
}

int a = 20;  //��ô�������Ҫ��ӡȫ���������е�a�Ļ�����Ҫ��ô��ӡ��
//printf("%d\n", ::a); 

int main()
{
	int a = 30;
	printf("%d\n", a);  //�����ʱ�����printf������ӡ�Ŀ϶����������е�a
	printf("%d\n", ::a);  //::Ϊ�������޶����������һ������ǰ��
	//������::�ʹ��������ڷ��ʵ���ȫ���������еı���
	printf("%d\n", N1::a);
	//���������ռ��a��ֻ��Ҫ���������޶�����ǰ����������ռ�����ƾͿ�����
	return 0;
}
//����a�ֱ�����������ͬ�����������Ա��������ǲ������κ������
//��ô����ʲô����»���������ģ�
//������ͬһ�������ռ�����������ͬ�ı�����ʱ�����ʱ�����������


namespace N2
{
	int a = 10;
	int b = 20;
	int c = 30;
	int Sub(int left, int right)
	{
		return left - right;
	}
	//�����ռ仹����Ƕ��
	namespace N3
	{
		int a = 10;
		int b = 20;
		int Mul(int left, int right)
		{
			return left * right;
		}
	}
}
printf("%d\n", N2::N3::a);  //���������н��е���


#include<iostream>
using namespace std;
int main()
{
	//C�������ǲ����printf���������﷨����
	//printf("%d %d %d", 10);    //�������ǲ��ᱨ���
	//������ȫ����ͨ������ģ�ֻ�ǻ��о���
	//���������ں�����������δ֪��
	//ʹ��printf����һ����̫�õĵ����
	//Ҫ���ʲô���͵����ݣ������ʽ���Ʒ�һ��Ҫ���ԣ�������Ҫ�����Լ�������
	//Ҫ��ס�ܶ��ָ�ʽ�������׳���
	//������C++������ʹ��cout
	cout << "change world" << endl;
	cout << 10 << " " << 12.34 << " " << 'a' << endl;
	//�����ں�������Ķ�����������ʲô
	return 0;
}


//ȱʡ�����ķ���
//ȫȱʡ�����Ͱ�ȱʡ����
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//���в�������ȱʡֵ��Ϊȫȱʡ����
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}

//��ȱʡ����
//void TestFunc2(int a=1,int b=2,int c)   
//�޷�ͨ�����룬��b��ֵ�õ���Ҳ�޷�ͨ������
//ֻ�а�a��ֵ�õ�������ͨ������
//a��b���õ�����cҲ�ǿ��Ե�
//�ó����ɣ�ע�⣺��ȱʡ����ֻ�ܴ�������һ�θ���
void TestFunc2(int a, int b, int c = 3)  //����ͨ������
{
	//���ֲ�������ȱʡֵ
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}
int main()
{
	//ȫȱʡ
	TestFunc();  //��ӡ 1 2 3
	TestFunc(10);  //��ӡ 10 2 3 
	TestFunc(10, 20);  //��ӡ10 20 3
	TestFunc(10, 20, 30);  //��ӡ10 20 30

	//��ȱʡ
	TestFunc2(10, 20);
	TestFunc2(10, 20, 30);

	return 0;
}


void TestFunc(int a = 20);

void TestFunc(int a = 20)
{

}
//�����ӵĴ���ͻ����ԭ�������������λ��ͬʱ�����Ļ������ܻ���Ĳ�һ��
//���ܾͻ�˵�����ˣ�����������λ�û�ȽϺ�һЩ����Ϊ��ʱ����Ҫ�õ��������⣬Ҫ����������������ʹ�ã������������Ĳ����ĳ�ֵ��һ�����������ͻ���ң�ȱʡ����ֵֻ���ǳ�����ȫ�ֱ���
int main()
{
	return 0;
}


int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}
//�����б�һ��
//����Ϊ��������
//���õ�ʱ�򣬵������ֵģ��������ֵ�
//�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
int main()
{
	Add(1, 2);
	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
	//c�����ǲ����������ĺ�����
	return 0;
}


void TestFunc()
{

}

void TestFunc(int a)
{

}
//�������������γ�������
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
//�������������γ�������
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
//�������������γ�������
int main()
{
	return 0;
}


short Add(short left, short right)
{
	return left + right;
}
int Add(short left, short right)
{
	return left + right;
}


#include<iostream >
using namespace std;

void Swap(int a, int b)
{
	cout << &a << " " << &b << " " << endl;
	int temp = a;
	a = b;
	b = temp;
	//���������βε����ݣ�����ʵ�ε�����
}

void Swap(int* pa, int* pb)
{
	cout << &pa << " " << &pb << " " << endl;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//����swap�γ�������
int main()
{
	int a = 1;
	int b = 2;
	cout << &a << " " << &b << " " << endl;
	//Swap(a, b);  //���ֻ��ֵ���ݵĻ����ǲ��е�
	Swap(&a, &b);
	cout << a << " " << b << " " << endl;
}


int main()
{
	int a = 10;
	int& ra = a;  //ra��a�ı���
	cout << &ra << "=" << &a << endl;
	ra = 20;  //�ı���ra��ͬʱ����ôa��ֵҲ�ǻᷢ���ı��

	int& rb = a;  //rbҲ������a ��һ�����������ж������
	rb = 30;  //��ô�޸�rb��ͬʱ��ra��aҲ�������˸ı�

	int& rra = ra;
	rra = 40;   //��ô���ᷢ���ı�
	//��Ϊ�õĶ���ͬһ��ռ�

	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;

	return 0;
}


int main()
{
	const int a = 10;   //��C�����У�const�����ε�����ʵ����һ��������ֻ������������ܱ��޸�
	//���ǣ���C++�У�const�����ε��������Ѿ���һ�������ˣ����ܱ��޸�
	//ͬʱ���к곣��������
	//���֪����C++�У�const�����ε����ǳ�������������ȥ��⣬������ʾ��
	//int array[a];  //���Ƿ����ͨ������


	//int& ra = a;  //ra��ֵ�ǿ����޸ĵ�
	//��ʱ�����޷�ͨ������ģ���Ϊa��const���͵�
	//��ra����ͨ���͵�
	//��ô������޸ģ������ô���ͨ�������أ�
	//ֻ��Ҫ��ǰ�����const �Ϳ�����
	const int& ra = a;  //��Ϊconst���͵����ã����߳�����

	double d = 12.34;
	const int& rd = d;  //(��Ȼ����ͨ�����룿��)  ����const�ǲ���ͨ������� 
	cout << &rd << " " << &d << " " << endl;
	//���Ǵ�ӡ�ĵ�ַ�ǲ�һ���ģ�˵��rd���õľͲ���d
	//ԭ���ǣ��������ᴴ��һ����ʱ��������double���εĲ��ַ�����ʱ������
	//��rd������ʱ������������d����ʱ�����Ǳ�����������
	//���ǲ�֪����������Ҳ��֪�����ĵ�ַ�������������޷����������κ��޸ĵ�
	//��Ȼ�Ĳ��ɣ��Ǿ�˵������ռ䱾���;��г���
	//���Լ���const�Ϳ���ͨ��������
	return 0;
}


int& Add(int left, int right)  //�������õķ�ʽ����
{
	int ret = left + right;
	return ret;
}
int main()
{
	int a = 10;
	int b = 20;
	int& retVal = Add(a, b);
	Add(100, 200);   //������˵����һ����û�з���ֵ������
	//����ͨ���������������Կ���retVal��ֵ����Ǳ��300��
	//ԭ������retVal��ret�ı�����һֱ�ǿռ�ı������ռ�û�з����仯������
	//�൱�����Զ��仯��
	return 0;
}
//����ʵ���ϣ���һ�δ�����������ģ�ret���˺�����������ֻ�ᣬ�ͻ�ѿռ�黹������ϵͳ�ˣ���ôretValue��������ret�����൱������������Ч�Ŀռ�


#include<iostream>
using namespace std;
int main()
{
	char c = 'c';
	char& rc = c;
	char* pc = &c;
	cout << sizeof(rc) << endl;
	cout << sizeof(pc) << endl;
	return 0;
}
//��ӡ�Ľ��Ϊ1��4


int main()
{
	const int a = 10;
	int array[a];
	int* pa = (int*)& a;

	*pa = 100;
	cout << a << endl;
	cout << *pa << endl;
	return 0;
}


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


#include<iostream>
using namespace std;
int main()
{
	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
	auto b = 12.34;   //�ǽ������Ǹ�����
		auto c = a + b;   //�������Լ�ȥ���
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}