#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//using namespace std;
//void Test(int a = 10)   //������һ��Ĭ��ֵ���ô��������������治�ô�����
////����û��ٵ��ú�����ͬʱ�����˴��β�������ôʹ�õľ����û�������ȥ�Ĳ���
//{
//	cout << a << endl;
//}
//int main()
//{
//	Test();
//	Test(100);
//	return 0;
//}


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


//#include<iostream>
//using namespace std;
//#define MAX(a,b) (((a)>(b))?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << MAX(a, b) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
//	auto b = 12.34;   //�ǽ������Ǹ�����
//	auto c = a + b;   //�������Լ�ȥ���
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
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
//		cout << _year << "/" << _month << "/"<<_day << endl;
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
//	d1.SetData(2020, 1, 1);
//
//	d1.DisPlay();
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


//// Date* p = &d2;
//const Date* operator&()const    //��ε�һ��constû�мӵĻ��������ǲ���ͨ�����
//{
//	return this;
//	//��ΪҪ���ص���ָ�룬����������ص�ֻ�������͵�ָ��Ļ��ǲ����Եģ���Ϊthisָ����const���͵�
//	//���Է���ֵ��ǰ��ҲҪ����const�ſ���
//}
//int main()
//{
//	Date d1(2019, 3, 24);
//	const Date d2(2019, 3, 25); // ������d2�е����ݲ������޸�
//	cout << &d2 << endl;
//	//d2.TestFunc1();  // TestFunc1��Ա��������ͨ�ĳ�Ա�������ں����п����޸ĵ�ǰ����ĳ�Ա
//	d1.TestFunc1();
//	d1.TestFunc2();
//	return 0;
//}


//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&()const
//	{
//		return this;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};


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
//	Test(int t = 20)
//		: _t(t)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _t;
//};
//int main()
//{
//	//ע��:ptָ��Ŀռ䲢����һ��test���͵Ķ���
//	//��Ϊmalloc�����ǲ�����ù��캯����
//	//����û�д�����������
//	//�����Ҫ��ptָ��Ŀռ���Test���͵Ķ���Ļ�
//	//ֻ��Ҫ�ڸÿռ���ִ�й��캯����ɳ�ʼ���Ĳ���
//	//��ô��Ҫ������ֲ����Ļ�������Ҫʹ�ö�λnew��
//	Test* pt = (Test*)malloc(sizeof(Test));
//
//	new(pt) Test;
//	//�����������֮�����һ�������Ķ���
//	//��Ȼ��������캯���в����Ļ�����Ҳ���԰ѹ��캯���Ĳ�������
//	//���������������
//	//new(pt) Test��100);
//
//	//��Ȼ�Ѿ���һ�������ˣ�����֮��ǵ��ͷŵ�
//	delete pt;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.0, 2.0);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T1,typename T2>
//T1 Add(T1 x, T2 y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1, 2.0);
//	return 0;
//}


//#include<iostream>
//using namespace std;
////����ģ��
////�û���һ����«����������ư
//#include<stdio.h>
//template<typename T>    //ģ������б�
//T Add(T x, T y)         //�����б�
//{
//	return x + y;
//}
////������������Ҫ���߱�������������һ��ʲô����
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	return 0;
//}


//#include<iostream>
//using namespace std;
////����ģ��
////�û���һ����«����������ư
//#include<stdio.h>
//template<typename T>    //ģ������б�
//T Add(T x, T y)         //�����б�
//{
//	return x + y;
//}
////������������Ҫ���߱�������������һ��ʲô����
//int main()
//{
//	Add(1, 2);
//
//	Add(1.0, 2.0);
//
//	return 0;
//}


