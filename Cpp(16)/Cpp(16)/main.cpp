/*
���캯�������ֱ������������ͬ�ģ�����������������
�Ӷ����Է��������ȥʶ��������������Ϊ���캯�������д�������������
�κε���ģ��������κ�ֵ
*/
#include<iostream>
using namespace std;
class Time
{
public:
	Time()
	{
		hour = 0;
		minute = 0;
		sec = 0;
	}
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}
void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();

	Time t2;         //��������t2��ͬʱ���ù��캯��Time
	t2.show_time();   
	return 0;
}

/*
�����ж����˹��캯��Time()���������ֺ���������ͬ�ģ��ڽ��������ʱ���Զ�ִ�й��캯��������
���캯��Time�Ķ��壬�������ǶԸö����е�ȫ�����ݳ�Ա����ֵ0����Ҫ����Ϊ�����������ʱ��ֱ��
�Գ������ݳ�Ա����ֵ��(�����ǲ�������)����ֵ�����д�ڹ��캯�������������
ֻ���ڵ��ù��캯����ʱ��Ż�ִ����Щ��ֵ���
*/


/*
��ִ����������ʱ�����Ƚ�������t1����ʱ�Զ�ִ�й��캯��Time����ִ�й��캯��Time
�����ж�t1�����е����ݳ�Ա��ֵ��ʼֵ0.Ȼ����ִ����������t1.set_time()
�Ӷ��Ӽ��������µ�ֵ��ֵ������t1�����ݳ�Ա
Ȼ�������t1��Ա��ֵ
���Ž�������t2���Զ�ִ�й��캯����t2�ĳ�Ա����ֵ��������ֱ�����
*/


���ڹ��캯����ʹ�ã������µ�����
/*
1.ʲôʱ����ù��캯��---�ڽ��������ʱ��ͻ��Զ����ù��캯�����ڽ�������ʱ
ϵͳΪ�ö������洢��Ԫ����ʱִ�й��캯�����ͻ��ָ���ĳ�ʼֵ�͵��й����ݳ�Ա��
�洢�ռ䵱���ˡ�ÿ����һ�����󣬾ͻ����һ�ι��캯��

2.���캯��û�з���ֵ����������ֻ�ǶԶ�����г�ʼ���Ĳ�������˲���Ҫ
���幹�캯����ʱ����������ֵ���ͣ���������һ�㺯����һ����Ҫ�Ĳ�ͬ��

3.���캯������Ҫ�û�ȥ���ã�Ҳ���ܱ��û�������
���캯�����ڶ�������ʱ����ϵͳ�Զ�ִ�еģ�����ֻ��ִ��һ��
���캯��һ������Ϊpublic

4.������һ��������ʼ����һ�������
Time t1;
Time t2=t1;
��ʱ���Ѷ���t1�ĸ����ݳ�Ա��ֵ������t2��Ӧ�ĸ�����Ա�������õ��ù��캯��

5.����û�û���Լ����幹�캯������ôC++ϵͳ���Զ�����һ�����캯����ֻ�����
���캯���ĺ������ǿյģ�Ҳû�в�������ִ�г�ʼ���Ĳ���
*/


�������Ĺ��캯��
/*
����������й��캯�������������ں������ж����ݳ�Ա����ֵ�����ַ�ʽʹ�����ÿһ������
�����ݳ�Ա���õ�ͬһ���ʼֵ�����ǣ���ʱ�û���ϣ���Բ�ͬ�Ķ����費ͬ�ĳ�ʼֵ
����޷�ʹ������ķ��������
���Բ��ô������Ĺ��캯�����ڵ��ò�ͬ����Ĺ��캯��ʱ������
����ͬ�����ݴ��ݸ����캯�����Ӷ�ʵ�ֲ�ͬ�ĳ�ʼ��
���캯���ײ���һ���ʽΪ
���캯��(����1 �β�1 ������2���β�2)
ǰ���Ѿ�˵�ˣ��û��ǲ��ܵ��ù��캯���ģ�����޷�ʹ�ó���ĺ������õķ�������ʵ��
ʵ�����ڶ������ʱ��������
��������һ���ʽΪ��
���� ������(ʵ��1��ʵ��2 ...)
�ڽ�������ʱ����ʵ�ε�ֵ���ݸ����캯����Ӧ��ʵ�ʲ���
*/


