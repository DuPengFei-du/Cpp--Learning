#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
		friend ostream& operator<<(ostream& _cout, const bite::string& s);
	public:
		//是string类的迭代器
		typedef char* iterator;
	public:
		//构造函数
		string(const char* str = "")
		{
			if (str == nullptr)
			{
				str = "";
			}
			_size = strlen(str);
			//标准库中string类容量是没有算\0的空间的
			_capacity = _size < 15 ? 15 : strlen(str);
			//+1是因为要存放\0的空间的
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		string(const string& s, size_t pos, size_t n = npos)
		{
			size_t len = s.size();
			if (pos > len)
				pos = len;
			if (n > len - pos)
				n = len - pos;
			_str = new char[n + 1];
			strncpy(_str, s.c_str() + pos, n);
			_size = n;
			_capacity = n;
			_str[_size] = '\0';
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
				_capacity = 0;
				_size = 0;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			this->swap(strTemp);
		}

		//string& operator=(string s)
		//{
		//	//看一看是不是自己给自己赋值
		//	//如果是自己给自己赋值的话，其实就没什么必要了
		//	swap(_str, s._str);
		//	return *this;
		//}

		string& operator=(const string& s)
		{
			//一进来还是判断一下是不是自己给自己进行符指的操作
			if (this != &s)
			{
				string strTemp(s._str);
				this->swap(strTemp);
			}
			return *this;
		}


		///////////////////////////////////////////
		size_t size()const
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		bool empty()const
		{
			return 0 == _size;
		}

		void reserve(size_t newCapacity)
		{
			size_t oldCapacity = capacity();
			if (newCapacity > oldCapacity)
			{
				//只有大于的时候才会去进行扩容的操作，如果是小于
				//就忽略此次的扩容操作
				char* temp = new char[newCapacity + 1];
				strncpy(temp, _str, _size);
				delete[] _str;
				_str = temp;
				_capacity = newCapacity;
			}
		}

		void resize(size_t newsize, char ch)
		{
			/*
			size_t oldsize = size();
			if (newsize <= oldsize)
			{
				_size = newsize;
				_str[_size] = '\0';
			}
			else if (newsize < capacity())
			{
				//直接填充
				memset(_str+_size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			else
			{
				//先去开辟空间
				reserve(newsize);
				memset(_str + _size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			*/
			//但是上面的这种代码需要分情况去讨论，代码写起来其实有一些冗余
			//那么，其实我们是有更简洁的一种写法的，如下所示

			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize > capacity())
				{
					reserve(newsize);
				}
				memset(_str + _size, ch, newsize - oldsize);
			}
			_size = newsize;
			_str[_size] = '\0';
		}

		void resize(size_t newsize)
		{
			//调用上面的方法
			//多出来的空间用0进行填充
			resize(newsize, 0);
		}

		void clear()
		{
			_size = 0;
			*_str = '\0';
		}

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		//下标引用操作符
		char& operator[](size_t index)
		{
			assert(index < _size);
			return _str[index];
		}

		const char& operator[](size_t index)const
		{
			assert(index < _size);
			return _str[index];
		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(_size * 2);   //扩容到原先容量的2倍
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		string& operator+=(const char* s)
		{
			////首先计需要计算出来两个字符串拼接在一起需要多少内存空间
			//size_t leftsize = _size;
			//size_t rightsize = strlen(s);
			//char* temp = new char[leftsize + rightsize + 1];
			//strcpy(temp, _str);
			//strcpy(temp + leftsize, s);
			//delete[] _str;
			//_str = temp;
			//_size = leftsize + rightsize;
			//_capacity = _size;
			//return *this;

			//如果觉得上面的那种方法不好理解的话，可以使用下面的这种写法
			int len = strlen(s);
			reserve(_capacity + len);
			strcpy(_str + _size, s);
			_size += len;
			return* this;
		}

		//特殊操作

		//返回一个C语言格式的字符串
		const char* c_str()const
		{
			return _str;
		}

		size_t find(char ch, size_t pos)const
		{
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t rfind(char ch, size_t pos = npos)
		{
			for (int i = pos != npos ? pos : _size - 1; i >= 0; --i)
			{
				if (_str[i] == ch)
					return i;
			}
			return npos;
		}

		//从pos的位置开始截取n的字符构成一个新的字符串进行返回操作
		string substr(size_t pos = 0, size_t n = npos)const
		{
			//保证不越界
			if (pos > _size)
				pos = _size;
			if (n == _size - pos)
				n = _size - pos;
			return string(*this, pos, n);
		}

	private:
		char* _str;
		size_t _capacity;   //容量没有将\0的空间计算进去的，但是在底层开辟空间必须要预留出\0的位置
		size_t _size;

		static size_t npos;
	};

	ostream& operator<<(ostream& _cout, const bite::string& s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (s[i] == '\0')
				cout << ' ';
			else
				cout << s[i];
		}
		return _cout;
	}

	size_t string::npos = -1;
}



void TestBiteString1()
{
	bite::string s1("hello");
	bite::string s2(s1);

	for (auto e : s1)
		cout << e << " ";
	cout << endl;

	/*for (auto e : s2)
		cout << e << " ";
	cout << endl;*/

	//或者，对s2的话，可以换一种打印的方式

	//如果把上述中iterator的方法屏蔽掉的话，那么其实基于范围的for循环也就不能用了
	//原因在于对于自定义类型，基于范围的for循环实际上是转换为
	//begin和end来进行一系列的操作的
	//所以上面的基于范围的for循环和下面的iterator的方法实际上就是同一种方法
	auto it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
}
void TestBiteString2()
{
	bite::string s1("hello");
	s1.push_back(' ');
	s1.push_back('w');
	s1.push_back('o');
	s1.push_back('r');
	s1.push_back('l');
	s1.push_back('d');

	cout << s1 << endl;


	s1.resize(10, '!');
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.resize(20, '$');
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.resize(6);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.clear();
	if (s1.empty())
		cout << "空字符串" << endl;
	else
		cout << "非空字符串" << endl;
}

void TestBiteString3()
{
	bite::string s("2020,12,17.cpp");
	bite::string fix = s.substr(s.rfind('.') + 1);
	cout << fix;
}

int main()
{
	//TestBiteString1();

	//TestBiteString2();

	TestBiteString3();

	return 0;
}