//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	map<string, string> m1;  //构造一个空的map
//
//	//用一段空间去进行构造的方法
//	pair<string, string> array[] = { {"orange","橘子"},{"banana","香蕉" },{"apple","苹果"} };
//
//	map<string, string> m2(array, array + sizeof(array) / sizeof(array[0]));
//
//	for (auto& e : m2)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	map<string, string> m1;  //构造一个空的map
//
//	//用一段空间去进行构造的方法
//	pair<string, string> array[] = { {"orange","橘子"},{"banana","香蕉" },{"apple","苹果"} };
//
//	map<string, string> m2(array, array + sizeof(array) / sizeof(array[0]));
//
//	for (auto& e : m2)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//	cout << endl;
//
//	//C++11---提供的列表构造的方法
//	map<string, string> m3 = { {"orange","橘子"},{"banana","香蕉" },{"apple","苹果"} };
//
//	//采用迭代器的方式去进行遍历的操作
//	//这里不加std其实也是可以的，因为已经有命名空间了
//	//std::map<std::string, std::string>::iterator it = m3.begin();
//	//map<string, string>::iterator it = m3.begin();
//
//	//但是给出auto会更加的方便，就是说不用再去知道到底是什么类型，直接
//	//让他去进行类型推演其实就是可以的了
//	auto it = m3.begin();
//	while (it != m3.end())
//	{
//		cout << it->first << "--->" << it->second << endl;
//		++it;
//	}
//	cout << endl;
//
//	return 0;
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//void TestMap2()
//{
//	map<string, string> m;
//
//	//其实就是调用pair函数构造一个匿名的键值对的对象
//	m.insert(pair<string, string>("name", "名字"));
//	m.insert(pair<string, string>("gender", "性别"));
//	m.insert(pair<string, string>("age", "年龄"));
//
//
//	//make_pair:是一个全局函数，也就是说这个函数只需要输入两个参数
//	//他就会把这个两个参数打包成一个键值对，然后返回
//	m.insert(make_pair("addr", "地址"));
//
//	cout << m.size() << endl;
//	
//	for (auto& e : m)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//
//	cout << endl;
//
//}
//
//int main()
//{
//	TestMap2();
//	return 0;
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//void TestMap2()
//{
//	map<string, string> m;
//
//	//其实就是调用pair函数构造一个匿名的键值对的对象
//	m.insert(pair<string, string>("name", "名字"));
//	m.insert(pair<string, string>("gender", "性别"));
//	m.insert(pair<string, string>("age", "年龄"));
//
//
//	//make_pair:是一个全局函数，也就是说这个函数只需要输入两个参数
//	//他就会把这个两个参数打包成一个键值对，然后返回
//	m.insert(make_pair("addr", "地址"));
//
//	cout << m.size() << endl;
//
//	for (auto& e : m)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//
//	cout << endl;
//
//	//对于元素的访问来说的话，就是你给过来一个key
//	//我给你返回一个value
//
//	cout << m["name"] << endl;
//	cout << m["gender"] << endl;
//
//	//然后我在给出一个map中没有的key
//	//看看会发生什么样的情况
//	cout << m["tel"] << endl;
//
//
//}
//
//int main()
//{
//	TestMap2();
//	return 0;
//}
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//void TestMap3()
//{
//	multimap<string, string> m;
//
//	//其实就是调用pair函数构造一个匿名的键值对的对象
//	m.insert(pair<string, string>("name", "名字"));
//	m.insert(pair<string, string>("gender", "性别"));
//	m.insert(pair<string, string>("age", "年龄"));
//
//
//	//make_pair:是一个全局函数，也就是说这个函数只需要输入两个参数
//	//他就会把这个两个参数打包成一个键值对，然后返回
//	m.insert(make_pair("addr", "地址"));
//
//	cout << m.size() << endl;
//
//	m.insert(pair<string, string>("name", "姓名"));
//
//	cout << m.size() << endl;
//
//	for (auto& e : m)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//
//}
//
//int main()
//{
//	TestMap3();
//	return 0;
//}
//
//
//#include<iostream>
//#include<set>
//#include<string>
//#include<vector>
//
//using namespace std;
//
////set的重要功能其实就是排序+去重
//
//void TestSet()
//{
//	set<string> s1;
//
//	vector<string> v{ "苹果","桃子","苹果","西瓜","梨","西瓜","苹果" };
//
//	set<string> s2(v.begin(), v.end());
//
//	for (auto& e : s2)
//	{
//		cout << e << endl;
//	}
//	cout << endl;
//
//	s2.insert("橘子");
//
//	cout << s2.size() << endl;
//
//	s2.erase("西瓜");
//	
//	auto it=s2.find("西瓜");
//	if (it != s2.end())
//		cout << "删除成功" << endl;
//
//}
//
//int main()
//{
//	TestSet();
//	return 0;
//}


#include"BSTree.hpp"

int main()
{
	TestBSTree();
	return 0;
}