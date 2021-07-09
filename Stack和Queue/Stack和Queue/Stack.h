#pragma once 

#include<vector>

#include<deque>

namespace bite   //�������ռ���Ϊ�˷�ֹ������ͻ��
{
	/*
	stack<int> s1;  //�ײ�Ĭ����ʹ�õ���deque
	stack<cector<int>> s2;  //��ʵ������ʱ��stack�ײ�ʹ�õ���vector
	*/
	template<class T,class Container=std::deque<T>>

	class stack
	{
	public:
		stack()
		{
			//���캯��
		}
		void push(const T& data)
		{
			_vStack.push_back(data);   //ֱ�ӵ���ջ��β��Ĳ���
			//������������Ļ���Ҳ���õ��ģ���Ϊvector�ǻ�����Զ����ݵĲ�����
		}

		void pop()
		{
			if (_vStack.empty())
				return;
			return _vStack.pop_back();  //ֱ�ӵ���βɾ�ķ�ʽ�����������ɾ���Ĳ���
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
		//Container������˭���Ϳ������õ�ʱ�򶼵�����ô��������ʵ�����Ĳ�����
		Container _vStack;   //�����ݷ���vStack�н��б���Ĳ���
	};
}