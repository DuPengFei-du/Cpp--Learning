#pragma once 

#include<iostream>
using namespace std;

template<class K,class V>
struct BSTNode
{
	BSTNode<K, V>* _left;
	BSTNode<K, V>* _right;
	K _key;
	V _value;

	//���������������Ľ��ṹ
	BSTNode(const K& key = K(), const V& value = V())   //���û�и�ֵ�û�����ʹ��Ĭ��ֵ
		:_left(nullptr)
		, _right(nullptr)
		, _key(key)
		, _value(value)
	{

	}
};

template<class K,class V>
class BSTree
{
	typedef BSTNode<K, V> Node;
public:
	BSTree()
		:_root(nullptr)
	{

	}

	//����
	Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key == cur->_key)
				return cur;
			else if (key < cur->_key)
				cur = cur->_left;
			else
				cur = cur->_right;
		}
		return nullptr;
	}

	//���в���Ĳ���
	bool Insert(const K& key, const V& value)
	{
		//����������һ�������Ļ�����ôֱ�Ӳ�����ʵ�Ϳ�����
		if (nullptr == _root)
		{
			_root = new Node(key, value);
			return true;
		}

		//����������ǿյĵĻ�����ô����Ҫ����ȥ����
		//������Ҫȥ���Ҵ��������ڶ������������е�λ��
		//�ڲ��ҵĹ��������ǻ���Ҫ�������˫��
		Node* cur = _root;   //��Ҫ�Ӹ���������ȵ�ȥ���в��ҵĲ���
		Node* parent = nullptr;
		while (cur)
		{
			parent = cur;
			if (key < cur->_key)
				cur = cur->_left;
			else if (key > cur->_key)
				cur = cur->_right;
			else
				return false;
		}
		//�ҵ���λ��֮�����Ǿ���Ҫ�����н��Ĳ���
		cur = new Node(key, value);
		if (key < parent->_key)
			parent->_left = cur;
		else
			parent->_right = cur;
		return true;
	}

	//ɾ�����
	//��ɾ������ʱ����Ҫע���һ����ʵ���������һ��������ɾ����ʱ��
	//����Ҫ�����������˫�׽��
	//��Ȼ�������ڵ�ɾ���Ļ����������˫�׽���û��ָ����
	bool Erase(const K& key)
	{
		//����������һ�ÿ����Ļ�����ôֱ�Ӿ��ǲ����Խ���ɾ��������
		//if (root == nullptr)
			//return false;
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key == cur->_key)
				break;
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				parent = cur;
				cur = cur->_right;
			}
		}
		//�����������в�����key���
		if (cur == nullptr)
			return false;

		//cur���գ�˵����ȫ���������Ѿ��ҵ���key�Ľ��
		//��ô���Ǿ���Ҫ��������Ӷ����������н���ɾ���Ĳ���
		if (nullptr == cur->_right)   //˵��curһ��û���Һ���
		{
			//cur:����������||û������---->ֱ�ӽ���ɾ���Ĳ���
			if (nullptr == parent)
			{
				//˵��cur����Ǹ��ڵ�
				_root = cur->_left;
			}
			else
			{
				//˵��curһ��������˫�׽��
				if (cur == parent->_left)
				{
					parent->_left = cur->_left;
				}
				else
				{
					parent->_right = cur->_right;
				}
			}
		}
		else if (nullptr == cur->_left)   //curһ�������Һ��ӵ�
		{
			//curֻ���Һ���---Ҳ����ֱ��ɾ��
			if (nullptr == parent)
			{
				_root = cur->_right;
			}
			else
			{
				if (cur == parent->_left)
				{
					parent->_left = cur->_left;
				}
				else
				{
					parent->_right = cur->_right;
				}
			}
		}
		else
		{
			//cur������Һ��Ӿ�����---�����������ʵ�ǲ���ֱ�ӽ���ɾ��������
			//1.Ҫ��cur����������һ�����ȥ��������Ҫ��ɾ���ĸ��ڵ�
			//��cur����������ȥ��:��ô��Ҫ�������������Ľ�㣬Ҳ�����������������Ҳ�Ľ��
			//��cur����������ȥ�ң���cur��������ȥ����С�Ľ�㣬Ҳ����˵�������������Ľ��
			parent = cur;
			Node* pDelNode = cur->_right;
			while (pDelNode->_left)
			{
				parent = pDelNode;
				pDelNode = pDelNode->_left;
			}
			cur->_key = pDelNode->_key;

			//ɾ������Ľ��
			if (pDelNode == parent->_left)
				parent->_left = pDelNode->_right;
			else
				parent->_right = pDelNode->_right;
			cur = pDelNode;
		}
		delete cur;
		return true;
	}

	//��Ҫ���������ݽ�����յĲ���
	void clear()
	{
		_Destroy(_root);
	}

	//�Խ��������֤
	//�����������
	void InOrder()
	{
		_InOrder(_root);
	}

	//ȥ���һ�������Ľ��
	Node* LeftMost()
	{
		if (NULL == _root)
			return nullptr;
		Node* cur = _root;
		while (cur->_left)
			cur = cur->_left;
		return cur;
	}

	//ȥ���һ�����ұ߲�Ľ��
	Node* RightMost()
	{
		if (NULL == _root)
			return nullptr;
		Node* cur = _root;
		while (cur->_right)
			cur = cur->_right;
		return cur;
	}

private:
	void _Destroy(Node*& root)
	{
		if (root)
		{
			_Destroy(root->left);
			_Destroy(root->right);
			delete root;
			root = nullptr;
		}
	}

	void _InOrder(Node* root)
	{
		if (root)
		{
			_InOrder(root->_left);
			cout << root->_key << " ";
			_InOrder(root->_right);
		}
	}

private:
	Node* _root;
};

void TestBSTree()
{
	int a[] = { 5,3,4,1,7,8,2,6,0,9 };
	BSTree<int, int> bt;
	for (auto e : a)
	{
		bt.Insert(e, e);
	}
	bt.InOrder();
	
	cout << endl;

	cout << bt.LeftMost()->_key << endl;
	cout << bt.RightMost()->_key << endl;

	bt.Erase(8);
	bt.Erase(2);
	bt.Erase(1);
	bt.Erase(5);

	bt.InOrder();


}