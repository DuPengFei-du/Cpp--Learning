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


//void TestFunc()
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////�������������γ�������
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a)
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////�������������γ�������
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a, int b)
//{
//
//}
//
//void TestFunc(int a, double b)
//{
//
//}
////�������������γ�������
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


//#include<iostream>
//using namespace std;
//inline int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Add(a, b) << endl;    //�滻�����ڱ���׶�
//	cout << Add(a, ++b) << endl;    //�滻�����ڱ���׶�
//	//��Ϊ�滻�����ڱ���׶Σ�����������뵽������������ȥ����������Ч�ʻ�Ƚϸ�
//	//����û��չ���Ϳ�����������û��ֱ�ӵ�����������Ϳ�����
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


//#include<iostream>
//#include<string.h>
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