//��Ͷ���ļ�Ӧ�þ���

//������ʵ����������ļ�Ӧ�þ���
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;
	return 0;
}

/*
����һ����򵥵����ӣ���ΪTime��ֻ�����ݳ�Ա�������Ǳ�����ɹ��еģ����
�������������Щ��Ա���в�����t1������ΪTime�Ķ���
������������t1��������ݳ�Ա�����û�ָ����ʱ�򣬷֣����ֵ���Ӷ�������
��Ϊ�����������ö���t1�����ݳ�Աhour��minute��sec��
��˲�����ǰ��ָ��������t1
��Ҫ�Ѷ�������дΪ����
��Ϊ����һ�ֳ�����������ͣ�������һ��ʵ�壬Ҳ��ռ���ڴ�ռ�
ֻ���ڶ�������ʱ�򣬲��ܷ���洢�ռ�
*/


//���������е�Time�ඨ��������󣬷ֱ����������������е�ʱ��
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;

	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;

	Time t2;

	cin >> t2.hour;
	cin >> t2.minute;
	cin >> t2.sec;
	cout << t2.hour << ":" << t2.minute << ":" << t2.sec << endl;
	return 0;
}
/*
��������������׶��ģ��������������жԲ�ͬ����һһд���йز�����ʹ�ó����߳�
�����10��������ô�������ͻ�ܳ��ˣ������ή�ͳ���������ȣ�Ϊ�˽���������
����ʹ�ú���������������
*/


#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	void set_time(Time&);     //��������
	void show_time(Time&);    //��������

	Time t1;
	set_time(t1);
	show_time(t1);

	Time t2;
	set_time(t2);
	show_time(t2);

	return 0;
}


void set_time(Time& t)        //�β�t�����ñ���
{
	cin >> t.hour;   //�����趨��ʱ��
	cin >> t.minute;
	cin >> t.sec;
}

void show_time(Time& t)        //�β�t�����ñ���
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}

/*
�������β�t��Time����������t������t��t1ռ�õ���ͬһ���ڴ�ռ�
*/


#include<iostream>
using namespace std;
class Time
{
public:
	void set_time();
	void show_time();

private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;

	t1.set_time();
	t1.show_time();

	Time t2;

	t2.set_time();
	t2.show_time();

	return 0;
}


void Time::set_time()     //�β�t�����ñ���
{
	cin >> hour;   //�����趨��ʱ��
	cin >> minute;
	cin >> sec;
}

void Time::show_time()        //�β�t�����ñ���
{
	cout << hour << ":" << minute << ":" << sec << endl;
}


/*
���������е���������Ա������ʱ��Ӧ��ָ��������
�Ӷ����Ա�ʾ�����õ�����һ������ĳ�Ա����

�����ⶨ�庯����ʱ��Ӧ��֪�����������ĸ��������е�
�ڳ�Ա�������ñ���������ݳ�Ա�ǣ�ֻ��ֱ��д���ݳ�Ա���Ϳ�����

���ǳ���ģ������Ǿ���ģ������Ա������ʱ��Ӧ��ָ���������
��Ϊ������Ǹ����еĳ�Ա�����������ó�Ա������ʱ��Ӧ��ָ������Ķ�����
*/


//�ҳ�һ�����������е�Ԫ�ص����ֵ
#include<iostream>
using namespace std;
class Array_max
{
public:
	void set_value();
	void max_value();
	void show_value();
private:
	int array[10];
	int max;
};
void Array_max::set_value()
{
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
}

void Array_max::max_value()
{
	int i = 0;
	max = array[0];
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
}

void Array_max::show_value()
{
	cout << "max=" << max;
}

int main()
{
	Array_max arrmax;   //�������arrmax
	arrmax.set_value();
	arrmax.max_value();
	arrmax.show_value();
	return 0;
}


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


//#include<iostream>
//using namespace std;
//int main()
//{
//	//C�������ǲ����printf���������﷨����
//	//printf("%d %d %d", 10);    //�������ǲ��ᱨ���
//	//������ȫ����ͨ������ģ�ֻ�ǻ��о���
//	//���������ں�����������δ֪��
//	//ʹ��printf����һ����̫�õĵ����
//	//Ҫ���ʲô���͵����ݣ������ʽ���Ʒ�һ��Ҫ���ԣ�������Ҫ�����Լ�������
//	//Ҫ��ס�ܶ��ָ�ʽ�������׳���
//	//������C++������ʹ��cout
//	cout << "change world" << endl;
//	cout << 10 << " " << 12.34 << " " << 'a' << endl;
//	//�����ں�������Ķ�����������ʲô
//	return 0;
//}


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


//void TestFunc(int a = 20);
//
//void TestFunc(int a = 20)
//{
//
//}
////�����ӵĴ���ͻ����ԭ�������������λ��ͬʱ�����Ļ������ܻ���Ĳ�һ��
////���ܾͻ�˵�����ˣ�����������λ�û�ȽϺ�һЩ����Ϊ��ʱ����Ҫ�õ��������⣬Ҫ����������������ʹ�ã������������Ĳ����ĳ�ֵ��һ�����������ͻ���ң�ȱʡ����ֵֻ���ǳ�����ȫ�ֱ���
//int main()
//{
//	return 0;
//}


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////�����б�һ��
////����Ϊ��������
////���õ�ʱ�򣬵������ֵģ��������ֵ�
////�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
//	//c�����ǲ����������ĺ�����
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