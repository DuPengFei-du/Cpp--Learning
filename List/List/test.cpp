#include<iostream>
#include<list>
#include<vector>

using namespace std;


//void TestList1()
//{
//	//��Ϊlist�е�Ԫ���ǲ�֧��������ʵģ��������ǲ���ʹ���±�ķ�ʽȥ������
//	//����ֻ��ʹ�õ������ķ�ʽ��list�е�Ԫ�ؽ��д�ӡ�Ĳ�����
//
//	list<int> l1;
//
//	list<int> l2(10, 5); //��l2�������10��ֵΪ5��Ԫ��
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
//	//�����Ȼ�Ѿ���list�ĵ����������ˣ���ô���ǾͿ���ʹ�÷�Χfor�ķ�ʽ������
//	//��ӡ�Ĳ����������ӵĻ����᷽��һЩ
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
//	cout << L.front() << endl;   //��һ�µ�һ��Ԫ����ʲô
//	cout << L.back() << endl;   //��һ�����һ��Ԫ����ʲô
//
//	L.pop_front();
//
//	cout << L.size() << endl;
//
//	cout << L.front() << endl;   //��һ�µ�һ��Ԫ����ʲô
//	cout << L.back() << endl;   //��һ�����һ��Ԫ����ʲô
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
//	//ʹ��C++11�ṩ��ʹ���б�ķ�ʽ�����г�ʼ���Ĳ���
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
//	//���˵Ҫ��ĳһ��Ԫ�ص�λ�ô�ȥ����һ��Ԫ�صĻ�����������Ҫ���ҵ����Ԫ��
//	//���ڵ�λ��֮��Ȼ�����ȥ���в���Ĳ���
//
//	L.insert(find(L.begin(), L.end(), 3), 10, 5);
//	for (auto e : L)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//C++11���������б�ʽ�Ĳ���
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
//	//ɾ��4�Լ�4֮���Ԫ��
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
//	//L1�Ľ�����ǳɹ�ȥ���ˣ� ��Ϊ�ظ��Ե�Ԫ������һ��
//
//	list<int> L2{ 1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0 };
//	L2.unique();
//
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//L2�Ľ����ȥ��ʧ�ܣ���Ϊ�ظ��Ե�Ԫ�ز�û������һ��
//	//������������û������һ������ظ�Ԫ�ص�����ȥ����ô���أ����ǿ�����ͨ��
//	//����ķ�ʽ��ʹ�����Ϊһ����������У�Ȼ���ٶ������ȥ�صĲ���
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
//	//��ʹ��merge��ʱ����Ҫע���һ�����
//	//�ںϲ����ڼ䣬����Ҫ��֤��������������Ĳ��ǿ��Խ��кϲ���
//	L2.merge(L3);
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//ɾ������ָ��ֵ��Ԫ�ء�
//
//	L2.remove(4);
//
//	for (auto e : L2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//�����ض�����������ɾ��
//	//������������ǿ���ͨ�����ַ�ʽȥ����
//	//1. ����ָ��  2.�º���   3. lambda���ʽ����
//	//��ô�����ҽ�������3�ı�����Ԫ�ظ���ɾ��
//	//�����û����ṩ�Ĳ��������м��Ĳ���
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
//	//list�ٲ����ʱ�򲻻ᵼ�µ�������ʧЧ
//	//��ôʲô����»ᵼ�µ�������ʧЧ��
//
//	while (it != L.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	L.erase(L.begin());
//	//������ĵ�һ�����ɾ����
//
//	//��ɾ��֮ǰit������ָ��ľ��ǵ�һ�����
//	//��ô�ڸý��ɾ����֮��it������ָ��ľ���һ���Ѿ����ͷŵĽ��
//	//��ô�õ��������Ѿ�ʧЧ��
//	//�����ʹ�øõ�����֮ǰ��û�и����������¸�ֵ�Ļ�����ô����ͻ����
//	it = L.begin();
//	//Ҳ�����޸ĳ�it=L.erase(L.begin());   �����Ӵ���Ҳ�ǲ��ᷢ�������Ĳ�����
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
//	//��ô����˵��������ϣ��ȥɾ�������е�ż��
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



//������Ĵ����ƶϳ�
//	while (it != L.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it=L.erase(it);
//		}
//		else
//			++it;
//	}
//����������Ĳ�����
//���ȣ���Ҫ������������������������Ȼ���������������ʵ����һ��ָ��Ĳ���
//ָ��Ļ����Ϳ϶�����Ҫ���н����õĲ�����
//������Ҫ�õ���������������ָ�����Ϊ��Ҳ����˵������Ҫ��*��->���Ž������ص���Ϊ
//������Ҳ��Ҫ�����ƶ� ǰ��++�ͺ���++����ô��Ȼlist�ײ�Ľṹ��˫��Ľṹ����ô����
//�����˴�ǰ�����ƶ���������ô����ͬʱҲ��Ҫ�����Ӻ���ǰ���ƶ�����������˵��--����
//�ƶ��Ĳ���ֻ�ǲ�������ӵ��
//Ҳ��Ҫ�ܹ����бȽϵĲ���������˵��!=���ź�==����

int main()
{
	return 0;
}