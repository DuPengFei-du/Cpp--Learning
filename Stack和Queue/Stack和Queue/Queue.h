#pragma once 

#include<list>

#include<deque>


namespace bite
{

	/*
	queue<int> q;  //底层存储元素使用的是deque
	queue<int,list<int>> q;  //底层存储元素使用list
	*/
	template<class T,class Container=std::deque<T>>

	class queue
	{
	public:
		queue()
		{
			//构造函数，什么都不用做
		}
		void push(const T& data)
		{
			q.push_back(data);
		}
		void pop()
		{
			if (q.empty())
				return;
			q.pop_front();  //相当于是头删的操作
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