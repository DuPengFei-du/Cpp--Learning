//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	//��ȫȱʡ�Ĺ��캯��
//	Date(int year = 2020, int month = 5, int day = 5)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date(int,int ,int):" << this << endl;
//		//�����������һ������
//		//ͨ����ӡthis���Կ����ҵ�ǰ���������һ������
//		//��ӡthis����������ڹ���Ķ���ĵ�ַ��ӡ����
//	}
//
//	//��������
//	//������������˵����û������������ʵ��������ν��
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
//	//���������͵�����
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date&d):" << this << endl;
//	}
//	//����ǰ������������ĸ�����
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


//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
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
//	// 	Date(const Date& d)
//	// 	{
//	// 		_year = d._year;
//	// 		_month = d._month;
//	// 		_day = d._day;
//	// 		cout << "Date(Date&):" << this << endl;
//	// 	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//void TestDate()
//{
//	Date d1(2020, 5, 5);
//	Date d2(d1);
//
//	Date d3(2019, 5, 5);   //����ϣ��d3�����ݸ��ɺ�d1������һ���ģ��������������ʱ���������
//	//�����������ø�ֵ����d1�е����ݸ�ֵ��d3
//	//ͨ�����Կ�������û���κε�����
//	d3 = d1;
//}
//
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


//�������ݵı���

/*
C++ϵͳ��Ȼ��ȡ�˲�����Ч�Ĵ�ʩ������˵����һ��private�������Ӷ��������ݵ�
��ȫ�ԣ�������Щ���������ǹ���ģ�����ʵ�κ��βΣ����������ã����ݼ���
ָ��ȣ����ǿ����ڲ�ͬ�ĳ���ͨ����ͬ��;������ͬһ�����ݶ���
��ʱ������֮�е���������ܻ�ı��й����ݵ�״������������������ϣ�����ֵ�

��ô����Ҫʹ����������һ���ķ�Χ�ڹ�����Ҫ��֤�����ᱻ
������޸ģ���ô��ʱ�����ǾͿ��԰��йص����ݶ�Ϊ����
*/


//������

/*
�����ڶ�������Ǽ��Ϲؼ���const��ָ������Ϊ������
���������Ҫ�г�ʼֵ������˵
*/
Time const t1(12, 34, 46);
//��������t1�����������У�����t1���������ݳ�Ա��ֵ�������Ա��ı�
//����ϣ�����ݳ�Ա�����ı�Ķ��󣬿�������Ϊ������
//���峣�����һ����ʽΪ��
//���� const ������ ʵ�α�
//Ҳ���԰�constд�������
//const ���� ������ 
//�����ǵȼ۵�
//�ڶ�������ʱ�����ͬʱ�������г�ʼ���Ĳ�������Ϊ֮��Ͳ����ٸı���


//˵����
/*
���һ����������Ϊ��������ͨ���������֮���������ĳ���Ա�����������ܵ�������������ͨ��Ա����
������ϵͳ�Զ����õ���ʽ���캯������������

��ô����Ϊ�˷�ֹ��ͨ��Ա����ȥ�޸ĳ������Ա�����е�ֵ
*/