//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	map<string, string> m1;  //����һ���յ�map
//
//	//��һ�οռ�ȥ���й���ķ���
//	pair<string, string> array[] = { {"orange","����"},{"banana","�㽶" },{"apple","ƻ��"} };
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
//	map<string, string> m1;  //����һ���յ�map
//
//	//��һ�οռ�ȥ���й���ķ���
//	pair<string, string> array[] = { {"orange","����"},{"banana","�㽶" },{"apple","ƻ��"} };
//
//	map<string, string> m2(array, array + sizeof(array) / sizeof(array[0]));
//
//	for (auto& e : m2)
//	{
//		cout << e.first << "--->" << e.second << endl;
//	}
//	cout << endl;
//
//	//C++11---�ṩ���б���ķ���
//	map<string, string> m3 = { {"orange","����"},{"banana","�㽶" },{"apple","ƻ��"} };
//
//	//���õ������ķ�ʽȥ���б����Ĳ���
//	//���ﲻ��std��ʵҲ�ǿ��Եģ���Ϊ�Ѿ��������ռ���
//	//std::map<std::string, std::string>::iterator it = m3.begin();
//	//map<string, string>::iterator it = m3.begin();
//
//	//���Ǹ���auto����ӵķ��㣬����˵������ȥ֪��������ʲô���ͣ�ֱ��
//	//����ȥ��������������ʵ���ǿ��Ե���
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
//	//��ʵ���ǵ���pair��������һ�������ļ�ֵ�ԵĶ���
//	m.insert(pair<string, string>("name", "����"));
//	m.insert(pair<string, string>("gender", "�Ա�"));
//	m.insert(pair<string, string>("age", "����"));
//
//
//	//make_pair:��һ��ȫ�ֺ�����Ҳ����˵�������ֻ��Ҫ������������
//	//���ͻ������������������һ����ֵ�ԣ�Ȼ�󷵻�
//	m.insert(make_pair("addr", "��ַ"));
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
//	//��ʵ���ǵ���pair��������һ�������ļ�ֵ�ԵĶ���
//	m.insert(pair<string, string>("name", "����"));
//	m.insert(pair<string, string>("gender", "�Ա�"));
//	m.insert(pair<string, string>("age", "����"));
//
//
//	//make_pair:��һ��ȫ�ֺ�����Ҳ����˵�������ֻ��Ҫ������������
//	//���ͻ������������������һ����ֵ�ԣ�Ȼ�󷵻�
//	m.insert(make_pair("addr", "��ַ"));
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
//	//����Ԫ�صķ�����˵�Ļ��������������һ��key
//	//�Ҹ��㷵��һ��value
//
//	cout << m["name"] << endl;
//	cout << m["gender"] << endl;
//
//	//Ȼ�����ڸ���һ��map��û�е�key
//	//�����ᷢ��ʲô�������
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
//	//��ʵ���ǵ���pair��������һ�������ļ�ֵ�ԵĶ���
//	m.insert(pair<string, string>("name", "����"));
//	m.insert(pair<string, string>("gender", "�Ա�"));
//	m.insert(pair<string, string>("age", "����"));
//
//
//	//make_pair:��һ��ȫ�ֺ�����Ҳ����˵�������ֻ��Ҫ������������
//	//���ͻ������������������һ����ֵ�ԣ�Ȼ�󷵻�
//	m.insert(make_pair("addr", "��ַ"));
//
//	cout << m.size() << endl;
//
//	m.insert(pair<string, string>("name", "����"));
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
////set����Ҫ������ʵ��������+ȥ��
//
//void TestSet()
//{
//	set<string> s1;
//
//	vector<string> v{ "ƻ��","����","ƻ��","����","��","����","ƻ��" };
//
//	set<string> s2(v.begin(), v.end());
//
//	for (auto& e : s2)
//	{
//		cout << e << endl;
//	}
//	cout << endl;
//
//	s2.insert("����");
//
//	cout << s2.size() << endl;
//
//	s2.erase("����");
//	
//	auto it=s2.find("����");
//	if (it != s2.end())
//		cout << "ɾ���ɹ�" << endl;
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