//#pragma once 
//
//#include<vector>
//#include<functional>
//
//namespace bite  //防止饿标准库中的优先级队列发生冲突
//{
//	template<class T, class Container = std::vector<T>, class Cmp = std::less<T>>
//	class priority_queue
//	{
//	public:
//		priority_queue(const Cmp& cmp = Cmp(), const Container& con = Container())  //如果没有提供我就给出默认的
//			:_con(con)
//			, _cmp(cmp)
//			//进行初始化
//		{
//			//为了调高效率，我们给出类类型的引用
//		}
//
//		//当然我们也可以按照区间的方式来进行构造
//		template<class Iterator>
//		priority_queue(Iterator first, Iterator last, const Cmp& cmp = Cmp(), const Container& con = Container())
//			:_con(con)
//			,_cmp(cmp)
//		{
//			//然后我们现在要把数据插入优先级队列里面去
//			//直接使用vector中对于一块连续空间的插入的方式
//			_con.insert(_con.begin(), _con.end());
//
//			//然后接下来需要对con的元素进行调整，让它满足堆的特性
//			//然后我们现在需要进向下的调整
//			int root = (_con.size() - 2 )>> 1;
//			for (; root >= 0; root--)
//			{
//				_AdjustDown(root);
//			}
//		}
//
//		void push(const T& data)
//		{
//			_con.push_back(data);
//			_AdjustUp(_con.size() - 1);
//		}
//
//		void pop()
//		{
//			if (empty())
//			{
//				return;
//			}
//			swap(_con[0], _con[_con.size() - 1]);
//			_con.pop_back();
//			_AdjustDown(0);
//		}
//
//
//		const T& top()const
//		{
//			return _con[0];
//		}
//
//		size_t size()const
//		{
//			return _con.size();
//		}
//
//		bool empty()
//		{
//			return _con.empty();
//		}
//
//		//既然container现在已经是一种类型了，那么我们就可以利用这种类型去创建容器了
//		//这个容器就是来存储优先级队列里面的元素的
//	private:
//		void _AdjustDown(int parent)
//		{
//			//child来标记两个孩子中较大的那一个
//			int child = parent * 2 + 1;
//			while (child<_con.size())
//			{
//				if (child + 1 < _con.size() && _cmp(_con[child + 1] , _con[child]))
//				{
//					child += 1;
//				}
//				if (_cmp(_con[child] , _con[parent]))
//				{
//					swap(_con[child], _con[parent]);
//					parent = child;
//					child = parent * 2 + 1;
//				}
//				else
//					return;
//			}
//		}
//
//		void _AdjustUp(int child)
//		{
//			//child来标记两个孩子中较大的那一个
//			int parent = (child - 1) >> 1;
//			while (child)
//			{
//				if (_cmp(_con[child] , _con[parent]))
//				{
//					swap(_con[child], _con[parent]);
//					child = parent;
//					parent = (child - 1) >> 1;
//				}
//				else
//					return;
//			}
//		}
//	private:
//		Container _con;
//		//然后我们再给出要给比较器的方法出来就可了
//		Cmp _cmp;
//	};
//}