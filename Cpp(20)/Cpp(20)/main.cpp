//����������������������

/*
��������Ҳ��һ������ĳ�Ա�������������ú͹��캯���෴��������������
�������ǰ�����һ��~���ţ���C++�У�~��λȡ����������������Ҳ���Կ���
���캯�����������������������෴�ĺ���
��������������ڽ�����ʱ�򣬻��Զ�������������
�������¼�����������Զ���������������
1.�����һ�������ж�����һ������(�������Զ��ֲ�����)��������������ý�����ʱ��
����Ӧ���ͷţ��ڶ����ͷ�ǰ�ͻ��Զ�ִ����������

2.��̬�ֲ������ں������ý���ʱ���󲢲��ͷţ����Ҳ���������������
ֻ��main�������������exit������������ʱ���ŵ���static�ֲ��������������

3.���������һ��ȫ�ֵĶ������ڳ��������뿪������ʱ�����ø�ȫ��
�Ķ������������

4.�����new�������̬�ؽ�����һ�����󣬵���delete������ͷ��������
��ʱ���ȵ��øö������������

*/


/*
�������������ò�����ɾ�����󣬶����ڳ�������ռ�õ��ڴ�֮ǰ���һЩ����Ĺ�����ʹ���ⲿ���ڴ����
�����������µĶ���ʹ��
ֻҪ������������ڽ������ͻ��Զ�ִ�����������������Щ����

���������������κ�ֵ��û�к������ͣ�Ҳû�к�����������Ϊ������û�в�����
�������������޷�������

һ��������ж�����캯��������ֻ����һ����������

����û�û���Լ�����������������ô���������Զ�����һ����������
����ֻ��ͽ���������������ƣ�ʵ����ʲô������������
����������������κι������������ڶ��������������ָ��
*/


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Student
//{
//public:
//	Student(int n, string nam, char s)   //�����в����Ĺ��캯��
//	{
//		num = n;
//		name = nam;
//		sex = s;
//	}
//	~Student()
//	{
//		cout << "��������������" << endl;
//	}
//	void display()
//	{
//		cout << "num=" << num << endl;
//		cout << "name=" << name << endl;
//		cout << "sex=" << sex << endl << endl;
//	}
//private:
//	int num;
//	char name[10];
//	char sex;
//};
//int main()
//{
//	return 0;
//}


//���ù��캯��������������˳��

/*
 ��ʹ�ù��캯��������������ʱ��
 ��Ҫ�ر�ע�����ǵĵ���ʱ��͵���˳��

 ��һ������£����캯�������������ĵ��ô����෴��Ҳ����˵
 ���ȱ����õĹ��캯����������Ӧ���������������ŵ��õģ���
 ��󱻵��õĹ��캯����������Ӧ�����������������ȱ�����
 Ҳ����˵
 �ȹ���ĺ������������������
*/


/*
���ǣ�Ҳ����˵��������¶��ǰ������ԭ�������д����
��ѧC��ʱ�������������ʹ洢���ĸ����Щ������ڶ���Ҳ��ͬ�����õ�
��������ڲ�ͬ���������ж��壬�����в�ͬ�Ĵ洢�����Щ��Ӱ�����
���캯��������������ʱ��
*/


//����һ����ʲôʱ����ù��캯������������


/*
1.�����ȫ�ַ�Χ�ж������(Ҳ����˵�����к�����Χ֮�ⶨ�����)
��ô���Ĺ��캯���ڱ��ļ�ģ���е����й�����(����main)����֮ǰ����
�������һ�������������ļ������ڲ�ͬ���ļ��ж�������ȫ�ֶ���
����Щ����Ĺ��캯��ִ��˳���ǲ�ȷ����
��main����ִ����ϻ��ߵ���exit����ʱ��ִ����������

2.���������Ǿֲ��Զ�����(�����ں����ж������)���ڽ��������ʱ
���ö���Ĺ��캯��������������ڵĺ�������ε��ã���ÿ�ν�������ʱ��
Ҫ���ù��캯��

3.����ں����ж��徲̬�ֲ���������ֻ�ڳ����һ�ε��ú���ʱ
ִ��һ�ι��캯�����ڵ��ú�������ʱ�Զ��󲢲��ͷţ����Ҳ���õ�����������
ֻ�е�main����ִ����ϻ��ߵ���exit����ʱ��ִ����������
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


//class Person
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
// ������Ҫָ��PrintPersonInfo������Person�������
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


/////*
////���¹��̣�
////1. ʶ������
////2. ʶ�����г�Ա����
////3. ʶ�����еĳ�Ա����&��д
////*/
////
////#if 0
////class Student
////{
////public:
////	/*
////	void InitStudent(Student* const this, char* name, int age, char* gender)
////	{    ��������Ա����������������ʵ���������ĸ������ģ���Ϊ����һ��thisָ��
////		strcpy(this->_name, name);
////		this->_age = age;
////		strcpy(this->_gender, gender);
////	}
////	*/
////	void InitStudent(char* _name, int age, char* gender);
////	 	{
////	 		strcpy(this->_name, _name);    �ڱ�������ʵ�ʵ�����
////	 		_age = age;  
////	 		strcpy(_gender, gender);
////	 	}
////
////	void TestFunc(...);
////	 	{
////	 	}
////
////		/*
////		 this�Ǳ������Լ�ά��(������������ά����)
////		void PrintStudnet(Student* const this)
////		{
////			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
////		}
////		*/
////	void PrintStudnet()
////	{
////		cout << _name << "-" << _age << "-" << _gender << endl;
////	}
////
////private:
////	char _name[20];
////	int _age;
////	char _gender[3];
////};
////int main()
////{
////	Student s1;
////	s1.TestFunc();
////	s1.TestFunc(10);
////	s1.TestFunc(10, 20);
////	 Student::InitStudent(&s1, "Peter", 35, "��")
////	s1.InitStudent("Peter", 35, "��");
////	 Student::PrintStudnet(&s1);
////	s1.PrintStudnet();
////
////	Student s2;
////	s2.InitStudent("jingjing", 36, "Ů");
////	s2.PrintStudnet();
////	return 0;
////}