//#pragma once 
//
//#include<vector>
//#include<functional>
//
//namespace bite  //��ֹ����׼���е����ȼ����з�����ͻ
//{
//	template<class T, class Container = std::vector<T>, class Cmp = std::less<T>>
//	class priority_queue
//	{
//	public:
//		priority_queue(const Cmp& cmp = Cmp(), const Container& con = Container())  //���û���ṩ�Ҿ͸���Ĭ�ϵ�
//			:_con(con)
//			, _cmp(cmp)
//			//���г�ʼ��
//		{
//			//Ϊ�˵���Ч�ʣ����Ǹ��������͵�����
//		}
//
//		//��Ȼ����Ҳ���԰�������ķ�ʽ�����й���
//		template<class Iterator>
//		priority_queue(Iterator first, Iterator last, const Cmp& cmp = Cmp(), const Container& con = Container())
//			:_con(con)
//			,_cmp(cmp)
//		{
//			//Ȼ����������Ҫ�����ݲ������ȼ���������ȥ
//			//ֱ��ʹ��vector�ж���һ�������ռ�Ĳ���ķ�ʽ
//			_con.insert(_con.begin(), _con.end());
//
//			//Ȼ���������Ҫ��con��Ԫ�ؽ��е�������������ѵ�����
//			//Ȼ������������Ҫ�����µĵ���
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
//		//��Ȼcontainer�����Ѿ���һ�������ˣ���ô���ǾͿ���������������ȥ����������
//		//��������������洢���ȼ����������Ԫ�ص�
//	private:
//		void _AdjustDown(int parent)
//		{
//			//child��������������нϴ����һ��
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
//			//child��������������нϴ����һ��
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
//		//Ȼ�������ٸ���Ҫ���Ƚ����ķ��������Ϳ���
//		Cmp _cmp;
//	};
//}