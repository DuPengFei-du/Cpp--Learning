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

	//给出二叉搜索树的结点结构
	BSTNode(const K& key = K(), const V& value = V())   //如果没有给值得话，就使用默认值
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

	//查找
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

	//进行插入的操作
	bool Insert(const K& key, const V& value)
	{
		//如果这个树是一个空树的话，那么直接插入其实就可以了
		if (nullptr == _root)
		{
			_root = new Node(key, value);
			return true;
		}

		//如果树本身不是空的的话，那么就需要我们去查找
		//我们需要去查找待插入结点在二叉搜索树当中的位置
		//在查找的过程中我们还需要保存结点的双亲
		Node* cur = _root;   //需要从跟结点来首先的去进行查找的操作
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
		//找到了位置之后，我们就需要来进行结点的插入
		cur = new Node(key, value);
		if (key < parent->_key)
			parent->_left = cur;
		else
			parent->_right = cur;
		return true;
	}

	//删除结点
	//在删除结点的时候需要注意的一点其实还有在你对一个结点进行删除的时候
	//还需要保留这个结点的双亲结点
	//不然你把这个节点删除的话，这个结点的双亲结点就没有指向了
	bool Erase(const K& key)
	{
		//如果这棵树是一棵空树的话，那么直接就是不可以进行删除操作的
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
		//二叉搜索树中不存在key结点
		if (cur == nullptr)
			return false;

		//cur不空，说明完全二叉树中已经找到了key的结点
		//那么我们就需要将这个结点从二叉搜索树中进行删除的操作
		if (nullptr == cur->_right)   //说明cur一定没有右孩子
		{
			//cur:可能有左孩子||没有左孩子---->直接进行删除的操作
			if (nullptr == parent)
			{
				//说明cur结点是根节点
				_root = cur->_left;
			}
			else
			{
				//说明cur一定存在有双亲结点
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
		else if (nullptr == cur->_left)   //cur一定是有右孩子的
		{
			//cur只有右孩子---也可以直接删除
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
			//cur结点左右孩子均存在---这种情况下其实是不能直接进行删除操作的
			//1.要在cur的子树中找一个结点去替代这个将要被删除的根节点
			//在cur的左子树中去找:那么就要找左子树中最大的结点，也就是收左子树中最右侧的结点
			//在cur的右子树中去找：在cur右子树中去找最小的结点，也就是说右子树中最左侧的结点
			parent = cur;
			Node* pDelNode = cur->_right;
			while (pDelNode->_left)
			{
				parent = pDelNode;
				pDelNode = pDelNode->_left;
			}
			cur->_key = pDelNode->_key;

			//删除替代的结点
			if (pDelNode == parent->_left)
				parent->_left = pDelNode->_right;
			else
				parent->_right = pDelNode->_right;
			cur = pDelNode;
		}
		delete cur;
		return true;
	}

	//需要对树的内容进行清空的操作
	void clear()
	{
		_Destroy(_root);
	}

	//对结果进行验证
	//进行中序遍历
	void InOrder()
	{
		_InOrder(_root);
	}

	//去检测一下最左侧的结点
	Node* LeftMost()
	{
		if (NULL == _root)
			return nullptr;
		Node* cur = _root;
		while (cur->_left)
			cur = cur->_left;
		return cur;
	}

	//去检测一下最右边侧的结点
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