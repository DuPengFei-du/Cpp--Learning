#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//void TestVector1()
//{
//	vector<int> v1;
//	vector<int> v2(10, 5);   //给vector中放上10个值为5的元素
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int array[] = { 1,2,3,4,5, };
//
//	//注意：STL中的所有区间都是左闭右开的
//	vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//那么既然是左闭右开的，所以v4里面的元素就只有1，2，3
//	vector<int> v4(array, array + 3);
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	string s("hello");
//	vector<char> v5(s.begin(), s.end());  //begin和end也是左闭右开的区间
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//利用v3来拷贝构造v6
//	vector<int> v6(v3);
//
//	for (auto e : v6)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//C++新增了列表的初始化
//	vector<int> v7{ 1,2,3,4,5,6 };
//
//	for (auto e : v7)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector1();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //第二个参数如果没有传递，那么使用0来进行填充
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//class Date
//{
//public:
//	Date(int year=1900, int month=1, int day=1)
//		:_year(year),
//		_month(month),
//		_day(day)
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //第二个参数如果没有传递，那么使用0来进行填充
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	Date d(2020, 12, 12);
//
//	vector<Date> vd;
//	vd.resize(10, d);
//	vd.resize(20);   //如果第二个参数没有传递的话，编译器会调用无参的构造函数
//	//进行填充，但是如果类中已经定义了构造函数，编译器将不会再去生成一个默认
//	//的构造函数，但是如果在上方的构造函数处将其变成全缺省的构造函数的话，这个代码
//	//就不会再出现问题了
//
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector3()
//{
//	vector<int> v1;
//	v1.reserve(10);
//	//注意：改行代码会崩溃
//	//原因：reserve(10)只是将容量的大小扩大到10，并不会增加有效元素的个数
//	//现在v1中有效元素的个数仍然是0，那么你要去访问0号位置的代码是肯定会崩溃的
//	cout << v1[0] << endl;
//
//	vector<int> v2;
//	v2.resize(10);
//	//下面的这个代码是没有什么问题的
//	cout << v2[0] << endl;
//}
//int main()
//{
//	TestVector3();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector4()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << sz << endl;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector4();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector5()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	//需求，在3所在的位置插入0
//	//vector中本身是没有提供find的方法的,那么我们只能使用标准库中的find方法了
//	auto pos = find(v.begin(),v.end(),3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//当然，也可以插入一段连续的空间
//	vector<int> vv{ 11,22,33 };
//
//	v.insert(v.end(), vv.begin(), vv.end());
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector5();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector5()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	//需求，在3所在的位置插入0
//	//vector中本身是没有提供find的方法的,那么我们只能使用标准库中的find方法了
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//当然，也可以插入一段连续的空间
//	vector<int> vv{ 11,22,33 };
//
//	v.insert(v.end(), vv.begin(), vv.end());
//
//	//支持列表方式任意位置的插入
//	v.insert(v.end(), { 100, 200, 300 });
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector5();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector6()
//{
//	vector<int> v{ 1,2,3,4,5};
//	v.erase(v.begin());
//
//	//相当于是从v.clear()
//	v.erase(v.begin(), v.end());
//}
//int main()
//{
//	TestVector6();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5 };
//
//	auto it = v.begin();
//
//	v.push_back(6);
//	v.push_back(7);
//
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5 };
//
//	auto it = v.begin();
//
//	//v.push_back(6);
//	//v.push_back(7);
//
//	v.assign(10,5);
//
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
//
//	//现在我们需要将vector中所有的偶数删除掉
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//		{
//			v.erase(it);   //如果他是偶数的话，我们就使用erase将其删除掉
//		}
//		else
//		{
//			++it;
//		}
//	}
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
//
//	//现在我们需要将vector中所有的偶数删除掉
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it = v.erase(it);   //如果他是偶数的话，我们就使用erase将其删除掉
//		}
//		else
//		{
//			++it;
//		}
//	}
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector8()
//{
//	//矩阵:每行的元素个数都是相同的
//	//比如：5行6列的二维数组
//	vector<vector<int>> v1;
//
//	//二维数组总共有5行，现在每行还没有空间
//	v1.resize(5);
//
//	cout << v1[0].size() << endl;
//	cout << v1[0].capacity() << endl;
//
//	//经典的误用，如果像下面这样写代码的话，其实是会造成代码的崩溃的
//	//原因在于，v1[0]该vector还没有有效元素，所以无法访问0号位置的元素
//	//v1[0][0] = 10;
//
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		v1[i].resize(6);
//		for (size_t j = 0; j < v1[i].size(); ++j)
//		{
//			v1[i][j] = j + 1;
//		}
//	}
//}
//int main()
//{
//	TestVector8();
//	return 0;
//}