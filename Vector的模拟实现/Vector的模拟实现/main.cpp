#define _CRT_SECURE_NO_WARNINGS 1



#pragma once 

namespace bite
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
	public:
		vector()
			//把三个变量一开始都给成空
			:start(nullptr)
			, finish(nullptr)
			, iterator end_of_storage(nullptr)
		{
			//我们在这个位置给出一个空的构造的的方法
			//包括底层的空间我们也是没有给出的
		}
		vector(size_t n, const T& data = T())
		{
			//这个方法其实就是相当于提供了给出n个元素的构造的方法
			//但是这里需要主义的一个点就是，如果这个T是内置类型的
			//所有的元素，如果用户没有给出的话，那么他的值，其实就相当于是0
			//如果是自定义类型的话，那么我们这个类必须要有无参的构造函数或者
			//说是全缺省的构造函数，如果没有提供的话，那么代码肯定就是会发生报错的
			start = new T[n];
			for (size_t i = 0; i < n; i++)
			{
				start[i] = data;
			}

			finish = start + n;
			end_of_storage = finish;
		}

		template<class Iterator, class Iterator>
		vector(Iterator first, Iterator last)
		{
			//这个方法其实就是相当于我们给出叾一段区间的构造
			//也就是说，用我们所给出的这段区间去对vector进行构造的操作
			//参数一般给的是迭代器，那么真正的迭代器类型到底是什么，我们其实是不知道的
			//所以在这个方法之前我们给出了模板参数列表
			//给出的迭代器
			//首先需要去计算一个这个区间中有多少元素，在计算出来之后，方便我去开辟空间
			size_t size = 0;
			auto it = first;
			while (it != last)
			{
				++size;   //然后元素个数就算是算出来了
			}
			//先去进行空间的开辟
			//然后一个一个去进行赋值的操作
			start = new T[size];
			finish = start;
			while (first != last)
			{
				*finish++ = *first++;
			}
			end_of_storage = finish;
		}

		//给出拷贝构造
		vector(const vector<T>& v)
		{
			//先去开辟空间
			//这里的拷贝构造的方式其实就是按照深拷贝的方式所给出来的
			//因为我给新的对象重新去new空间了，所以相当于是深拷贝的方式
			start = new T[v.size()];
			finish = start;
			auto it = v.begin();
			while (it != v.end())
			{
				//空间开辟好了之后，我只需要把v里面的元素一个一个放进去其实就好了
				*finish++ = *it++;
			}
			end_of_storage = finish;
		}

		//给出赋值运算符的重载
		//vector<T>& operator=(const vector<T>& v);

		//析构方法
		~vector()
		{
			//进来之后先看一下start有没有指向空间
			if (start)
				delete[] start;
			start = finish = end_of_storage = nullptr;
		}

		//给出迭代器的操作
		iterator begin()
		{
			return start;
		}

		iterator end()
		{
			return finish;
		}

		//容量相关的操作
		size_t size()const
		{
			return finish - start;
		}

		size_t capacity()const
		{
			return end_of_storage - start;
		}

		bool empty()const
		{
			//去看start和finish在不在一个位置，如果在一个位置的话，那么就表示他是空的了
			return start == finish;
		}

		void resize(size_t newsize, const T& data = T())
		{
			//第二个参数的意思就是如果用户没有提供值去初始化的话
			//那么就利用我们所给出的默认值去进行初始化的操作

			//现在先去求一下oldsize，也就是去看一下旧的元素的个数有多少个
			size_t oldsize = size();
			if (newsize <= oldsize)
			{
				//将元素减少到newsize就可以了
				finish = start + newsize;
				//然后就将元素的个数变成newsize个了
			}
			else
			{
				//将元素个数增加到newsize个，那么既然是增加元素的话
				//那么，很可能就会去进行扩容的操作
				if (newsize > capacity())
				{
					reserve(newsize); //扩容到newsize个大小就可以了
				}
				//然后接下来去填充元素
				for (size_t i = oldsize; i < newsize; i++)
				{
					*finish++ = *data;
				}
			}
		}

		void reserve(size_t newcapacity)
		{
			size_t oldCapacity = capacity();
			//是用来进行扩容的操作
			if (newsize > oldCapacity)
			{
				//申请空间
				//一般来说我们再去更改空间的代下的时候，linux下stl是按照两倍的
				//方式去进行扩容的，vs下是按照1.5的方式去进行扩容的操作的
				//但是那种情况是属于在边插入元素的同时边去进行扩容的操作
				//现在的情况属于newsize的大小已经给出来了，就扩容到newsize
				//容量的大小就可以了
				T* temp = new T[newcapacity];
				//拷贝元素
				memcpy(temp, start, sizeof(T) * size());
				//释放旧的空间
				delete[] start;
				//使用新的空间
				start = temp;
				finish = start + size();
				end_of_storage = start + newcapacity;
			}
		}

		//元素访问的相关操作
		//下标运算符
		T& operator[](size_t index)
		{
			assert(index < size());
			retunr start[index];
		}

		const T& operator[](size_t index)const
		{
			assert(index < size());
			retunr start[index];
		}

		T& front()const
		{
			return *start;
		}

		const T& front()const
		{
			return *start;
		}

		T& back()const
		{
			return *(finish - 1);
		}

		const T& back()const
		{
			return *(finish - 1);
		}

		//modify
		//修改操作
		void push_back(const T& data)
		{
			//进行尾插的操作
			insert(end(), data);
		}

		void pop_back()
		{
			//进行尾删的操作
			erase(end() - 1);
		}

		//返回值返回的是新插入的元素的位置
		iterator insert(inerator pos, const T& data)
		{
			//如果要进行insert的话，那么我们首先需要去确保pos的有效性
			if (pos<start || pos>end)
			{
				return end(); // 代表插入失败了
			}
			//同时，当你在进行元素插入的时候，你还需要去底层检测一下
			//底层有没有空间，或者说，底层的空间够不够使用
			if (finish == end_of_storage)  //表明没有容量了
				reserve(2 * capacity());
			//需要将元素整体向后进行搬移，这个时候才可以将我们需要插入进去的元素成功的插入序列中
			auto cur = finish - 1;
			auto next = finish;
			while (cur > pos)
			{
				*next-- = *cur--;
			}
			*next = data;
			//插入元素完成之后，finish还要向后走一步
			finish++;
			return pos;
		}

		//erase方法的返回值时返回待删除元素下一个元素的位置
		iterator erase(inerator pos)
		{
			//任意位置的删除，其实就是将元素进行向前搬移的操作
			if (pos < start || pos >= finish)
				return finish;
			auto prev = pos;
			auto next = prev + 1;  //cur是需要搬移的第一个元素的位置
			//然后我们可以开始进行搬移的操作了
			while (cur < finish)
			{
				*prev++ = *cur++;
			}
			//因为元素的个数减少了一个
			--finish;
			return pos;
		}

		void clear()
		{
			finish = start;
		}
	private:
		iterator start; //空间的起始位置
		iterator finish;   //最后一个元素的下一个位置
		iterator end_of_storage;    //空间的末尾

	};
}