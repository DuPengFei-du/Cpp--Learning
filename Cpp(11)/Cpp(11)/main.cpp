#define _CRT_SECURE_NO_WARNINGS 1


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


//void TestFunc()
//{}
//void TestFunc(int a = 0)
//{}
//int main()
//{
//	TestFunc(10);  //�ǿ���ͨ������ģ������������ĸ�����
//	TestFunc();    //�ǲ���ͨ�������
//	�����غ����ĵ��ò���ȷ����һ�����Ե��ã��ڶ���Ҳ���Ե���
//	return 0;
//}


//short Add(short left, short right)
//{
//	return left + right;
//}
//int Add(short left, short right)
//{
//	return left + right;
//}


//������ʵ���������ʱ��
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
	cout << t1.hour << ":"<<t1.minute << ":"<< t1.sec << endl;
	return 0;
}


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
//��������������
/*
��������������׶��ģ��������������жԲ�ͬ�Ķ���һһд���йصĲ�����ʹ�ó����߳�
�����10��������ô���������ж೤�أ������ή�ͳ����������ʹ���Ķ�����
Ϊ�˽������������ʹ�ù������������������
*/