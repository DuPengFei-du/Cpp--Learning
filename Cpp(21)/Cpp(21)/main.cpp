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
//�������b��c�Ľ������10


//#include<iostream>
//#include<string>
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