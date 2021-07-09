#pragma once 

#include<vector>

#include<deque>

namespace bite   //给命名空间是为了防止产生冲突的
{
	/*
	stack<int> s1;  //底层默认你使用的是deque
	stack<cector<int>> s2;  //在实例化的时候stack底层使用的是vector
	*/
	template<class T,class Container=std::deque<T>>

	class stack
	{
	public:
		stack()
		{
			//构造函数
		}
		void push(const T& data)
		{
			_vStack.push_back(data);   //直接调用栈中尾插的操作
			//如果容量不够的话，也不用担心，因为vector是会进行自动扩容的操作的
		}

		void pop()
		{
			if (_vStack.empty())
				return;
			return _vStack.pop_back();  //直接调用尾删的方式来对你进进行删除的操作
		}

		T& top()
		{
			return _vStack.back();
		}

		const T& top()const
		{
			return _vStack.back();
		}

		size_t size()const
		{
			return _vStack.size();
		}

		bool empty()const 
		{
			return _vStack.empty();
		}
	private:
		//Container到底是谁，就看你在用的时候都到底怎么对他进行实例化的操作了
		Container _vStack;   //把数据放在vStack中进行保存的操作
	};
}