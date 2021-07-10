#pragma once 

#include<vector>
#include<iostream>
#include"Common.h"
using namespace std;

//��ϣͰ�ĵײ�ṹ��ʵ������

template<class T>
struct HashNode
{
	//T():----��˼��ʵ�������T���������͵�Ԫ�� T()��ֵ��ʵ����0
	//T������Զ������͵�Ԫ��---T()���ǵ���T���޲εĹ��캯��
	HashNode(const T& data=T())
		//��ʼ��λ��λ��
		:_pNext(nullptr)
		,_data(data)
	{

	}

	HashNode<T>* _pNext;
	T _data;
};


//�����ϣͰ�е�Ԫ����Ψһ��
template<class T,class DF=DFDef<T>>    //Ĭ�ϲ��õ������εķ�ʽ
class HashBucket
{
	//����ڿ�ɢ����˵����ϣ������Ͳ���ȥ�洢Ԫ�ص�ֵ��
	//���Ǵ洢��Ԫ����Ԫ�صĵ�ַ
	typedef HashNode<T> Node;
public:
	HashBucket(size_t capacity = 10)
		:_size(0)
	{
		_table.resize(10);//GetNextPrime(10));
	}

	//�������ڲ��Ĳ������
	//��˼��ʵҲ�����ڽ��в��������ʱ�򣬹�ϣͰ�е�Ԫ����Ψһ��
	bool insertunique(const T& data)
	{
		//���Ȼ���һ������Ҫͨ����ϣ��������±��λ��
		size_t bucketNo = HashFunc(data);

		Node* pCur = _table[bucketNo];

		while (pCur)
		{
			if (pCur->_data == data)
				return false;
			pCur = pCur->_pNext;
		}
		//û�����Ԫ�صĻ������ǾͰ���������ȥ
		//����ʹ��ͷ��ķ�ʽ�����в���Ĳ���
		pCur = new Node(data);
		pCur->_pNext = _table[bucketNo];
		_table[bucketNo] = pCur;
		++_size;
		return true;
	}

	bool eraseunique(const T& data())const
	{
		//��һ������һ���ģ�������Ҫͨ����ϣ�������data���ڵ�Ͱ��
		size_t bucketNo = HashFunc(data);
		//Ȼ����Ҫ��bucket����Ӧ��������ȥ����ֵΪdata�Ľ��
		Node* pCur = _table[bucketNo];
		Node* pPre = nullptr;
		while (pCur)
		{
			if (pCur->_data == data)
			{
				//��ô�������Ǿ���Ҫ���������ɾ��
				if (nullptr == pPre)
				{
					//˵����������Ҫɾ���Ľ����ͷ�ڵ�
					_table[bucketNo] = pCur->_pNext;
				}
				else
				{
					//ɾ�����Ƿǵ�һ�����
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


	//��ϣ�Ĳ��Ҹ��Ӷ���O(1)
	Node* find(const T& data)const
	{
		//���Ȼ���һ���ĵ���
		size_t bucketNo = HashFunc(data);
		//Ȼ����bucketNo����Ӧ��������ȥ����ֵΪdata�Ľڵ�
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


	//��������
	//��ʵʵ���Ϲ�ϣͰ��û�д�ӡ��
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