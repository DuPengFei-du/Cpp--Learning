#define _CRT_SECURE_NO_WARNINGS 1



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