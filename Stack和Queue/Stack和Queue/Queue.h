#pragma once 

#include<list>

#include<deque>


namespace bite
{

	/*
	queue<int> q;  //�ײ�洢Ԫ��ʹ�õ���deque
	queue<int,list<int>> q;  //�ײ�洢Ԫ��ʹ��list
	*/
	template<class T,class Container=std::deque<T>>

	class queue
	{
	public:
		queue()
		{
			//���캯����ʲô��������
		}
		void push(const T& data)
		{
			q.push_back(data);
		}
		void pop()
		{
			if (q.empty())
				return;
			q.pop_front();  //�൱����ͷɾ�Ĳ���
		}
		T& front()
		{
			return q.front();
		}

		const T& front()const
		{
			return q.front();
		}
		T& back()
		{
			return q.back();
		}
		const T& back()const
		{
			return q.back();
		}

		size_t size()const
		{
			return q.size();
		}

		bool empty()const
		{
			return list.empty();
		}

	private:
		Container q;
	};
}