////Ϊ����˳����п��Դ洢�������͵�Ԫ��
//template<class T>
////�������仰����˵����T�Ǵ�����һ�����͵�
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		capacity = capacity < 10 ? 10 : capacity;
//		array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void PushBack(const T& data);   //���԰�������������ж���
//
//	~SeqList()
//	{
//		if (array)
//		{
//			delete[] array;
//			array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	//int* array;
//	//�����ʱ�����ǰ�int����T֮�󣬾Ϳ��Դ洢�������͵�������
//	T* array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
////�����������ж���Ļ�����ʵ����T��û�б�ʶ���
////�����ҪT��ʶ��Ļ�����Ҫ�ٸ���һ��ģ��
////���ȣ���Ҫ�ٺ������Ƶ�ǰ������������
//template<class T>
//
//void SeqList<T>::PushBack(const T& data)
//{
//	//Ҫ����Ԫ�ز����ʱ��������Ҫ���һ���Ƿ���Ҫ����
//	_CheckCapacity();
//
//	array[_size] = data;
//
//	size++;
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString1()
//{
//	string s1;   //������һ���յ��ַ���
//
//	string s2("hello world");    //���Բ���C���Ը�ʽ���ַ��������й���
//	//ֻ��Ҫ��һ��char * �Ĳ�����ʵ���ǿ��Ե�
//
//	string s3(10, '$');   //���ַ����������10��$�ķ���
//
//	string s4(s2);    //���ÿ������캯��
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}
//
//int main()
//{
//	TestString1();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//
//	cin >> s1;
//
//	cout << s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString2()
//{
//	string s1("little bit,huge dream!!!");
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	//����������Ľ����һ��һ����
//
//	cout << s1.capacity() << endl;
//
//	if (s1.empty())
//		cout << "���ַ���" << endl;
//	else
//		cout << "���ǿ��ַ���" << endl;
//
//	s1.clear();
//
//	if (s1.empty())
//		cout << "���ַ���" << endl;
//	else
//		cout << "���ǿ��ַ���" << endl;
//}
//int main()
//{
//	TestString2();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(40);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(50);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(40);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//�������5���ַ���!�������
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//�������5���ַ���!�������
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(20, '$');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(40, '&');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString5()
//{
//	string s1("hello");
//	cout << s1[0] << endl;
//	s1[0] = 'H';
//	cout << s1 << endl;
//
//	//���s1�е���ĸ���Ǵ�д����ô���ǾͰ����ĳɴ�д
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= 'a' && s1[i] <= 'z')
//		{
//			s1[i] -= 32;
//		}
//	}
//	//ʹ�õ��������д�ӡ�Ĳ���
//	//�����������俴��һ��ָ����ʹ��
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	cout << endl;
//
//	//����ʹ�õ������ķ�ʽ���д�ӡ�����ǻ�����ʹ�û��ڷ�Χ��forѭ�������д�ӡ�Ĳ���
//	//string�������һ����Χȷ��������
//	//���Կ���֧�ַ�Χfor
//	for (auto c : s1)
//	{
//		cout << c << endl;
//	}
//}
//int main()
//{
//	TestString5();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString6()
//{
//	string s1("hello");
//	cout << s1[0] << endl;
//	s1[0] = 'H';
//	cout << s1 << endl;
//
//	//���s1�е���ĸ���Ǵ�д����ô���ǾͰ����ĳɴ�д
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= 'a' && s1[i] <= 'z')
//		{
//			s1[i] -= 32;
//		}
//	}
//	//ʹ�õ��������д�ӡ�Ĳ���
//	//�����������俴��һ��ָ����ʹ��
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	cout << endl;
//
//	//����ʹ�õ������ķ�ʽ���д�ӡ�����ǻ�����ʹ�û��ڷ�Χ��forѭ�������д�ӡ�Ĳ���
//	//string�������һ����Χȷ��������
//	//���Կ���֧�ַ�Χfor
//	for (auto c : s1)
//	{
//		cout << c << endl;
//	}
//
//	const string s2("world");  //��ô����Ļ�����ʵ���Ѿ�������s2�ֵ������ǲ����Ա��޸ĵ�
//
//	s2[0] = 'W';
//}
//int main()
//{
//	TestString6();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString7()
//{
//	string s;
//
//	s.push_back('I');
//
//	s.append(" ");
//
//	string ss("Love");
//
//	s.append(ss);
//
//	s += " ";
//
//	s += "China";
//
//	cout << s << endl;
//}
//int main()
//{
//	TestString7();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	string s3(10, 'c');
//
//	string s4(s2);
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//void TestString1()
//{
//	int a1;
//	int a2 = 10;
//	int a3(a2);
//
//	string s1;   //������һ���յ��ַ���
//
//	string s2("hello world");    //���Բ���C���Ը�ʽ���ַ��������й���
//	//ֻ��Ҫ��һ��char * �Ĳ�����ʵ���ǿ��Ե�
//
//	string s3(10, '$');   //���ַ����������10��$�ķ���
//
//	string s4(s2);    //���ÿ������캯��
//
//	string s5 = "hello world";
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString2()
//{
//	string s1("little bit,huge dream!!!");
//
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	//����������Ľ����һ��һ����
//
//	cout << s1.capacity() << endl;
//
//	if (s1.empty())
//		cout << "���ַ���" << endl;
//	else
//		cout << "���ǿ��ַ���" << endl;
//
//	s1.clear();
//
//	if (s1.empty())
//		cout << "���ַ���" << endl;
//	else
//		cout << "���ǿ��ַ���" << endl;
//}
//int main()
//{
//	TestString2();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	TestString3();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//�������5���ַ���!�������
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//void TestString4()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//�������5���ַ���!�������
//	s.resize(10, '!');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(20, '$');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(40, '&');
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestString4();
//
//	return 0;
//}


