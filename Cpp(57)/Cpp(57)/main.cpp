#define _CRT_SECURE_NO_WARNINGS 1



C����
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
class Student
{
public:
	void SetDate(const char name[], int age, const char gender[])
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}
	void DisPlay()
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

	s1.SetDate("lisi", 20, "nv");

	s1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	void SetDate(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private :
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;

	d1.SetDate(22020, 11, 1);

	d1.DisPlay();

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


class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
// ������Ҫָ��PrintPersonInfo������Person�������
void Person::PrintPersonInfo()
{
	cout << _name << " "_gender << " " << _age << endl;
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


class Student
{
public:
	//this:  Student* const   ����thisָ������ͣ���Ȼthisָ��������ǿ����޸ĵģ�����this�����ǲ����Ա��޸ĵ�
	void InitStudent(char* _name, int age, char* gender)
	{
		//this = nullptr;
		strcpy(this->_name, _name);
		_age = age;
		strcpy(_gender, gender);
	}

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
	s1.InitStudent("Peter", 35, "��");
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "Ů");
	s2.PrintStudnet();
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


class Date
{
	//�����������ĺ������������ʲô��û��
	//������ʵ����6��Ĭ�ϵĳ�Ա����
};


#include<iostream>
using namespace std;
class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;

	d1.SetDate(2020, 11, 2);

	d1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2, d3;

	d1.InitDate(2020, 4, 30);
	d1.PrintDate();

	d2.InitDate(2020, 4, 29);
	d2.PrintDate();

	d3.InitDate(2020, 4, 28);
	d3.PrintDate();
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020,11,2);

	d1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	//�޲εĹ��캯��
	//Date()   //���캯��  ��û�з���ֵ
	//{
	//	cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
	//	//�Ѷ���ĵ�ַ��ӡ����
	//}
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	//���������ɵĹ��캯����Ĭ�ϵĹ��캯��
	//Ĭ�ϵĹ��캯��һ�����޲ҵ�
	//���˵���û����幹�캯���ˣ��������Ͳ������ɵ�
	//������ʱ���ٴ���һ���������������Ķ���Ļ�
	//��һ���ǲ��ᴴ���ɹ���
	return 0;
}


�޲εĹ��캯����ȫȱʡ�Ĺ��캯��������Ĭ�ϵĹ��캯��
һ����ֻ����һ��Ĭ�ϵĹ��캯��
#include<iostream>
using namespace std;
class Date
{
public:
	//ȫȱʡ�Ĺ��캯��
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
}


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
//û�н�����Դ���ͷţ��ᵼ���ڴ�й©������


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


class Date
{
	//�����������ĺ������������ʲô��û��
	//������ʵ����6��Ĭ�ϵĳ�Ա����
};


#include<iostream>
using namespace std;
class Date
{
public:
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2, d3;

	d1.InitDate(2020, 4, 30);
	d1.PrintDate();

	d2.InitDate(2020, 4, 29);
	d2.PrintDate();

	d3.InitDate(2020, 4, 28);
	d3.PrintDate();
}


#include<iostream>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void DisPlay()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 11, 3);

	d1.DisPlay();

	return 0;
}


#include<iostream>
using namespace std;
class Date
{
public:
	//�޲εĹ��캯��
	Date()   //���캯��  ��û�з���ֵ
	{
		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
		//�Ѷ���ĵ�ַ��ӡ����
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2, d3;
	Date d4(2020, 4, 27);
	Date d5();
	//�����Ǵ�����һ������
	//����һ�������������൱��������һ����������
	//Ϊd5�ĺ�������������ķ���ֵ������Date���ͣ�û�в���


	d1.InitDate(2020, 4, 30);
	d1.PrintDate();

	d2.InitDate(2020, 4, 29);
	d2.PrintDate();

	d3.InitDate(2020, 4, 28);
	d3.PrintDate();

	d4.PrintDate();

}


#include<iostream>
using namespace std;
class Date
{
public:
	//�޲εĹ��캯��
	Date()   //���캯��  ��û�з���ֵ
	{
		cout << "Date()" << this << endl;   //��ӡthis��Ϊ�˿���ǰ���������һ������
		//�Ѷ���ĵ�ַ��ӡ����
	}

	//ȫȱʡ�Ĺ��캯��
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯���γ�������

	//�����������󣬱������ͻ���ü��ι��캫��
	void InitDate(int year, int month, int day)   //���г�ʼ���Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void PrintDate()   //��ӡ���м��
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
}


#include<iostream>
using namespace std;
class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// ��������(��������)
	int _year;
	int _month;
	int _day;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d;
	return 0;
}