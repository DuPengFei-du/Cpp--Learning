#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<assert.h>
using namespace std;

class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		array = (int*)malloc(sizeof(int) * capacity);
		assert(array);
		_capacity = capacity;
		_size = 0;
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


namespace N1   //ǰ���Ѿ��й�N1
//��������ռ���������ظ��Ļ����Ƿ����ͨ�����룿
//���ǿ���ͨ�������
//���������ͬ���Ƶ������ռ䣬������������Ǻϲ���һ��
{
	int c = 30;
	int d = 40;
	int Div(int left, int right)
	{
		return left / right;   //��֤rightҪ��Ϊ0
	}
}


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


using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	Add(10, 20);
	return 0;
}
//ʹ�÷��㣬���ǳ�ͻ�ͻ��


#include<iostream>
using namespace std;
int main()
{
	//C�������ǲ����printf���������﷨����
	//printf("%d %d %d", 10);    //�������ǲ��ᱨ����
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


#include<iostream>
using namespace std;
void Test(int a = 10)   //������һ��Ĭ��ֵ���ô��������������治�ô�����
//����û��ٵ��ú�����ͬʱ�����˴��β�������ôʹ�õľ����û�������ȥ�Ĳ���
{
	cout << a << endl;
}
int main()
{
	Test();
	Test(100);
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
//�����ӵĴ���ͻ������ԭ�������������λ��ͬʱ�����Ļ������ܻ���Ĳ�һ��
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
//�����б���һ��
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


void TestFunc()
{}
void TestFunc(int a = 0)
{}
int main()
{
	TestFunc(10);  //�ǿ���ͨ������ģ������������ĸ�����
	TestFunc();    //�ǲ���ͨ�������
	//�����غ����ĵ��ò���ȷ����һ�����Ե��ã��ڶ���Ҳ���Ե���
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
	//int& ra;  //�������޷�ͨ������ģ���Ϊ�������͵ı���û�н��г�ʼ������
	//�����ǲ��е�
	int& ra = a;
	//ra��a�ı�����Ҳ����˵��ra��a��ͬһ������
	//��ο���ra��a��һ����������ӡ���ǵĵ�ַ���Ϳ�����
	cout << &ra << " " << &a << " " << endl;
	//����ӡ�ĵ�ַ��һ����
	//��ô�����Ǹ�ra���и�ֵ�Ļ���a��ֵҲ�ᷢ���ı�
	ra = 20;
	cout << a << endl;  //��ӡ��a��ֵҲΪ20
	return 0;
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
	auto b = 12.34;   �ǽ������Ǹ�����
		auto c = a + b;   //�������Լ�ȥ���
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


int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}
//�����б���һ��
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


short Add(short left, short right)
{
	return left + right;
}
int Add(short left, short right)
{
	return left + right;
}


for (int val : numbers)
{
	cout << "The next value is ";
	cout << val << endl;
}


for (auto val : numbers)
{
	cout << "The next value is ";
	cout << val << endl;
}