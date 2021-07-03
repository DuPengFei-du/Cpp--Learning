#pragma once 


namespace bite   //������������ռ�����棬�Ͳ���ͱ�׼���е�list������ͻ��
{
	//��Ϊlist�ڵײ��õ��ǽ�㣬����������Ҫ�ȸ�����������
	template<class T>
	struct ListNode  //ListNode�ǽڵ�����ͣ�����ÿ����ʹ�õ�ʱ����Ҫ��
		//�������һ�������ţ���ʾ���Ƕ����ģ���ʵ��������
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

	//list����������Ҫ��ԭ��ָ̬��(������͵�ָ��)���з�װ
	template<class T>
	class ListIterator
	{
	public:
		typedef ListNode<T> Node;

		//������Ҫ�����������Ĺ���
		ListIterator(Node* node == nullptr)   //����nullptr����Ϊ�����ǰ�û�û�и�ֵ�����Ǿ͸���Ĭ��ֵ
			//�õ�ǰ�������������ָ�������г�ʼ���Ĳ���
			:_node(node)    //Ȼ����г�ʼ���Ĳ���
		{

		}

		//������н����õĲ���������Ϊֻ��һ������
		//����������ǳ�Ա���������ԾͲ��ô��ݹ�ȥ��
		T& operator*()
		{
			return node->val;
		}

		T* operator->()
		{
			//ͨ��ȡ��ַȥ���������ֵ
			return &(operator*())
		}

		//��������Ҫ�ܹ��ƶ�

		//�õ�������������ָ�����Ϊ
	private:
		//�ѽ�����һ�·�װ��ʵ�ͺ���
		Node* _node;
	};

	//Ȼ��������ȥ����list�Ľṹ
	template<class T>
	class list
	{
		//��ô�������λ��ֻ��Ҫ��һ������ָ��Ϳ�����
		typedef ListNode<T> Node;  //�����������Ĳ���
		//��������Ҫ��list�Ľṹ����һ�����������������������ֽṹ�ǲ���ȡ��
		//��Ϊlist�ײ�Ľṹ����ʽ�Ľṹ���������������ģ�����˵�Ͳ���ʹ��ԭ��̬��ָ����
		//����list���������ʹ��ԭ��̬��ָ�룬���Ե���������++����ʱ���޷�ȡ����һ�����
		//����ȡ��һ�����ֻ��ͨ��next���л�ȡ
		//typedef T* iterator;  //�����������Ĳ���


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

		//ΪʲôҪ��ǰ�����һ��ģ���أ�
		//��Ϊ����list������������û�е�����������
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
			//��������
			//���ȣ�ɾ����Ч���
			//��Σ�ɾ��ͷ���
			erase(begin(), end());
			delete head;
			head = nullptr;
		}

		////////////////////////
		//�������Ĳ���
		iterator begin();
		iterator end();


		/////////////////////////////
		//������صĲ���
		size_t size()const
		{
			//��Ҫ��������б���һ�����˵����һ������������¼Ԫ�صĸ���
			//���ַ������ǿ��Ե�
			size_t count = 0;
			auto it = begin();
			while (it != v.end()) ++it, ++count;
			return count;
		}
		
		//��listΪ�յ�ʱ��Ҳ����˵list����һ��Ԫ�ض�û��
		//���Ǿ�������һ��Ԫ�ض�û�У���ͷ������������Ҳ�Ǵ�����һ��ͷ�ڵ��

		bool empty(const)
		{
			//���ͷ�ڵ��next�������Լ��Ļ�����˵�����������һ���յ�����
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

		//Ԫ�ط��ʵĲ���
		//���������е�һ��Ԫ��
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

		//�������������һ��Ԫ��

		const T& back()const
		{
			return head->prev->val;
		}

		////////////////////////////////
		//Ԫ���޸ĵĲ���
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

		//������λ�ý��еĲ����ɾ������
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

		//��������ͷ���Ĳ���
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
	 