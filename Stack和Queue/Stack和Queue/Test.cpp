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
//		cout << "栈已经空了" << endl;
//	}
//	else
//	{
//		cout << "栈中还存在有元素" << endl;
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
//		cout << "栈已经空了" << endl;
//	}
//	else
//	{
//		cout << "栈中还存在有元素" << endl;
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

//首先针对内置类型的元素
void TestPriorityQueue1()
{ 
	//如果你现在就是要去创建大堆的话，那么你对下面的这句话完全可以不用去进行任何修改的操作
	//那么我如何去验证优先级队列他其实就是一个大堆呢？
	//很好理解，我们可以给这个堆中去随机的插入一些元素，然后看一看结果就ok了
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
	cout << p.top() << endl;   //top只是将元素获取到了，并没有将元素进行删除的操作

	p.pop();
	p.pop();

	cout << p.size() << endl;
	cout << p.top() << endl;   //top只是将元素获取到了，并没有将元素进行删除的操作

	//如果你现在希望去创建一个小堆的话，你只需要把比较的方式给出来就可以了
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
	//cout << p.top() << endl;   //top只是将元素获取到了，并没有将元素进行删除的操作

	//p.pop();
	//p.pop();

	//cout << p.size() << endl;
	//cout << p.top() << endl;   //top只是将元素获取到了，并没有将元素进行删除的操作
}

//
////看完了内置类型，在来看一下自定义类型
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
//	//	//我们在这里给出一个简单的操作，就只是去比较天数的大小
//	//	//从而来确定两个日期的大小
//	//	return _day < d._day;
//	//}
//
//	bool operator>(const Date& d)const
//	{
//		//我们在这里给出一个简单的操作，就只是去比较天数的大小
//		//从而来确定两个日期的大小
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
//	//但是采用这种方式的话，有一个问题，就是，如果类变成私有的话
//	//那么这种方式其实就是不能再继续去进行使用了
//	return left._day < right._day;
//	//使用这种方式传递过去函数指针其实就是可以的
//}
//
////定义一个函数指针出来
//typedef bool (*Less)(const Date& left, const Date& right);
//
//class Greater
//{
//public:
//	bool operator()(const Date& left, const Date& right)
//	{
//		//我们按照大于的方式来进行比较
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
//	//然后我现在去创建一个Greater类型的对象
//	Greater gt;
//	//这个时候gt并不是一个函数，所以如果直接这样调用的话，代码显然是会出现错误的
//	//如果希望向下面这样写的话，首先需要保证gt是一个对象，我们才可以像这样子来进行调用的操作
//	//那么如果你现在就非要像这样进行调用的话
//	//那么你首先需要确保gt是一个函数才可以
//	//那么，我们只需要去在greater类中对()这种操作符进行重载的操作其实就是可以的了
//	//gt.operator()(d1, d2);    //通过对象去调用重载的操作
//
//	gt(d1, d2); //gt本质上是一个对象，但是他使用的方式和函数的方式是相同的，所以说把这种类型的对象称为函数对象
//	//也可以将其称为仿函数
//	if (gt(d1, d2))   //如果d1大于d2的话
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