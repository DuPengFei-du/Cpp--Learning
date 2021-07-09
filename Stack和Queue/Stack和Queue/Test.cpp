//#include<stack>
//#include<queue>
#include<iostream>
using namespace std;

#if 0
//void TestStack()
//{
//	stack<int> s;
//
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//
//	cout << s.size() << endl;
//	cout << s.top() << endl;
//
//	s.pop();
//	s.pop();
//
//	cout << s.size() << endl;
//	cout << s.top() << endl;
//
//	if (s.empty())
//	{
//		cout << "ջ�Ѿ�����" << endl;
//	}
//	else
//	{
//		cout << "ջ�л�������Ԫ��" << endl;
//	}
//}



//#include"Stack.h"
//void TestStack2()
//{
//	bite::stack<int> s;
//
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//
//	cout << s.size() << endl;
//	cout << s.top() << endl;
//
//	s.pop();
//	s.pop();
//
//	cout << s.size() << endl;
//	cout << s.top() << endl;
//
//	if (s.empty())
//	{
//		cout << "ջ�Ѿ�����" << endl;
//	}
//	else
//	{
//		cout << "ջ�л�������Ԫ��" << endl;
//	}
//}


void TestQueue()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;

	q.pop();
	q.pop();

	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;

}

#include"Queue.h"
void TestQueue2()
{
	bite::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;

	q.pop();
	q.pop();

	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;

}

int main()
{
	TestQueue();

	TestQueue2();

	return 0;
}
#endif



#include<queue>
#include<functional>

//��������������͵�Ԫ��
void TestPriorityQueue1()
{ 
	//��������ھ���Ҫȥ������ѵĻ�����ô����������仰��ȫ���Բ���ȥ�����κ��޸ĵĲ���
	//��ô�����ȥ��֤���ȼ���������ʵ����һ������أ�
	//�ܺ���⣬���ǿ��Ը��������ȥ����Ĳ���һЩԪ�أ�Ȼ��һ�������ok��
	priority_queue<int> p;

	p.push(4);
	p.push(2);
	p.push(9);
	p.push(7);
	p.push(1);
	p.push(8);
	p.push(3);
	p.push(0);
	p.push(2);
	p.push(6);

	cout << p.size() << endl;
	cout << p.top() << endl;   //topֻ�ǽ�Ԫ�ػ�ȡ���ˣ���û�н�Ԫ�ؽ���ɾ���Ĳ���

	p.pop();
	p.pop();

	cout << p.size() << endl;
	cout << p.top() << endl;   //topֻ�ǽ�Ԫ�ػ�ȡ���ˣ���û�н�Ԫ�ؽ���ɾ���Ĳ���

	//���������ϣ��ȥ����һ��С�ѵĻ�����ֻ��Ҫ�ѱȽϵķ�ʽ�������Ϳ�����
	//priority_queue<int,vector<int>,greater<int>> p;

	//p.push(4);
	//p.push(2);
	//p.push(9);
	//p.push(7);
	//p.push(1);
	//p.push(8);
	//p.push(3);
	//p.push(0);
	//p.push(2);
	//p.push(6);

	//cout << p.size() << endl;
	//cout << p.top() << endl;   //topֻ�ǽ�Ԫ�ػ�ȡ���ˣ���û�н�Ԫ�ؽ���ɾ���Ĳ���

	//p.pop();
	//p.pop();

	//cout << p.size() << endl;
	//cout << p.top() << endl;   //topֻ�ǽ�Ԫ�ػ�ȡ���ˣ���û�н�Ԫ�ؽ���ɾ���Ĳ���
}

//
////�������������ͣ�������һ���Զ�������
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//
//	//bool operator<(const Date& d)const
//	//{
//	//	//�������������һ���򵥵Ĳ�������ֻ��ȥ�Ƚ������Ĵ�С
//	//	//�Ӷ���ȷ���������ڵĴ�С
//	//	return _day < d._day;
//	//}
//
//	bool operator>(const Date& d)const
//	{
//		//�������������һ���򵥵Ĳ�������ֻ��ȥ�Ƚ������Ĵ�С
//		//�Ӷ���ȷ���������ڵĴ�С
//		return _day > d._day;
//	}
//	friend bool IsLess(const Date& left, const Date& right);
//
//	int GetDay()const
//	{
//		return _day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool IsLess(const Date& left, const Date& right)
//{
//	//���ǲ������ַ�ʽ�Ļ�����һ�����⣬���ǣ��������˽�еĻ�
//	//��ô���ַ�ʽ��ʵ���ǲ����ټ���ȥ����ʹ����
//	return left._day < right._day;
//	//ʹ�����ַ�ʽ���ݹ�ȥ����ָ����ʵ���ǿ��Ե�
//}
//
////����һ������ָ�����
//typedef bool (*Less)(const Date& left, const Date& right);
//
//class Greater
//{
//public:
//	bool operator()(const Date& left, const Date& right)
//	{
//		//���ǰ��մ��ڵķ�ʽ�����бȽ�
//		return left.GetDay() > right.GetDay();
//	}
//};
//
//
//void TestPriorityQueue3()
//{
//	Date d1(2020, 5, 28);
//	Date d2(2020, 5, 27);
//	Date d3(2020, 5, 29);
//
//	//Ȼ��������ȥ����һ��Greater���͵Ķ���
//	Greater gt;
//	//���ʱ��gt������һ���������������ֱ���������õĻ���������Ȼ�ǻ���ִ����
//	//���ϣ������������д�Ļ���������Ҫ��֤gt��һ���������ǲſ����������������е��õĲ���
//	//��ô��������ھͷ�Ҫ���������е��õĻ�
//	//��ô��������Ҫȷ��gt��һ�������ſ���
//	//��ô������ֻ��Ҫȥ��greater���ж�()���ֲ������������صĲ�����ʵ���ǿ��Ե���
//	//gt.operator()(d1, d2);    //ͨ������ȥ�������صĲ���
//
//	gt(d1, d2); //gt��������һ�����󣬵�����ʹ�õķ�ʽ�ͺ����ķ�ʽ����ͬ�ģ�����˵���������͵Ķ����Ϊ��������
//	//Ҳ���Խ����Ϊ�º���
//	if (gt(d1, d2))   //���d1����d2�Ļ�
//	{
//		cout << "d1>d2" << endl;
//	}
//	else
//	{
//		cout << "d1<=d2" << endl;
//	}
//
//	priority_queue<Date,vector<Date>, Less>p1(IsLess);
//
//	p1.push(d1);
//	p1.push(d2);
//	p1.push(d3);
//
//}


//#include"Priority_Queue.h"
//
//void TestBitePriority_Queue()
//{
//	bite::priority_queue<int> q;
//
//	q.push(4);
//	q.push(2);
//	q.push(9);
//	q.push(7);
//	q.push(1);
//	q.push(8);
//	q.push(3);
//	q.push(0);
//	q.push(2);
//	q.push(6);
//
//	cout << q.size() << endl;
//	cout << q.top() << endl;
//
//	q.pop();
//	q.pop();
//
//	cout << q.size() << endl;
//	cout << q.top() << endl;
//
//
//}

int main()
{

	return 0;
}