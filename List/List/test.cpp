#include<iostream>
#include<list>
#include<vector>

using namespace std;


//void TestList1()
//{
//	//因为list中的元素是不支持随机访问的，所以我们不能使用下标的方式去访问了
//	//我们只能使用迭代器的方式对list中的元素进行打印的操作了
//
//	list<int> l1;
//
//	list<int> l2(10, 5); //给l2里面放置10个值为5的元素
//	list<int>::iterator it = l2.begin();
//	while (it != l2.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//
//	vector<int> v{ 1,2,3,4,5 };
//	list<int> l3(v.begin(), v.end());
//	//上面既然已经将list的迭代器给出了，那么我们就可以使用范围for的方式来进行
//	//打印的操作，这样子的话，会方便一些
//	for (auto e : l3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int array[] = { 1,2,3,4,5 };
//	list<int> l33(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto e : l33)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	list<int> l4(l3);
//	for (auto e : l4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	list<int> l5{ 1,2,3,4,5,6,7,8,9,0 };
//	for (auto e : l5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}


//void TestList2()
//{
//	list<int> L;
//
//	L.push_back(1);
//	L.push_back(2);
//	L.push_back(3);
//	L.push_back(4);
//	L.push_back(5);
//	L.push_back(6);
//
//	cout << L.size() << endl;
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	L.pop_back();
//	L.pop_back();
//
//	cout << L.size() << endl;
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	L.push_front(0);
//
//	cout << L.size() << endl;
//
//	cout << L.front() << endl;   //看一下第一个元素是什么
//	cout << L.back() << endl;   //看一下最后一个元素是什么
//
//	L.pop_front();
//
//	cout << L.size() << endl;
//
//	cout << L.front() << endl;   //看一下第一个元素是什么
//	cout << L.back() << endl;   //看一下最后一个元素是什么
//}


//void TestList3()
//{
//	list<int> L{ 1,2,3,4,5,6 };
//
//	L.assign(10, 5);
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int array[] = { 6,7,8 };
//
//	L.assign(array, array + sizeof(array) / sizeof(array[0]));
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//使用C++11提供的使用列表的方式来进行初始化的操作
//	L.assign({ 1,2,3,4,5,6,7,8,9,0 });
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}

//void TestList4()
//{
//	list<int> L{ 1,2,3,4,5,6 };
//	L.insert(L.begin(), 0);
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//如果说要在某一个元素的位置处去插入一个元素的话，首先你需要先找到这个元素
//	//所在的位置之后，然后才能去进行插入的操作
//
//	L.insert(find(L.begin(), L.end(), 3), 10, 5);
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//C++11中新增了列表方式的插入
//	L.insert(L.begin(), { 10,10,10,10 });
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v{ 7,8,9,0 };
//	L.insert(L.end(), v.begin(), v.end());
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//}

//void TestList5()
//{
//	list<int> L{ 1,2,3,4,5,6 };
//
//	L.erase(L.begin());
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//删除4以及4之后的元素
//	L.erase(find(L.begin(), L.end(), 4), L.end());
//
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	L.erase(L.begin(), L.end());
//}


//bool IsMod3(int data)
//{
//	return 0 == data % 3;
//}
//
//void TestList6()
//{
//	list<int> L1{ 1, 1, 3, 3, 6, 6, 2, 2, 5, 5, 4, 4, 0, 0, 9, 9, 7, 7, 8, 8 };
//	L1.unique();
//	for (auto e : L1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//L1的结果就是成功去重了， 因为重复性的元素连在一起
//
//	list<int> L2{ 1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0 };
//	L2.unique();
//
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//L2的结果是去重失败，因为重复性的元素并没有连在一起
//	//那如果我们想对没有连在一起的有重复元素的序列去重怎么办呢，我们可以先通过
//	//排序的方式，使得其变为一个有序的序列，然后再对其进行去重的操作
//
//	L2.sort();
//	L2.unique();
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	list<int> L3{ 4,5,6 };
//	//在使用merge的时候需要注意的一点就是
//	//在合并的期间，必须要保证两个链表是有序的才是可以进行合并的
//	L2.merge(L3);
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//删除所有指定值的元素、
//
//	L2.remove(4);
//
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//按照特定的条件进行删除
//	//这里的条件我们可以通过三种方式去给出
//	//1. 函数指针  2.仿函数   3. lambda表达式给出
//	//那么现在我将所有是3的倍数的元素给他删掉
//	//根据用户所提供的参数来进行检测的操作
//	L2.remove_if(IsMod3);
//
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}

//void TestList7()
//{
//	list<int> L{ 1,2,3,4,5,6 };
//	auto it = L.begin();
//
//	L.push_back(7);
//	L.push_back(8);
//	L.push_back(9);
//	L.push_back(0);
//	//list再插入的时候不会导致迭代器的失效
//	//那么什么情况下会导致迭代器的失效呢
//
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	L.erase(L.begin());
//	//将链表的第一个结点删除掉
//
//	//在删除之前it迭代器指向的就是第一个结点
//	//那么在该结点删除掉之后，it迭代器指向的就是一个已经被释放的结点
//	//那么该迭代器就已经失效了
//	//如果在使用该迭代器之前，没有给迭代器重新赋值的话，那么代码就会崩溃
//	it = L.begin();
//	//也可以修改成it=L.erase(L.begin());   这样子代码也是不会发生崩溃的操作的
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//
//}

//void TestList8()
//{
//	list<int> L{ 1,2,3,4,5,6,7,8,9,0 };
//	auto it = L.begin();
//
//	//那么假如说，我现在希望去删除掉所有的偶数
//	while (it != L.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it=L.erase(it);
//		}
//		else
//			++it;
//	}
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}



//由下面的代码推断出
//	while (it != L.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it=L.erase(it);
//		}
//		else
//			++it;
//	}
//迭代器所需的操作：
//首先，需要把这个迭代器给他构造出来，然后迭代器本质上其实就是一个指针的操作
//指针的话，就肯定是需要进行解引用的操作了
//我们需要让迭代器具有类似于指针的行为，也就是说我们需要对*和->符号进行重载的行为
//迭代器也需要可以移动 前置++和后置++，那么既然list底层的结构是双向的结构，那么我们
//给出了从前向后的移动操作，那么我们同时也需要给出从后向前的移动操作，比如说是--操作
//移动的操作只是部分容器拥有
//也需要能够进行比较的操作，比如说是!=符号和==符号

int main()
{
	return 0;
}