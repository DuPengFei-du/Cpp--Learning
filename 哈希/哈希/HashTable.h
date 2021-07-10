#pragma once 
#include<vector>
#include<iostream>
#include<string>
#include"Common.h"

using namespace std;

//首先我们需要给出我们所设计出来的表格的三种状态
enum STATE{EMPTY,EXIST,DELETE};

//然后我们给出表格中所涉及的元素的值和状态
template<class T>
struct Elem
{
	//我们给出元素的默认情况
	Elem(const T& data = T())
		:_data(data)
		, _state(EMPTY)   //一开始全部位置的状态全部给成空的状态
	{

	}

	T _data;
	STATE _state;
};


//元素给出来了之后，我们就需要给出哈希表了
//我们在进行哈希表的给出的时候，我们给出一种我们自己的约定
//就是说，假如我们哈希表格中的元素必须是唯一的

//T:表示元素的类型
//DF:表示将T类型的对象转换称为整形数据的方法的类型
//isLine:表示的是选择用线性探测还是二次探测来解决问题
template<class T,class DF= DFDef<T>,bool isLine=true>     //多加的一个参数用来判断其是不是线性探测
class HashTable
{
public:
	HashTable(size_t capacity = 10)  //我们给出底层的默认的元素的个数
		:_size(0)
	{
		//因为我们一开始所给出的底层空间是10
		//所以我们呢需要使用resize将元素个数设置成10
		_table.resize(10);   //元素先给成10个，然后每一个元素使用的是默认值
	}

	//给出哈希表的插入

	bool Insert(const T& data)
	{
		//既然扩容的方法写好了，那么在每次进行元素插入的时候，我们都需要
		//去进行扩容的操作
		//CheckCapacity();
		//1.先去通过哈希函数计算哈希地址
		size_t hashAddr = HashFunc(data);

		size_t i = 0;

		//当我们把他的地址计算出来之后，我们还需要去找到一个合适的位置
		//我们先去看一下我们所找到的下标的位置上的状态到底是一个什么样子的状态
		while (_table[hashAddr]._state != EMPTY)
		{
			//元素已经存在
			if (_table[hashAddr]._state == EXIST && _table[hashAddr]._data == data)
				//说明这个元素在我们的表格中其实已经存在了
				//那么久不进行插入了
				return false;
			//说明位置的状态是DELETE||说明位置的状态是EXIST,但是发生了哈希冲突
			//那么就需要用线性探测去解决冲突
			if (isLine)
			{
				hashAddr++;  //但是这里，如果一直让他向后去进行++操作的话，其实代码是会越界的
				//修改的方式1
				//hashAddr %= _table.capacity();

				//修改方式2:
				if (hashAddr == _table.capacity())
					hashAddr = 0;
			}
			else
			{
				//二次探测的方式
				i++;
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _table.capacity();    //二次探测只能用取模的方式
			}

		}
			//一般来说，找个一两次就会把空的位置给找到，不会说找很多次找不到空位置的情况存在
		_table[hashAddr]._data = data;
		_table[hashAddr]._state = EXIST;
		++_size;
		return true;
	}

	int Find(const T& data)
	{
		//1.首先需要通过哈希函数计算元素在表格中的位置
		size_t hashAddr = HashFunc(data);

		size_t i = 0;
		//2.需要去进行查找的操作
		while(_table[hashAddr]._state!=EMPTY)
		{
			if (_table[hashAddr]._state == EXIST && _table[hashAddr]._data == data)
				return hashAddr;
			if (isLine)
			{
				hashAddr++;  //但是这里，如果一直让他向后去进行++操作的话，其实代码是会越界的
				//修改的方式1
				//hashAddr %= _table.capacity();

				//修改方式2:
				if (hashAddr == _table.capacity())
					hashAddr = 0;
			}
			else
			{
				//二次探测的方式
				i++;
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _table.capacity();    //二次探测只能用取模的方式
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

	//给出扩容的操作
	//void CheckCapacity()
	//{
	//	if (_size * 10 / _table.capacity() >= 7)
	//	{
	//		//首先先去创建一个新的哈希表出来
	//		HashTable<T, DF, isLine> newHT(GetNextPrime(_table.capacity()));

	//		//然后将旧的哈希表中状态为存在的元素向新的哈希表中插入
	//		for (auto e : _table)
	//		{
	//			if (e._state == EXIST)
	//				newHT.Insert(e);
	//		}
	//		Swap(newHT);
	//	}
	//}

	//我们所给出的哈希函数
	size_t HashFunc(const T& data)
	{
		//DF(df);
		//return df(data) % 10;
		return DF()(data) % _table.capacity();
	}

private:
	vector<Elem<T>> _table;
	size_t _size;   //size表示哈希表中存储的有效元素的个数
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
