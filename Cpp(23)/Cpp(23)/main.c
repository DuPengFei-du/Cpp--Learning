//ָ������Ա��ָ��


/*
�����е�ַ����Ŷ�����ʼ��ַ��ָ���������ָ������ָ�����
�����еĳ�ԱҲ�е�ַ����Ŷ����Ա��ַ��ָ���������ָ������Ա��ָ�����
*/

//ָ��������ݳ�Ա��ָ��
/*
����ָ��������ݳ�Ա��ָ������ķ����Ͷ���ָ����ͨ������ָ�����
�ķ�����ͬ������
*/
int* pi;
//����ָ���������ݳ�Ա��ָ�������һ����ʽΪ
//���������� *ָ�������
//���Time������ݳ�ԱhourΪ���õ��������ͣ������������
//ͨ��ָ��������ݳ�Ա��ָ��������ʶ������ݳ�Աhour
p1 = &t1.hour;
cout << *p1 << endl;


//ָ������Ա������ָ��
/*
����ָ������Ա������ָ������ķ����Ͷ���ָ����ͨ������ָ��
�����ķ���������ͬ��ָ����ͨ������ָ������Ķ��巽��Ϊ��
������(*ָ�������)(�����б�),�磺
*/
void (*p)();   //����ָ��
//����ʹpָ��һ������������ͨ������ָ������������
p = fun;
(*p)();  //����fun����

/*
������һ��ָ������Ա������ָ��������Ƚϸ���һЩ
��ôӦ����ô����ָ���Ա������ָ������أ�
*/
void (Time::* p2)();  //����p2Ϊָ��Time���й��ó�Ա������ָ�����

//ע�⣺
/*
(Time::*p2)��������Ų�����ʡ�ԣ���Ϊ()�����ȼ�����*�����û�����ŵĻ�
�ͻ������
*/


//ָ��ǰ�����thisָ��
/*
ÿ�������е����ݳ�Ա���ֱ�ռ�д洢�ռ䣬�����ͬһ���ඨ���˶������
���ж���ͬ����С�Ŀռ�������Ŷ�������е����ݳ�Ա�����ǲ�ͬ�Ķ���
������ͬһ��������Ŀ�����
��ô������ͬ����ĳ�Ա�����������ݳ�Աʱ����ô�ܱ�֤���õ�����ָ�������
��Ա��?

��ÿһ����Ա�����ж�������һ�������ָ�룬���ָ��������ǹ̶��ģ���Ϊthisָ��
����ָ��������ָ�룬����ֵ�ǵ�ǰ�����õĳ�Ա�������ڵĶ������ʼ��ַ

thisָ��ʽ��ʽʹ�õģ�������Ϊ���������ݸ���Ա�����ģ���Ϊһ�����صĲ���

��Ҫ�������ǣ���Щ���Ǳ������Զ�ʵ�ֵģ���д������˲�����Ϊ�����β�
������һ��thisָ�룬Ҳ���ý�����a�ĵ�ַ���ݸ�thisָ��
*/

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
//#include<string>
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


//class Date
//{
//	//�����������ĺ������������ʲô��û��
//	//������ʵ����6��Ĭ�ϵĳ�Ա����
//};


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