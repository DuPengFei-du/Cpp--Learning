//#include<iostream>
//using namespace std;
//class Date
//{
//public:
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


//#include<iostream>
//using namespace std;
//// ���ǿ�������������ǲ��Ǻܽ�Ӳ��
//class Date
//{
//public:
//	Date(int year)
//	{
//		// �����year�����ǳ�Ա���������Ǻ����βΣ�
//		year = year;
//	}
//private:
//	int year;
//};
//// ��������һ�㶼��������
//class Date
//{
//public:
//	Date(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//
//};
//// ����������
//class Date
//{
//public:
//	Date(int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
//// ������ʽҲ���Եģ���Ҫ����˾Ҫ��һ�㶼�ǼӸ�ǰ׺���ߺ�׺��ʶ���־��С�


//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		array = (int*)malloc(sizeof(int) * capacity);
//		assert(array);
//		_capacity = capacity;
//		_size = 0;
//	}
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//
//void TestSeqList()
//{
//	SeqList s;
//}
//
//int main()
//{
//	SeqList s(100);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//�����������һ������
//	}
//
//	~Date()
//	{
//		//������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
//		//���Զ�����������˵������������������ʵ��û��ʲôӰ��
//		cout << "~Date():" << this << endl;
//		//������������һ������
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		�����������һ������
//	}
//
//	//�������캯��
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date&d):" << this << endl;
//	}
//
//	//��������
//	~Date()
//	{
//		������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
//		���Զ�����������˵������������������ʵ��û��ʲôӰ��
//		cout << "~Date():" << this << endl;
//		������������һ������
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//}
//int main()
//{
//	TestDate();
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


//void TestFunc(int a = 20);
//
//void TestFunc(int a = 20)
//{
//
//}
////�����ӵĴ���ͻ����ԭ�������������λ��ͬʱ�����Ļ������ܻ���Ĳ�һ��
////���ܾͻ�˵�����ˣ�����������λ�û�ȽϺ�һЩ����Ϊ��ʱ����Ҫ�õ��������⣬Ҫ����������������ʹ�ã������������Ĳ����ĳ�ֵ��һ�����������ͻ���ң�ȱʡ����ֵֻ���ǳ�����ȫ�ֱ���
//int main()
//{
//	return 0;
//}


//#include<iostream >
//using namespace std;
//
//void Swap(int a, int b)
//{
//	cout << &a << " " << &b << " " << endl;
//	int temp = a;
//	a = b;
//	b = temp;
//	//���������βε����ݣ�����ʵ�ε�����
//}
//
//void Swap(int* pa, int* pb)
//{
//	cout << &pa << " " << &pb << " " << endl;
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
////����swap�γ�������
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << &a << " " << &b << " " << endl;
//	//Swap(a, b);  //���ֻ��ֵ���ݵĻ����ǲ��е�
//	Swap(&a, &b);
//	cout << a << " " << b << " " << endl;
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
////	����ͨ���������������Կ���retVal��ֵ����Ǳ��300��
////	ԭ������retVal��ret�ı�����һֱ�ǿռ�ı������ռ�û�з����仯������
//	�൱�����Զ��仯��
//	return 0;
//}
//����ʵ���ϣ���һ�δ�����������ģ�ret���˺�����������ֻ�ᣬ�ͻ�ѿռ�黹������ϵͳ�ˣ���ôretValue��������ret�����൱������������Ч�Ŀռ�


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


////Person.cpp
//
//#include"Person.h"
//
//#include<string.h>
//#include<iostream>
//using namespace std;
//
//void Person::InitPerson(char* name, char* gender, int age)
//{
//	strcpy_s(_name, name);
//	_age = age;
//	strcpy_s(_gender, gender);
//}
//void Person::PrintPerson()
//{
//	cout << _name << "-" << _age << "-" << _gender << endl;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	//��Ա����(Ҳ��Ϊ��Ϊ)
//public:
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
//private:
//	//����(Ҳ��Ϊ����)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1, s2, s3;  //ѧ������(ѧ��ʵ��)
//	s1.InitStudent("wq", 35, "��");
//	s1.PrintStudnet();
//
//	s2.InitStudent("nana", 5, "Ů");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "��");
//	s3.PrintStudnet();
//
//	return 0;
//}


//class A1
//{
//public:
//	void f1()
//	{
//
//	}
//private:
//	int _a;
//};
//// ���н��г�Ա����
//class A2
//{
//public:
//	void f2()
//	{
//
//	}
//};
//// ����ʲô��û��---����
//class A3
//{
//
//};


//class Student
//{
//public:
//	//this:  Student* const   ����thisָ������ͣ���Ȼthisָ��������ǿ����޸ĵģ�����this�����ǲ����Ա��޸ĵ�
//	void InitStudent(char* _name, int age, char* gender)
//	{
//		//this = nullptr;
//		strcpy(this->_name, _name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//	s1.InitStudent("Peter", 35, "��");
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "Ů");
//	s2.PrintStudnet();
//	return 0;
//}


