#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//void TestVector1()
//{
//	vector<int> v1;
//	vector<int> v2(10, 5);   //��vector�з���10��ֵΪ5��Ԫ��
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int array[] = { 1,2,3,4,5, };
//
//	//ע�⣺STL�е��������䶼������ҿ���
//	vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//��ô��Ȼ������ҿ��ģ�����v4�����Ԫ�ؾ�ֻ��1��2��3
//	vector<int> v4(array, array + 3);
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	string s("hello");
//	vector<char> v5(s.begin(), s.end());  //begin��endҲ������ҿ�������
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//����v3����������v6
//	vector<int> v6(v3);
//
//	for (auto e : v6)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//C++�������б�ĳ�ʼ��
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
//	v.reserve(20);  //�ڶ����������û�д��ݣ���ôʹ��0���������
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //�ڶ����������û�д��ݣ���ôʹ��0���������
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
//	v.reserve(20);  //�ڶ����������û�д��ݣ���ôʹ��0���������
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //�ڶ����������û�д��ݣ���ôʹ��0���������
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
//	vd.resize(20);   //����ڶ�������û�д��ݵĻ���������������޲εĹ��캯��
//	//������䣬������������Ѿ������˹��캯������������������ȥ����һ��Ĭ��
//	//�Ĺ��캯��������������Ϸ��Ĺ��캯����������ȫȱʡ�Ĺ��캯���Ļ����������
//	//�Ͳ����ٳ���������
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
//	//ע�⣺���д�������
//	//ԭ��reserve(10)ֻ�ǽ������Ĵ�С����10��������������ЧԪ�صĸ���
//	//����v1����ЧԪ�صĸ�����Ȼ��0����ô��Ҫȥ����0��λ�õĴ����ǿ϶��������
//	cout << v1[0] << endl;
//
//	vector<int> v2;
//	v2.resize(10);
//	//��������������û��ʲô�����
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
//	//������3���ڵ�λ�ò���0
//	//vector�б�����û���ṩfind�ķ�����,��ô����ֻ��ʹ�ñ�׼���е�find������
//	auto pos = find(v.begin(),v.end(),3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//��Ȼ��Ҳ���Բ���һ�������Ŀռ�
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
//	//������3���ڵ�λ�ò���0
//	//vector�б�����û���ṩfind�ķ�����,��ô����ֻ��ʹ�ñ�׼���е�find������
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//��Ȼ��Ҳ���Բ���һ�������Ŀռ�
//	vector<int> vv{ 11,22,33 };
//
//	v.insert(v.end(), vv.begin(), vv.end());
//
//	//֧���б�ʽ����λ�õĲ���
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
//	//�൱���Ǵ�v.clear()
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
//	//����������Ҫ��vector�����е�ż��ɾ����
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//		{
//			v.erase(it);   //�������ż���Ļ������Ǿ�ʹ��erase����ɾ����
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
//	//����������Ҫ��vector�����е�ż��ɾ����
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it = v.erase(it);   //�������ż���Ļ������Ǿ�ʹ��erase����ɾ����
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
//	//����:ÿ�е�Ԫ�ظ���������ͬ��
//	//���磺5��6�еĶ�ά����
//	vector<vector<int>> v1;
//
//	//��ά�����ܹ���5�У�����ÿ�л�û�пռ�
//	v1.resize(5);
//
//	cout << v1[0].size() << endl;
//	cout << v1[0].capacity() << endl;
//
//	//��������ã��������������д����Ļ�����ʵ�ǻ���ɴ���ı�����
//	//ԭ�����ڣ�v1[0]��vector��û����ЧԪ�أ������޷�����0��λ�õ�Ԫ��
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