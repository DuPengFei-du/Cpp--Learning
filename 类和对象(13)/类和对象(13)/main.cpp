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


////��C���Եķ�ʽ����ģ��
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Student
//{
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//
//void StudentInit(Student* ps, char* name, int age, char* gender)
//{
//	strcpy(ps->_name, name);
//	ps->_age = age;
//	strcpy(ps->_gender, gender);
//}
//
//void PrintStudent(Student* ps)
//{
//	printf("%s %d %s", ps->_name, ps->_age, ps->_gender);
//}
//
//int main()
//{
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


//class Test
//{
//public:
//	void TestFunc()
//	{
//		//cout << &this << endl;
//		Test* const& p = this;   //��仰���൱�����ڴ�ӡthisָ��ĵ�ַ
//		//��Ϊthisָ�벻��ֱ�Ӵ�ӡ��ַ����Ϊthisָ����һ�����������Դ�ӡ
//		//thisָ������ĵ�ַ
//		cout << &p << endl;
//	}
//
//public:
//	int _t;
//};
//
//int main()
//{
//	int* p = nullptr;   //���ɿ�
//	int*& q = p;
//
//	cout << &q << endl;
//	cout << &p << endl;
//	//��ӡ����֮�������������ĵ�ַ��һ���ģ�p��q�ĵ�ַ��ͬ
//
//	Test t;
//	t.TestFunc();   //ͨ������ȥ���ú���
//
//	return 0;
//}
////Ȼ��֮��ȥ����ebp��esp�����Ĵ����ĵ�ַ������this�ĵ�ַ�պ���ebp��esp
////�����Ĵ����ĵ�ַ֮��


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void DisPlay()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//
//
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//
//	d1.SetDate(2020,8,9);
//	d1.DisPlay();
//
//	d2.SetDate(2020, 8, 10);
//	d2.DisPlay();
//	
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
//	//Date d5();
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
//void TestSeqList()
//{
//	SeqList s;
//}
//int main()
//{
//	SeqList s(100);
//
//	return 0;
//}


//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		cout << "SeqList(int):" << this << endl;
//		array = (int*)malloc(sizeof(int) * capacity);
//		assert(array);
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	//��������
//	~SeqList()
//	{
//		if (array)
//		{
//			free(array);
//			_capacity = 0;
//			_size = 0;
//		}
//		cout << "~SeqList():" << this << endl;
//	}
//private:
//	int* array;
//	int _size;
//	int _capacity;
//};
//void TestSeqList()
//{
//	SeqList s;
//}
//int main()
//{
//	SeqList s(100);
//
//	return 0;
//}


//#include<iostream>
//#include<string.h>
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


//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//	return 0
//}
////�������b��c�Ľ������10


//int main()
//{
//	int a;
//	int b = 10;
//	int c(b);
//
//	string s1("hello");
//	string s2(s1);     //��s1ȥ����s2��Ȼ��s1��s2�����ݾ�һģһ����
//	return 0
//}
////����ͨ�����ӿ��Կ�����s1��s2�ĵ�ַ��һ���ģ�Ҳ����˵s1��s2��ͬһ��ռ䣬��ô�ڽ���������ʱ��ͻ�������⣬Ҳ����˵��ͬһ��ռ�����������


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
//	String s2(s1);
//}
//
//int main()
//{
//	TestString();
//	return 0;
//}