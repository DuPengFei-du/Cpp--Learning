//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void TestFunc1()
//	{
//		cout << this << endl;
//		this->_a = 20;   //���û����仰�Ļ�������Ĵ����ǿ�������ͨ�������
//		cout << "TestFunc()" << endl;
//	}
//
//	void TestFunc2()
//	{
//		this->_a = 10;
//	}
//
//protected:
//	int _a;
//};
//
//
//int g_a = 10;
//
//int main()
//{
//	cout << g_a << endl;
//	A* ps = nullptr;
//	ps->TestFunc1();// TestFunc1(ps)
//	return 0;
//}


//������
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.SetDate(2020, 6, 16);
//	d1.DisPlay();
//
//	Date d2;
//	d2.SetDate(2020, 6, 17);
//	d2.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date()
//	{
//		//�޲����Ĺ��캯��
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month<< "." << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	Date d2(2020, 6, 17);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//Date()
//	//{
//	//	//�޲����Ĺ��캯��
//	//	cout << "Date()" << this << endl;
//	//}
//
//	//Date(int year,int month,int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//	cout << _year << "." << _month<< "." << _day << endl;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	Date d2(2020, 6, 17);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	//C�������ǲ����printf���������﷨����
//	//printf("%d %d %d", 10);    //�������ǲ��ᱨ���
//	//������ȫ����ͨ������ģ�ֻ�ǻ��о���
//	//���������ں�����������δ֪��
//	//ʹ��printf����һ����̫�õĵ����
//	//Ҫ���ʲô���͵����ݣ������ʽ���Ʒ�һ��Ҫ���ԣ�������Ҫ�����Լ�������
//	//Ҫ��ס�ܶ��ָ�ʽ�������׳���
//	//������C++������ʹ��cout
//	cout << "change world" << endl;
//	cout << 10 << " " << 12.34 << " " << 'a' << endl;
//	//�����ں�������Ķ�����������ʲô
//	return 0;
//}


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////�����б�һ��
////����Ϊ��������
////���õ�ʱ�򣬵������ֵģ��������ֵ�
////�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
//	//c�����ǲ����������ĺ�����
//	return 0;
//}


//int& Add(int left, int right)  //�������õķ�ʽ����
//{
//	int ret = left + right;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& retVal = Add(a, b);
//	Add(100, 200);   //������˵����һ����û�з���ֵ������
//	//����ͨ���������������Կ���retVal��ֵ����Ǳ��300��
//	//ԭ������retVal��ret�ı�����һֱ�ǿռ�ı������ռ�û�з����仯������
//	//�൱�����Զ��仯��
//	return 0;
//}
////����ʵ���ϣ���һ�δ�����������ģ�ret���˺�����������ֻ�ᣬ�ͻ�ѿռ�黹������ϵͳ�ˣ���ôretValue��������ret�����൱������������Ч�Ŀռ�


//// F.h
//#include <iostream>
//using namespace std;
//inline void f(int i);
//// F.cpp
//#include "F.h"
//void f(int i)
//{
//	cout << i << endl;
//}
//// main.cpp
//#include "F.h"
//int main()
//{
//	f(10);
//	return 0;
//}
//// ���Ӵ���main.obj : error LNK2019: �޷��������ⲿ���� "void __cdecl f(int)" (?
////f@@YAXH@Z)���÷����ں��� _main �б����ñ�
////inline���ε����ƾ����ļ�������Ҳ����˵ֻ���ڵ�ǰ�ļ������ã���������ֻ�������Լ��ĵ�ǰ�ļ��ڲ���������static,����һ�㲻�������Ͷ���ֿ���


//#include<iostream>
//using namespace std;
//class Student
//{
//	//��Ա����(Ҳ��Ϊ��Ϊ)
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//	//����(Ҳ��Ϊ����)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	return 0;
//}