///*
//���¹��̣�
//1. ʶ������
//2. ʶ�����г�Ա����
//3. ʶ�����еĳ�Ա����&��д
//*/
//
//#if 0
//class Student
//{
//public:
//	/*
//	void InitStudent(Student* const this, char* name, int age, char* gender)
//	{    ��������Ա����������������ʵ���������ĸ������ģ���Ϊ����һ��thisָ��
//		strcpy(this->_name, name);
//		this->_age = age;
//		strcpy(this->_gender, gender);
//	}
//	*/
//	void InitStudent(char* _name, int age, char* gender);
//	// 	{
//	// 		strcpy(this->_name, _name);    �ڱ�������ʵ�ʵ�����
//	// 		_age = age;  
//	// 		strcpy(_gender, gender);
//	// 	}
//
//	void TestFunc(...);
//	// 	{
//	// 	}
//
//		/*
//		// this�Ǳ������Լ�ά��(������������ά����)
//		void PrintStudnet(Student* const this)
//		{
//			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
//		}
//		*/
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//	s1.TestFunc();
//	s1.TestFunc(10);
//	s1.TestFunc(10, 20);
//	// Student::InitStudent(&s1, "Peter", 35, "��")
//	s1.InitStudent("Peter", 35, "��");
//	// Student::PrintStudnet(&s1);
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "Ů");
//	s2.PrintStudnet();
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
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1,d2;
//
//	d1.SetDate(2020, 6, 19);
//	d1.DisPlay();
//
//	d2.SetDate(2020, 6, 20);
//	d2.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//û�в����Ĺ��캯��
//	Date()
//	{
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	/*void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//
//	Date d3(2020, 6, 19);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//û�в����Ĺ��캯��
//	Date()
//	{
//		cout << "Date()" << this << endl;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//
//	/*void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}*/
//
//	~Date()
//	{
//		cout << "~Date()" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//
//	Date d3(2020, 6, 19);
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		array = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == array)
//		{
//			assert(0);
//			return;
//		}
//	}
//	
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
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	SeqList s(100);
//	return 0;
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
//#include<string.h>
//#include<stdlib.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	Person p;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//�����������һ������
//	}
//
//	//�������캯��
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date&d):" << this << endl;
//	}
//
//	//��������
//	~Date()
//	{
//		//������������˵��������û��ʲô��Դ����Ҫȥ�ͷŵ�
//		//���Զ�����������˵������������������ʵ��û��ʲôӰ��
//		cout << "~Date():" << this << endl;
//		//������������һ������
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//}
//int main()
//{
//	TestDate();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//class String
//{
//public:
//	String(const char* str = "")
//	{
//		cout << "String(const char* ):" << this << endl;
//		if (nullptr == str)
//			str = "";
//
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	// �������캯��������ʽ�ṩ
//
//	~String()
//	{
//		cout << "~String():" << this << endl;
//		free(_str);
//		_str = nullptr;
//	}
//
//private:
//	char* _str;
//};
//
//void TestString()
//{
//	String s1("hello");
//	String s2;
//	s2 = s1;  //���ø�ֵ�Ĳ���
//	//ͨ�����ӿ��Կ�����ʵs1��s2���ǹ��õ�ͬһ���ڴ�ռ䣬��������Դ�ͷŵ�ʱ���ǻ�
//	//����ǳ����������
//	//����������ֱ�Ӹ�ֵ�Ļ������ᵼ��s2�Ŀռ�û���ͷ�
//	//��Ϊ��ֱ�Ӱ�s1�ĵ�ַ���Ƶ�s2����ȥ�ģ�����������ڴ�й¶
//	//���Զ���string��ĸ�ֵ������Ҫ�����Լ�ȥ���
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(Date&):" << this << endl;
//	}
//
//	// d1 = d2 = d3;
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)    //��˼����������Լ����Լ���ֵ�Ļ����Ͳ���Ҫ������
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//
//		return *this;
//	}
//
//	// *this + day
//	// ���⣺����֮��Ľ�������ǷǷ����ڣ�����
//	Date operator+(int day)
//	{
//		Date temp(*this);
//		temp._day += day;
//		return temp;
//	}
//	//�ȸ�һ����ʱ����temp��Ȼ����ȥ�޸���ʱ����
//	//temp�����ݣ�Ȼ�󷵻�temp��Ҫ֪�������ڲ��������õķ�ʽ���ص�
//	//����ֵ�÷�ʽ���ص�
//
//
//	// ���ȷ�������
//	// ���������Ƿ����---->������Ϊ�����ķ���ֵ���ͣ����ܷ��غ���ջ�ϵĿռ�
//	Date& DateAdd(int day)
//	{
//		_day += day;
//		return *this;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year &&
//			_month == d._month &&
//			_day == d._day;
//	}
//
//	bool operator!=(const Date& d)
//	{
//		return !(*this == d);
//	}
//
//	// ǰ��++
//	// d2 = ++d1
//	Date& operator++()
//	{
//		_day += 1;
//		return *this;
//	}
//
//	// ����++
//	// d2 = d1++
//	Date operator++(int)
//	{
//		Date temp(*this);
//		_day += 1;
//		return temp;
//	}
//
//	Date& operator--()
//	{
//		_day -= 1;
//		return *this;
//	}
//
//	Date operator--(int)
//	{
//		Date temp(*this);
//		_day -= 1;
//		return temp;
//	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	int* _p;
//};
//
//// �������طǷ������----
//// Date operator@(int a)
//// {
//// 	Date d;
//// 	return d;
//// }
//
//// int operator+(int left, int right)
//// {
//// 	return left + right;
//// }
//
//void TestDate()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	c = a + b;
//	a = b = c;
//
//	Date d1(2019, 3, 22);
//	d1.DateAdd(3);
//	d1 = d1 + 3;
//
//
//	Date d2(d1);
//	d2 = d1++;
//	d2 = ++d1;
//
//	Date d3(2018, 3, 22);
//	d3 = d3;
//	d3 = d1;
//	d3.operator=(d1);
//	d1 = d2 = d3;
//	d1.operator=(d2.operator=(d3));
//	if (d3 == d1)
//		;
//
//	Date& d4 = d3;
//
//	d4 = d3;
//}
//
//int main()
//{
//	TestDate();
//	return 0;
//}
