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


//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//	stack <int>v;
//	int n, d;
//	cout << "��������Ҫת����ʮ������:";
//	cin >> n;
//	cout << "���������Ŀ�������:";
//	cin >> d;
//	while (n)
//	{
//		v.push(n % d);
//		n = n / d;
//	}
//	while (!v.empty())
//	{
//		cout << v.top();
//		v.pop();///pop�ķ���ֵ����Ϊ��
//	}
//	return 0;
//}


//#include<iostream>
//
////�����ռ䲻�����ͣ���һ��������
////C��������ȫ��������;ֲ�������
////���������ռ��൱���Ƕ�����һ���µ�������
//namespace N1
//{
//	//���Զ��������Ҳ���Զ��庯��
//	int a = 1;
//	int b = 2;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//int a = 20;  //��ô�������Ҫ��ӡȫ���������е�a�Ļ�����Ҫ��ô��ӡ��
////printf("%d\n", ::a); 
//
//int main()
//{
//	int a = 30;
//	printf("%d\n", a);  //�����ʱ�����printf������ӡ�Ŀ϶����������е�a
//	printf("%d\n", ::a);  //::Ϊ�������޶����������һ������ǰ��
//	//������::�ʹ��������ڷ��ʵ���ȫ���������еı���
//	printf("%d\n", N1::a);
//	//���������ռ��a��ֻ��Ҫ���������޶�����ǰ����������ռ�����ƾͿ�����
//	return 0;
//}
////����a�ֱ�����������ͬ�����������Ա��������ǲ������κ������
////��ô����ʲô����»���������ģ�
////������ͬһ�������ռ�����������ͬ�ı�����ʱ�����ʱ�����������


//namespace N2
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//	//�����ռ仹����Ƕ��
//	namespace N3
//	{
//		int a = 10;
//		int b = 20;
//		int Mul(int left, int right)
//		{
//			return left * right;
//		}
//	}
//}
//printf("%d\n", N2::N3::a);  //���������н��е���


//using N::b;  //�൱����ȫ�ֱ�����������ʱ���ٶ���һ��int b; ��ô�ͻ������
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//}
////�ŵ���ʹ�÷��㣬ȱ�������������ͻ(������ʾ��int b);
////�����ͻ�ˣ�Ҳ�ܺý�����ٱ�����ǰ��������ռ�������ټ��ϾͿ����ˡ�


//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}
////ʹ�÷��㣬���ǳ�ͻ�ͻ��


//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
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


//int main()
//{
//	int a = 10;
//	//int& ra;  //�������޷�ͨ������ģ���Ϊ�������͵ı���û�н��г�ʼ������
//	//�����ǲ��е�
//	int& ra = a;
//	//ra��a�ı�����Ҳ����˵��ra��a��ͬһ������
//	//��ο���ra��a��һ����������ӡ���ǵĵ�ַ���Ϳ�����
//	cout << &ra << " " << &a << " " << endl;
//	//����ӡ�ĵ�ַ��һ����
//	//��ô�����Ǹ�ra���и�ֵ�Ļ���a��ֵҲ�ᷢ���ı�
//	ra = 20;
//	cout << a << endl;  //��ӡ��a��ֵҲΪ20
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int b = 20;
//	ra = b;  //�������õĲ����������ٽ��и�ֵ�Ĳ���
//	//��������rbȥ���������ı�����
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


//int& Add(int left, int right)  //�������õķ�ʽ����
//{
//	int ret = left + right;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& retVal = Add(a, b);
//	Add(100, 200);   //������˵����һ����û�з���ֵ������
//	//����ͨ���������������Կ���retVal��ֵ����Ǳ��300��
//	//ԭ������retVal��ret�ı�����һֱ�ǿռ�ı������ռ�û�з����仯������
//	//�൱�����Զ��仯��
//	return 0;
//}
////����ʵ���ϣ���һ�δ�����������ģ�ret���˺�����������ֻ�ᣬ�ͻ�ѿռ�黹������ϵͳ�ˣ���ôretValue��������ret�����൱������������Ч�Ŀռ�


//int main()
//{
//	const int a = 10;
//	//int array[a];
//	int* pa = (int*)& a;
//
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
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
//using namespace std;
//int main()
//{
//	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
//	auto b = 12.34;   ////�ǽ������Ǹ�����
//	auto c = a + b;   //�������Լ�ȥ���
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}


//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//	for (auto e : array)
//	{
//		cout << e << endl;
//	}
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