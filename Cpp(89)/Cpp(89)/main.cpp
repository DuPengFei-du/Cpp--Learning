#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//public:
//	void SetData(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//	void DisPlay()
//	{
//		cout << _name << "-" << _age << "-" << _gender;
//	}
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//
//	s1.SetData("dudu", 20, "Ů");
//
//
//	s1.DisPlay();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void SetData(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void DisPlay()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//
//	d1.SetData(2020, 3, 19);
//
//	d1.DisPlay();
//
//}


//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	//this:  Student* const   ����thisָ������ͣ���Ȼthisָ��������ǿ����޸ĵģ�����this�����ǲ����Ա��޸ĵ�
//	void InitStudent(const char* _name, int age,const char* gender)
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
//class Time
//{
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{
//		cout << this << endl;    //�ҵ���ͼ��Ҫȥ��ӡthis��Ȼ���ִ����������ͨ������
//		//��ô��Ҳ����˵����ʱ���ҵĶ����Ѿ��������
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//int main()
//{
//	Time t;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year)
//		: _year(year)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		return *this;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d(2019);
//	d = 2020;
//	//һ�����������͵ı�����һ�������εı�����������֮ǰ����ǣ���ʱ����ͨ�������
//	//����û�뵽�������Ĵ����ǿ���ͨ������ģ�ԭ������
//	// 2020---> ͨ�����ι��캯��--->��ʱ����
//	//Ҳ����˵���캯����������ת���Ĺ��ܣ�������һ��int���ͣ�Ȼ��ת����
//	// ��һ�����α������������Ͷ���ֵ
//	// ʵ�ʱ������������2020����һ������������������������d1������и�ֵ
//	//����һ������£������������ת����ֹ������ô�������ֹ�أ�
//	//��ֹ�ķ��������ڹ��캯��ǰ�����һ��explicit�ؼ���
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	explicit Date(int year)
//		: _year(year)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		return *this;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d(2019);
//	d = 2020;   // 2020---> ͨ�����ι��캯��--->��ʱ����
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
//
//// 4. ���ú�����Ϊ�����Ԫ����
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	// _cout<<d.GetYear()<<"-"<<d.GetMonth()<<"-"<<d.GetDay();
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//
//// >> istream
//
//int main()
//{
//	Date d(2019, 3, 24);
//	d.PrintDate();
//	cout << 10 << endl; // cout<<10  cout<<endl;
//
//	cout << d << endl;
//	//cout << 10;
//	//cout << d;
//
//	//d.operator<<(cout);
//	//d << cout;
//
//	return 0;
//}


////new��delete�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���뵥��Ԫ�صĿռ�
//	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
//	//new�����Ŀռ�����ָ�������н���
//	//new������ϵĶ������͵�����
//	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
//	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�(malloc��ȱ��)
//
//	int* p2 = new int(10);
//	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
//	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
//	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
//	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0(calloc�����Ĺ���)
//	//new���Խ��ռ��ʼ����Ϊ�����ֵ
//
//	//���������Ŀռ�
//	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
//	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
//	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
//	return 0;
//}


////new��delete�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���뵥��Ԫ�صĿռ�
//	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
//	//new������ϵĶ������͵�����
//	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
//	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�
//
//	int* p2 = new int(10);
//	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
//	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
//	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
//	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0
//
//	//���������Ŀռ�
//	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
//	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
//	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
//	//�����ʼ���ķ�����C++11�������ṩ��һ���µ�����
//
//	//�ռ���ͷ�
//	delete p1;
//	delete p2;
//	//p1��p2�Ŀռ���ջ�ϣ�����������ָ��Ŀռ��ڶ���
//
//	//���delete�ͷŵ���һ�������Ŀռ�Ļ�����Ҫ��delte[]�������ͷ�
//
//	delete[] p3;
//	delete[] p4;
//	//p3��p4���������һ����ʼ���ˣ�һ��û�н��г�ʼ��
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	//���캯��
//	Test()
//	{
//		cout << "Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
//	}
//
//	//��������
//	~Test()
//	{
//		cout << "~Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
//	}
//private:
//	int _t;
//};
//
//void TestNewDelete()
//{
//	Test* pt1 = new Test;   //new��������Ŀռ䲻��Ҫ�����пգ����������¶��ǿ��Ա�֤����ռ�ɹ���
//	delete pt1;
//
//	Test* pt2 = new Test[10];   //������10�����󣬾ͻ����10�˹��캯��
//	delete[] pt2;
//
//}
//
//int main()
//{
//	//��new�������Զ������͵Ŀռ�
//	TestNewDelete();
//	return 0;
//}


//#include<iostream>
//#include<stdlib.h>
//#include <crtdbg.h>
//using namespace std;
//void TestFunc()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	delete p1;
//
//	int* p2 = (int*)malloc(sizeof(int));
//	delete[] p2;
//
//	int* p3 = new int;
//	free(p3);
//
//	int* p4 = new int;
//	delete[] p4;
//
//	int* p5 = new int[10];
//	free(p5);
//
//	int* p6 = new int[10];
//	delete p6;
//	//��������deleteȥ�����ͻ������������ֱ�����Ϣ
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();   //���ڼ���ڴ��Ƿ���й©�ķ���
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		_ptr = new int[10];
//	}
//
//	~Test()
//	{
//		delete[] _ptr;
//		_ptr = nullptr;
//	}
//
//private:
//	int* _ptr;
//};
//
//void TestFunc()
//{
//	//����
//	//���������ԭ�����ڣ�ʹ��malloc��������ռ��ʱ��malloc��û�е��ù��캯����
//	//���������delete�ǻ�ȥ�������������ģ���ô��ʱ���û�ж�����ȷ��ָ�򣬵������������Ļ�
//	//��һ���������
//	//��������ptr��thisָ���Ǵ��ڵģ�����thisָ����ָ������������ֵ�����Բ��ܶ�������ͷ�
//	//һ�ͷžͻᷢ�����������
//	//p1��Ϊû�е��ù��캯��������p1ָ��Ĳ�����һ�����󣬶�delete�Ὣp1��ָ��Ŀռ䵱�ɶ����ͷ�
//	//�������ڸ���û�ж������Դ�������
//	//��Ϊ_ptrָ�벢û�б���ʼ�������Դ�������
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//����
//	//�����������ǲ��ģ�ͬ����delete[]Ҳ�ǻ�ȥ��������������
//	//������ʹ��malloc�Ļ���������ʵ��û�еģ���Ϊmalloc����ȥ���ù��캯����
//	//û��������󻹷�Ҫȥ�ͷŵĻ�����ô��һ���ᷢ��������
//	Test* p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//�ڴ�й©
//	//ԭ��������newȥ����ռ�Ļ����ǻ�ȥ���ù��캯���ģ���ôthisָ��ʵ���Ͼ����൱������
//	//��ȷ��ָ���ˣ��������ͷŶ������Դ��ʱ��ʹ����free
//	//free�ǲ���ȥ�������������ģ����Զ������Դ��ʵ��û�б��ͷŵ���
//	//�����ǻ�����ڴ�й©��
//	//p3��ָ�����Ŀռ䣬�����������������ʵ������Դ��
//	//free��û�аѶ�������Ŀ׼����ͷŵ�������˵������ڴ�й©������
//	Test* p3 = new Test;
//	//p3�Ŀռ�����ջ�ϵģ�p3��ָ����������Ŀռ����ڶ��ϵ�
//	free(p3);
//	_CrtDumpMemoryLeaks();
//	//�������������������ڴ��Ƿ�й¶��
//	//����ȱ�����ڣ�������������ǣ��ڴ����е��ĸ�λ���ڴ�й©��
//
//	//����
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//����
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//����+�ڴ�й©
//	Test* p6 = new Test[10];
//	delete p6;
//}
////�漰��[]��λ�ö�����������
//int main()
//{
//	TestFunc();
//	return 0;
//}


