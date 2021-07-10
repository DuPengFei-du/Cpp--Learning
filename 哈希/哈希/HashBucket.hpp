#pragma once 

#include<vector>
#include<iostream>
#include"Common.h"
using namespace std;

//哈希桶的底层结构其实是链表

template<class T>
struct HashNode
{
	//T():----意思其实就是如果T是内置类型的元素 T()的值其实就是0
	//T如果是自定义类型的元素---T()就是调用T类无参的构造函数
	HashNode(const T& data=T())
		//初始化位的位置
		:_pNext(nullptr)
		,_data(data)
	{

	}

	HashNode<T>* _pNext;
	T _data;
};


//假设哈希桶中的元素是唯一的
template<class T,class DF=DFDef<T>>    //默认采用的是整形的方式
class HashBucket
{
	//针对于开散列来说，哈希表里面就不再去存储元素的值了
	//而是存储的元素首元素的地址
	typedef HashNode<T> Node;
public:
	HashBucket(size_t capacity = 10)
		:_size(0)
	{
		_table.resize(10);//GetNextPrime(10));
	}

	//给出其内部的插入操作
	//意思其实也就是在进行插入操作的时候，哈希桶中的元素是唯一的
	bool insertunique(const T& data)
	{
		//首先还是一样，需要通过哈希函数算出下标的位置
		size_t bucketNo = HashFunc(data);

		Node* pCur = _table[bucketNo];

		while (pCur)
		{
			if (pCur->_data == data)
				return false;
			pCur = pCur->_pNext;
		}
		//没有这个元素的话，我们就把这个结点插进去
		//我们使用头插的方式来进行插入的操作
		pCur = new Node(data);
		pCur->_pNext = _table[bucketNo];
		_table[bucketNo] = pCur;
		++_size;
		return true;
	}

	bool eraseunique(const T& data())const
	{
		//第一步还是一样的，首先需要通过哈希函数算出data所在的桶好
		size_t bucketNo = HashFunc(data);
		//然后，需要在bucket所对应的链表中去查找值为data的结点
		Node* pCur = _table[bucketNo];
		Node* pPre = nullptr;
		while (pCur)
		{
			if (pCur->_data == data)
			{
				//那么现在我们就需要把这个结点给删掉
				if (nullptr == pPre)
				{
					//说明我们现在要删除的结点是头节点
					_table[bucketNo] = pCur->_pNext;
				}
				else
				{
					//删除的是非第一个结点
					pPre->_pNext = pCur->_pNext;
				}
				delete pCur;
				--_size;
				return true;
			}
			else
			{
				pCur = pCur->_pNext;
			}
		}
		return false;
	}


	//哈希的查找复杂度是O(1)
	Node* find(const T& data)const
	{
		//首先还是一样的道理
		size_t bucketNo = HashFunc(data);
		//然后再bucketNo所对应的链表中去查找值为data的节点
		Node* pCur = _table[bucketNo];
		while (pCur)
		{
			if (pCur->_data == data)
				return pCur;
			pCur = pCur->_pNext;
		}
		return nullptr;
	}

	size_t size()const
	{
		return _size;
	}

	bool empty()const
	{
		return 0 == _size;
	}


	//用来测试
	//其实实际上哈希桶是没有打印的
	void PrintHashBucket()
	{
		for (size_t bucketNo = 0; bucketNo < _table.capacity(); bucketNo++)
		{
			Node* pCur = _table[bucketNo];
			cout << "_table[" << bucketNo << "]";
			while (pCur)
			{
				cout << pCur->_data << "---->";
				pCur = pCur->_pNext;
			}
			cout << "NULL" << endl;
		}
	}


private:


	size_t HashFunc(const T& data)const
	{
		return DF()(data) % _table.capacity();
	}

private:
	vector<Node*> _table;
	size_t _size;
};


void TestHashBucket()
{
	HashBucket<int> ht;

	int array[] = { 1,4,7,9,6,5 };

	for (auto e : array)
	{
		ht.insertunique(e);
	}

	cout << ht.size() << endl;

	ht.PrintHashBucket();

	ht.insertunique(44);

	ht.insertunique(54);

	ht.PrintHashBucket();

}