//struct Student
//{
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//
//void InitStudent(Student* this, char* name, int age, char* gender)
//{
//	strcpy(this->_name, name);
//	this->_age = age;
//	strcpy(this->_gender, gender);
//}
//
//void PrintStudent(Student* this)
//{
//	printf("%s %d %s", this->_name, this->_age, this->_gender);
//}
//
//int main()
//{
//	return 0;
//}


//class A
//{
//public:
//	void TestFunc1()
//	{
//		cout << this << endl;
//		this->_a = 20;   //���û����仰�Ļ�������Ĵ����ǿ�������ͨ�������
//		cout << "TestFunc()" << endl;
//	}
//
//	void TestFunc2()
//	{
//		this->_a = 10;
//	}
//
//protected:
//	int _a;
//};
//
//
//int g_a = 10;
//
//int main()
//{
//	cout << g_a << endl;
//	A* ps = nullptr;
//	ps->TestFunc1();// TestFunc1(ps)
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//	
//	Date d2(2020, 6, 19);
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void DispPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//
//	Date d2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//	
//	Date d2(2020, 6, 19);
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	//������������˵��û���漰����Դ�Ĺ�����ʵ��û�������������ǿ��Ե�
//	//Ҳ��������ڴ�й©������
//	//�ȹ���ĺ�����
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020, 6, 18);
//
//	Date d2(2020, 6, 19);
//
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//class SeqList
//{
//public:
//	//���캯��
//	SeqList(int capacity = 10)
//	{
//		*array = (int)malloc(sizeof(int) * capacity);
//		if (nullptr == array)
//		{
//			assert(0);
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	//��Ϊ�漰���˿ռ�Ŀ��٣�������Ҫ������������ɶ�����Դ���ͷ�
//	~SeqList()
//	{
//		if (array)
//		{
//			free(array);
//			array = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	SeqList s;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //��ӡ���м��
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1, d2, d3;
//
//	d1.InitDate(2020, 4, 30);
//	d1.PrintDate();
//
//	d2.InitDate(2020, 4, 29);
//	d2.PrintDate();
//
//	d3.InitDate(2020, 4, 28);
//	d3.PrintDate();
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//�޲εĹ��캯��
//	Date()   //���캯��  ��û�з���ֵ
//	{
//		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
//		//�Ѷ���ĵ�ַ��ӡ����
//	}
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//�������캯���γ�������
//
//	//�����������󣬱������ͻ���ü��ι��캫��
//	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //��ӡ���м��
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1, d2, d3;
//	Date d4(2020, 4, 27);
//	Date d5();
//	//�����Ǵ�����һ������
//	//����һ�������������൱��������һ����������
//	//Ϊd5�ĺ�������������ķ���ֵ������Date���ͣ�û�в���
//
//
//	d1.InitDate(2020, 4, 30);
//	d1.PrintDate();
//
//	d2.InitDate(2020, 4, 29);
//	d2.PrintDate();
//
//	d3.InitDate(2020, 4, 28);
//	d3.PrintDate();
//
//	d4.PrintDate();
//
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//�޲εĹ��캯��
//	//Date()   //���캯��  ��û�з���ֵ
//	//{
//	//	cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
//	//	//�Ѷ���ĵ�ַ��ӡ����
//	//}
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//�������캯���γ�������
//
//	//�����������󣬱������ͻ���ü��ι��캫��
//	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //��ӡ���м��
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	//���������ɵĹ��캯����Ĭ�ϵĹ��캯��
//	//Ĭ�ϵĹ��캯��һ�����޲ҵ�
//	//���˵���û����幹�캯���ˣ��������Ͳ������ɵ�
//	//������ʱ���ٴ���һ���������������Ķ���Ļ�
//	//��һ���ǲ��ᴴ���ɹ���
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//�޲εĹ��캯��
//	Date()   //���캯��  ��û�з���ֵ
//	{
//		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
//		//�Ѷ���ĵ�ַ��ӡ����
//	}
//
//	//ȫȱʡ�Ĺ��캯��
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//�������캯���γ�������
//
//	//�����������󣬱������ͻ���ü��ι��캫��
//	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()   //��ӡ���м��
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//}