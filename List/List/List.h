#pragma once 


namespace bite   //放在这个命名空间的下面，就不会和标准库中的list发生冲突了
{
	//因为list在底层用的是结点，所以我们需要先给出结点的类型
	template<class T>
	struct ListNode  //ListNode是节点的类型，我们每次在使用的时候都需要在
		//后面加上一个尖括号，表示的是对这个模板的实例化操作
	{
		ListNode<T>* next;
		ListNode<T>* prev;
		T val;

		ListNode(const T& value)
			:next(nullptr)
			,prev(nullptr)
			,val(value)
		{

		}
	};

	//list迭代器必须要对原生态指针(结点类型的指针)进行封装
	template<class T>
	class ListIterator
	{
	public:
		typedef ListNode<T> Node;

		//首先需要给出迭代器的构造
		ListIterator(Node* node == nullptr)   //给成nullptr是因为如果当前用户没有给值，我们就给出默认值
			//让当前类里面所管理的指针对其进行初始化的操作
			:_node(node)    //然后进行初始化的操作
		{

		}

		//对其进行解引用的操作，又因为只有一个参数
		//这个函数又是成员函数，所以就不用传递过去了
		T& operator*()
		{
			return node->val;
		}

		T* operator->()
		{
			//通过取地址去访问里面的值
			return &(operator*())
		}

		//迭代器还要能够移动

		//让迭代器具有类似指针的行为
	private:
		//把结点进行一下封装其实就好了
		Node* _node;
	};

	//然后我们在去给出list的结构
	template<class T>
	class list
	{
		//那么，在这个位置只需要有一个结点的指针就可以了
		typedef ListNode<T> Node;  //进行重命名的操作
		//我们现在要给list的结构加上一个迭代器，但是像下面这种结构是不可取的
		//因为list底层的结构是链式的结构，他并不是连续的，所以说就不能使用原生态的指针了
		//对于list迭代器如果使用原生态的指针，当对迭代器进行++操作时，无法取到下一个结点
		//链表取下一个结点只能通过next进行获取
		//typedef T* iterator;  //进行重命名的操作


	public:
		list()
		{
			CreateHead();
		}

		list(int n, const T& value = T())
		{
			CreateHead();
			for (int i = 0; i < n; i++)
			{
				push_back(value);
			}
		}

		//为什么要在前面加上一个模板呢？
		//因为我们list方法里面他是没有迭代器的现在
		template<class Iterator>
		list(Iterator first, Iterator last)
		{
			CreateHead();
			while (first != last)
			{
				push_back(*first);
			}
		}

		list(const list<T>& L)
		{
			CreateHead();
			auto it = L.begin();
			while (it != L.end())
			{
				push_back(*it);
			}
		}

		list<int>& operator=(const list<T>& L);

		~list()
		{
			//析构函数
			//首先，删除有效结点
			//其次，删除头结点
			erase(begin(), end());
			delete head;
			head = nullptr;
		}

		////////////////////////
		//迭代器的操作
		iterator begin();
		iterator end();


		/////////////////////////////
		//容量相关的操作
		size_t size()const
		{
			//需要将链表进行遍历一遍或者说给出一个变量用来记录元素的个数
			//两种方法都是可以的
			size_t count = 0;
			auto it = begin();
			while (it != v.end()) ++it, ++count;
			return count;
		}
		
		//当list为空的时候，也就是说list里面一个元素都没有
		//但是就它里面一个元素都没有，带头结点的链表里面也是存在有一个头节点的

		bool empty(const)
		{
			//如果头节点的next还是他自己的话，就说明这个链表是一个空的链表
			return head->next == head;
		}

		void resize(size_t newsize, const T& data = T())
		{
			size_t oldsize = size();
			if (newsize < oldsize)
			{
				for (size_t i = newsize; i < oldsize; i++)
				{
					popback();
				}
			}
			else
			{
				for (size_t i = oldsize; i < newsize; i++)
				{
					push_back(data);
				}
			}
		}

		/////////////////////

		//元素访问的操作
		//访问链表中第一个元素
		T& front()
		{
			return head->next->val;
		}

		const T& front()const 
		{
			return head->next->val;
		}

		T& back()
		{
			return head->prev->val;
		}

		//访问链表中最后一个元素

		const T& back()const
		{
			return head->prev->val;
		}

		////////////////////////////////
		//元素修改的操作
		void push_back(const T& data)
		{
			insert(v.end(), data);
		}
		void pop_back(const T& data)
		{
			auto it = v.end();
			erase(--it);
		}

		void push_front(const T& data)
		{
			insert(v.begin(), data);
		}

		void pop_front(const T& data)
		{
			erase(begin());
		}

		//对任意位置进行的插入和删除操作
		//iterator insert(iterator pos, const T& data);
		//iterator erase(iterator pos);
		//iterator erase(iterator first,iterator last);

		void cleaar()
		{
			erase(begin(), end());
		}

		void swap(list<T>& l)
		{
			std::swap(head, L.head);
		}

		//用来创建头结点的操作
	private:
			void CreateHead()
			{
				head = new Node;
				head->prev = head;
				head->next = head;
			}
	private:
		Node *head;
	};
}
	 