�ò�����ʼ���б������ݳ�Ա���г�ʼ��

/*
C++���ṩ��һ�ֳ�ʼ�����ݳ�Ա�ķ������������б���ʼ����ʵ�ֶ����ݳ�Ա�ĳ�ʼ��
���ַ������ٺ������ڶ����ݳ�Ա��ʼ���������ں������ײ�ʵ�֣����磬
����ʹ�����µ���ʽ��
*/


Box::Box(int h, int w, int len) :height(h), width(w), lenght(len)
{

}


/*
��������ԭ�������ײ��Ĳ�λ����һ��ð�ţ�Ȼ���г������ĳ�ʼ���б�
����ĳ�ʼ����ʾ�������β�h��ֵ��ʼ�����ݳ�Աheight�����β�w��ֵ����ʼ��
width�����β�len��ֵ����ʼ��length
����Ļ������ǿյģ�Ҳ����˵�������ǿյģ�û��ִ���κε����
�ò����ĳ�ʼ���������Լ��ٺ�����ĳ��ȣ�ʹ�ýṹ���ӵľ���
�����Ϳ���ֱ���������ж��幹�캯���������������ⶨ�幹�캯��
*/


/*
˵����������ݳ�Ա�����飬��Ӧ���ڹ��캯���ĺ�������
�������丳ֵ���������ڲ�����ʼ���б��ж�����г�ʼ��
*/

#include<string.h>
#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, char s, nam[]) :num(n), sex(s)
	{
		Strcpy(name, nam);
	}
private:
	int num;
	char sex;
	char name[20];
};
���������������std1
Student std1{10101��'m',"wangli"};


���캯��������

/*
��һ�����п��Զ��������캯�����Ա�Ϊ�����ṩ��ͬ�ĳ�ʼ���ķ���
���û���ѡ����Щ���캯��������ͬ�����ƣ��������ĸ������߲��������Ͳ���ͬ
��ͳ�Ϊ���캯��������
*/
#include<iostream>
using namespace std;
class Box
{
public:
	Box();    //����û�в����Ĺ��캯��
	Box(int h, int w, int len):height(h), width(w), length(len)
	{

	}
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box()      //�����ⶨ��û�в����Ĺ��캯��Box
{
	height = 0;
	width = 0;
	length = 0;
}
int Box::volume()
{
	return height * width * length;
}


˵��


/*
�ڽ�������ʱ�򲻱ظ���ʵ�εĹ��캯������ΪĬ�ϵĹ��캯������Ȼ
û�в����Ĺ��캯����ΪĬ�ϵĹ��캯����һ����ֻ����һ��Ĭ�ϵĹ��캯��
����û�û�ж��幹�캯������ôϵͳ�ͻ����Ĭ�ϵĹ��캯�����������ĺ�����
ʱ�յģ������ʼ�������ã�����û�ϣ���ڴ��������ʱ��ʹ�����ݳ�Ա���г�ʼֵ
�ͱ����Լ����幹�캯��
*/


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


using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	Add(10, 20);
	return 0;
}
//ʹ�÷��㣬���ǳ�ͻ�ͻ��


#include <iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cin >> a;
	cin >> b >> c;
	cout << a << endl;
	cout << b << " " << c << endl;
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


void Swap(int& ra, int& rb)    //ra��a�ı�����rb��b�ı���
{
	int temp = ra;
	ra = rb;
	rb = temp;
	//ͨ�������βΣ�Ҳ���൱���ǽ���ʵ����
}
int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << a << " " << b << " " << endl;
	return 0;
}
//����Ҫ�пգ�Ҳ����Ҫ�����ã�ʹ������ʮ�ֵķ��㣬Ч�ʱȽϸ�


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


void TestAuto()
{
	int a[] = { 1,2,3 };
	auto b[] = { 4��5��6 };  //��Ϊ������������֪���м���Ԫ��
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