////ģ��ʵ��string��
//#include<iostream>
//#include<string>
//namespace bite
//{
//	class string
//	{
//		//Ϊ�˷�ֹ�ͱ�ע���е����������ͻ�����ǲ���bite�����ռ�
//	public:
//		//���ȸ���string��Ĺ���
//		/*string()
//		{
//
//		}
//
//		string(const char* str)
//		{
//			if (str == "")
//				_str = nullptr;
//		}*/
//
//		//��������ַ�ʽ�ǿ��Ժϲ���
//		string(const char* str = "")
//		{
//			if (str == nullptr)
//				//���Ǿ�ȥ����һ���յ��ַ���
//				//Ҳ��һ����Ч���ַ�����ֻ�������ַ�����ֻ����һ��\0
//			{
//				_str = new char[1];
//				*_str = '\0';
//			}
//			else
//			{
//				//������ݹ����Ķ������ǿ��ַ����Ļ�
//				_str = new char[strlen(str) + 1];
//				strcpy(_str, str);
//			}
//		}
//
//		////��Ȼ,���м򵥵Ĺ��췽ʽ
//		//string(const char* str)
//		//{
//		//	if (nullptr == str)
//		//	{
//		//		str = "";
//		//	}
//		//	_str = new char[strlen(str) + 1];
//		//	strcpy(_str, str);
//		//}
//
//		//��������
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//			}
//		}
//
//		//�����������캯��
//		string(const string& s)
//			:_str(new char[strlen(s._str)+1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		//��ֵ���������
//
//
//	private:
//		//Ҫʵ��string�࣬������Ҫ����һ��ָ�룬ָ������Ҫ����ַ�������һ��ռ�
//		char* _str;
//	};
//
//}
//
//void TestString()
//{
//	bite::string s1; //����һ���յ��ַ���
//	bite::string s2("hello");
//	bite::string s3(s2);
//
//}
//
//int main()
//{
//	TestString();
//
//	return 0;
//}


//ģ��ʵ��string��
#include<iostream>
namespace bite
{
	class string
	{
	public:
		//���ȸ������캯��
		string(const char* str)
		{
			if (str == nullptr)
			{
				//ȥ����һ���յ��ַ���
				_str = new char[1];
				*_str = '\0';
			}
			else
			{
				//����ȥ�����ڴ�ռ�
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//��������
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		//�������캯��
		string(const string& s)
			//��_str���¿����ڴ�ռ�
			:
		{

		}
	private:
		//ģ��ʵ��string��
		char* _str;
	};
}