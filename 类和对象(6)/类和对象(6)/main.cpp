//#include<iostream>
//using namespace std;
//class B
//{
//public:
//	B(int b = 0)
//		:_b(b)
//	{}
//	int _b;
//};
//class A
//{
//public:
//	void Print()
//	{
//		cout << a << endl;
//		cout << b._b << endl;
//		cout << p << endl;
//	}
//private:
//	// �Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ��
//	int a = 10;
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;
//};
//int A::n = 10;
//int main()
//{
//	A a;
//	a.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Time
//{
//	friend void TestFriend();
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << this->_hour << endl;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	// ��Ԫ����
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	void PrintDate()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	/*
//	// d << cout;
//	void operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	*/
//
//	friend void TestFriend();
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestFriend()
//{
//	Time t;
//	t._hour = 16;
//
//	Date d;
//	d._year = 2019;
//}


//#include<iostream>
//using namespace std;
//class Time
//{
//	friend class Date;
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << this->_hour << endl;
//	}
//
//	void TestFriendClass()
//	{
//		Date d;
//		d._year = 2019;
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//	friend class Time;
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	void PrintDate()
//	{
//		cout << _year << "-" << _month << "-" << _day << _t._hour << ":" << _t._minute << ":" << _t._second << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};


////ȱʡ�����ķ���
////ȫȱʡ�����Ͱ�ȱʡ����
//void TestFunc(int a = 1, int b = 2, int c = 3)
//{
//	//���в�������ȱʡֵ��Ϊȫȱʡ����
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//
////��ȱʡ����
////void TestFunc2(int a=1,int b=2,int c)   
////�޷�ͨ�����룬��b��ֵ�õ���Ҳ�޷�ͨ������
////ֻ�а�a��ֵ�õ�������ͨ������
////a��b���õ�����cҲ�ǿ��Ե�
////�ó����ɣ�ע�⣺��ȱʡ����ֻ�ܴ�������һ�θ���
//void TestFunc2(int a, int b, int c = 3)  //����ͨ������
//{
//	//���ֲ�������ȱʡֵ
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//int main()
//{
//	//ȫȱʡ
//	TestFunc();  //��ӡ 1 2 3
//	TestFunc(10);  //��ӡ 10 2 3 
//	TestFunc(10, 20);  //��ӡ10 20 3
//	TestFunc(10, 20, 30);  //��ӡ10 20 30
//
//	//��ȱʡ
//	TestFunc2(10, 20);
//	TestFunc2(10, 20, 30);
//
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


//int main()
//{
//	const int a = 10;   //��C�����У�const�����ε�����ʵ����һ��������ֻ������������ܱ��޸�
//	//���ǣ���C++�У�const�����ε��������Ѿ���һ�������ˣ����ܱ��޸�
//	//ͬʱ���к곣��������
//	//���֪����C++�У�const�����ε����ǳ�������������ȥ��⣬������ʾ��
//	//int array[a];  //���Ƿ����ͨ������
//
//
//	//int& ra = a;  //ra��ֵ�ǿ����޸ĵ�
//	//��ʱ�����޷�ͨ������ģ���Ϊa��const���͵�
//	//��ra����ͨ���͵�
//	//��ô������޸ģ������ô���ͨ�������أ�
//	//ֻ��Ҫ��ǰ�����const �Ϳ�����
//	const int& ra = a;  //��Ϊconst���͵����ã����߳�����
//
//	double d = 12.34;
//	const int& rd = d;  //(��Ȼ����ͨ�����룿��)  ����const�ǲ���ͨ������� 
//	cout << &rd << " " << &d << " " << endl;
//	//���Ǵ�ӡ�ĵ�ַ�ǲ�һ���ģ�˵��rd���õľͲ���d
//	//ԭ���ǣ��������ᴴ��һ����ʱ��������double���εĲ��ַ�����ʱ������
//	//��rd������ʱ������������d����ʱ�����Ǳ�����������
//	//���ǲ�֪����������Ҳ��֪�����ĵ�ַ�������������޷����������κ��޸ĵ�
//	//��Ȼ�Ĳ��ɣ��Ǿ�˵������ռ䱾���;��г���
//	//���Լ���const�Ϳ���ͨ��������
//	return 0;
//}


//int main()
//{
//	const int a = 10;   //��C�����У�const�����ε�����ʵ����һ��������ֻ������������ܱ��޸�
//	//���ǣ���C++�У�const�����ε��������Ѿ���һ�������ˣ����ܱ��޸�
//	//ͬʱ���к곣��������
//	//���֪����C++�У�const�����ε����ǳ�������������ȥ��⣬������ʾ��
//	//int array[a];  //���Ƿ����ͨ������
//
//
//	//int& ra = a;  //ra��ֵ�ǿ����޸ĵ�
//	//��ʱ�����޷�ͨ������ģ���Ϊa��const���͵�
//	//��ra����ͨ���͵�
//	//��ô������޸ģ������ô���ͨ�������أ�
//	//ֻ��Ҫ��ǰ�����const �Ϳ�����
//	const int& ra = a;  //��Ϊconst���͵����ã����߳�����
//
//	double d = 12.34;
//	const int& rd = d;  //(��Ȼ����ͨ�����룿��)  ����const�ǲ���ͨ������� 
//	cout << &rd << " " << &d << " " << endl;
//	//���Ǵ�ӡ�ĵ�ַ�ǲ�һ���ģ�˵��rd���õľͲ���d
//	//ԭ���ǣ��������ᴴ��һ����ʱ��������double���εĲ��ַ�����ʱ������
//	//��rd������ʱ������������d����ʱ�����Ǳ�����������
//	//���ǲ�֪����������Ҳ��֪�����ĵ�ַ�������������޷����������κ��޸ĵ�
//	//��Ȼ�Ĳ��ɣ��Ǿ�˵������ռ䱾���;��г���
//	//���Լ���const�Ϳ���ͨ��������
//	return 0;
//}


//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)NULL);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//struct Student
//{
//	char name[20];
//	int age;
//	char gender;
//};
////��C�����еĽṹ�壬��ֻ�ܷ����ݣ����ܷź����ģ������C���Ե�ǰ����
////���ṹ���зź�������ô�����ʱ���ǻ����ģ�֮�ܷ�����
////��ΪC������������̵ģ����ݺͷ����Ƿ��뿪��
////������C++�У�struct�����Ľṹ�壬�������Է����ݻ��ǿ��Էź�����
////Ҳ����˵C++����Щ���ݺͲ�����Щ���ݵķ�������һ����
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Student
//{
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
//	s2.InitStudent("ouhou", 5, "Ů");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "��");
//	s3.PrintStudnet();
//
//	return 0;
//}


//class Person
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//// ������Ҫָ��PrintPersonInfo������Person�������
//void Person::PrintPersonInfo()
//{
//	cout << _name << " "_gender << " " << _age << endl;
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


//#include<iostream>
//#include<string.h>
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


//class Person
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//// ������Ҫָ��PrintPersonInfo������Person�������
//void Person::PrintPersonInfo()
//{
//	cout << _name << " "_gender << " " << _age << endl;
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