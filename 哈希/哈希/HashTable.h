#pragma once 
#include<vector>
#include<iostream>
#include<string>
#include"Common.h"

using namespace std;

//����������Ҫ������������Ƴ����ı�������״̬
enum STATE{EMPTY,EXIST,DELETE};

//Ȼ�����Ǹ�����������漰��Ԫ�ص�ֵ��״̬
template<class T>
struct Elem
{
	//���Ǹ���Ԫ�ص�Ĭ�����
	Elem(const T& data = T())
		:_data(data)
		, _state(EMPTY)   //һ��ʼȫ��λ�õ�״̬ȫ�����ɿյ�״̬
	{

	}

	T _data;
	STATE _state;
};


//Ԫ�ظ�������֮�����Ǿ���Ҫ������ϣ����
//�����ڽ��й�ϣ��ĸ�����ʱ�����Ǹ���һ�������Լ���Լ��
//����˵���������ǹ�ϣ����е�Ԫ�ر�����Ψһ��

//T:��ʾԪ�ص�����
//DF:��ʾ��T���͵Ķ���ת����Ϊ�������ݵķ���������
//isLine:��ʾ����ѡ��������̽�⻹�Ƕ���̽�����������
template<class T,class DF= DFDef<T>,bool isLine=true>     //��ӵ�һ�����������ж����ǲ�������̽��
class HashTable
{
public:
	HashTable(size_t capacity = 10)  //���Ǹ����ײ��Ĭ�ϵ�Ԫ�صĸ���
		:_size(0)
	{
		//��Ϊ����һ��ʼ�������ĵײ�ռ���10
		//������������Ҫʹ��resize��Ԫ�ظ������ó�10
		_table.resize(10);   //Ԫ���ȸ���10����Ȼ��ÿһ��Ԫ��ʹ�õ���Ĭ��ֵ
	}

	//������ϣ��Ĳ���

	bool Insert(const T& data)
	{
		//��Ȼ���ݵķ���д���ˣ���ô��ÿ�ν���Ԫ�ز����ʱ�����Ƕ���Ҫ
		//ȥ�������ݵĲ���
		//CheckCapacity();
		//1.��ȥͨ����ϣ���������ϣ��ַ
		size_t hashAddr = HashFunc(data);

		size_t i = 0;

		//�����ǰ����ĵ�ַ�������֮�����ǻ���Ҫȥ�ҵ�һ�����ʵ�λ��
		//������ȥ��һ���������ҵ����±��λ���ϵ�״̬������һ��ʲô���ӵ�״̬
		while (_table[hashAddr]._state != EMPTY)
		{
			//Ԫ���Ѿ�����
			if (_table[hashAddr]._state == EXIST && _table[hashAddr]._data == data)
				//˵�����Ԫ�������ǵı������ʵ�Ѿ�������
				//��ô�ò����в�����
				return false;
			//˵��λ�õ�״̬��DELETE||˵��λ�õ�״̬��EXIST,���Ƿ����˹�ϣ��ͻ
			//��ô����Ҫ������̽��ȥ�����ͻ
			if (isLine)
			{
				hashAddr++;  //����������һֱ�������ȥ����++�����Ļ�����ʵ�����ǻ�Խ���
				//�޸ĵķ�ʽ1
				//hashAddr %= _table.capacity();

				//�޸ķ�ʽ2:
				if (hashAddr == _table.capacity())
					hashAddr = 0;
			}
			else
			{
				//����̽��ķ�ʽ
				i++;
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _table.capacity();    //����̽��ֻ����ȡģ�ķ�ʽ
			}

		}
			//һ����˵���Ҹ�һ���ξͻ�ѿյ�λ�ø��ҵ�������˵�Һܶ���Ҳ�����λ�õ��������
		_table[hashAddr]._data = data;
		_table[hashAddr]._state = EXIST;
		++_size;
		return true;
	}

	int Find(const T& data)
	{
		//1.������Ҫͨ����ϣ��������Ԫ���ڱ���е�λ��
		size_t hashAddr = HashFunc(data);

		size_t i = 0;
		//2.��Ҫȥ���в��ҵĲ���
		while(_table[hashAddr]._state!=EMPTY)
		{
			if (_table[hashAddr]._state == EXIST && _table[hashAddr]._data == data)
				return hashAddr;
			if (isLine)
			{
				hashAddr++;  //����������һֱ�������ȥ����++�����Ļ�����ʵ�����ǻ�Խ���
				//�޸ĵķ�ʽ1
				//hashAddr %= _table.capacity();

				//�޸ķ�ʽ2:
				if (hashAddr == _table.capacity())
					hashAddr = 0;
			}
			else
			{
				//����̽��ķ�ʽ
				i++;
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _table.capacity();    //����̽��ֻ����ȡģ�ķ�ʽ
			}
		}
		return -1;
	}

	bool Erase(const T& data)
	{
		int pos = Find(data);
		if (pos != -1)
		{
			_table[pos]._state = DELETE;
			_size--;
			return true;
		}
		return false;
	}

	size_t Size()const
	{
		return _size;
	}

	void Swap(HashTable<T, DF, isLine>& ht)
	{
		_table.swap(ht._table);
		swap(_size, ht._size);
	}

private:

	//�������ݵĲ���
	//void CheckCapacity()
	//{
	//	if (_size * 10 / _table.capacity() >= 7)
	//	{
	//		//������ȥ����һ���µĹ�ϣ�����
	//		HashTable<T, DF, isLine> newHT(GetNextPrime(_table.capacity()));

	//		//Ȼ�󽫾ɵĹ�ϣ����״̬Ϊ���ڵ�Ԫ�����µĹ�ϣ���в���
	//		for (auto e : _table)
	//		{
	//			if (e._state == EXIST)
	//				newHT.Insert(e);
	//		}
	//		Swap(newHT);
	//	}
	//}

	//�����������Ĺ�ϣ����
	size_t HashFunc(const T& data)
	{
		//DF(df);
		//return df(data) % 10;
		return DF()(data) % _table.capacity();
	}

private:
	vector<Elem<T>> _table;
	size_t _size;   //size��ʾ��ϣ���д洢����ЧԪ�صĸ���
};


void TestHashTable1()
{
	int arr[] = { 21,67,112,99,5,13,44 };

	HashTable<int> ht;

	for (auto e : arr)
	{
		ht.Insert(e);
	}

	cout << ht.Size() << endl;

	ht.Insert(87);

	ht.Insert(77);

	cout << ht.Size() << endl;

	if (ht.Find(87) != -1)
	{
		cout << "87 is in hashtable" << endl;
	}
	else
	{
		cout << "87 is not in hashtable" << endl;
	}

	ht.Erase(67);

	if (ht.Find(67) != -1)
	{
		cout << "67 is in hashtable" << endl;
	}
	else
	{
		cout << "67 is not in hashtable" << endl;
	}

	if (ht.Find(87) != -1)
	{
		cout << "87 is in hashtable" << endl;
	}
	else
	{
		cout << "87 is not in hashtable" << endl;
	}
}


void TestHashTable2()
{
	HashTable<string, DFStr<string>, false>ht;

	ht.Insert("1111");
	ht.Insert("2222");
	ht.Insert("3333");
	ht.Insert("4444");


}
