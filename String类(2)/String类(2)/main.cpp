#define _CRT_SECURE_NO_WARNINGS 1



//模拟实现string类
#include<iostream>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   //用C类型的字符串来对string类类型的对象来进行初始化
		//给出一个默认的参数相当于是兼具了没有参数的构造函数
		{
			if (nullptr == str)
			{
				//在这个位置，很多人可能有疑问
				//上面既然已经给出了一个模拟参数了，那么这个地方为什么还需要
				//进行是不是空的判断，关键在于
				//有些人在传递参数的时候，很有可能跟你传递一个nullptr过来
				//所以在这个位置需要判断一下字符串是不是空的
				//所以我们给出判空操作，如果我们判断传进来的字符串是空的字符串的话
				//那么，我们就去构造一个空的字符串就可以了
				_str = new char;

				//然后将\0放置到字符空间中
				//通过解引用放在那一部分空间里面
				*_str = '\0';

				//或者说上面的两句话，其实可以用下面的一句话来进行概括
				//_str = new char('\0');
			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}


	private:
		char* _str;
	};
}
int main()
{
	string s1;
	string s2("1111");	
	string s3(nullptr);

	return 0;
}


//模拟实现string类
#include<iostream>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   //用C类型的字符串来对string类类型的对象来进行初始化
		//给出一个默认的参数相当于是兼具了没有参数的构造函数
		{
			if (nullptr == str)
			{
				//在这个位置，很多人可能有疑问
				//上面既然已经给出了一个模拟参数了，那么这个地方为什么还需要
				//进行是不是空的判断，关键在于
				//有些人在传递参数的时候，很有可能跟你传递一个nullptr过来
				//所以在这个位置需要判断一下字符串是不是空的
				//所以我们给出判空操作，如果我们判断传进来的字符串是空的字符串的话
				//那么，我们就去构造一个空的字符串就可以了
				_str = new char[1];

				//然后将\0放置到字符空间中
				//通过解引用放在那一部分空间里面
				*_str = '\0';

				//或者说上面的两句话，其实可以用下面的一句话来进行概括
				//_str = new char('\0');
			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}


	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //我们先去构造一个空的字符串
	bite::string s2("hello");

}
int main()
{
	TestString();

	return 0;
}


//模拟实现string类
#include<iostream>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   //用C类型的字符串来对string类类型的对象来进行初始化
		//给出一个默认的参数相当于是兼具了没有参数的构造函数
		{
			if (nullptr == str)
			{
				//在这个位置，很多人可能有疑问
				//上面既然已经给出了一个模拟参数了，那么这个地方为什么还需要
				//进行是不是空的判断，关键在于
				//有些人在传递参数的时候，很有可能跟你传递一个nullptr过来
				//所以在这个位置需要判断一下字符串是不是空的
				//所以我们给出判空操作，如果我们判断传进来的字符串是空的字符串的话
				//那么，我们就去构造一个空的字符串就可以了
				_str = new char[1];

				//然后将\0放置到字符空间中
				//通过解引用放在那一部分空间里面
				*_str = '\0';

				//或者说上面的两句话，其实可以用下面的一句话来进行概括
				//_str = new char('\0');
			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		//下面的两个都是有问题的函数形式，都是会造成代码崩溃的
		//这个相当于是编译器所给出的拷贝构造函数的形式
		string(const string& s)
			:_str(s._str)
		{
			
		}

		//编译器所给出的赋值运算符的重载的形式
		string operator=(const string& s)
		{
			_str = s._str;
			return *this;
		}

	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //我们先去构造一个空的字符串
	bite::string s2("hello");
	//bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   //用C类型的字符串来对string类类型的对象来进行初始化
		//给出一个默认的参数相当于是兼具了没有参数的构造函数
		{
			if (nullptr == str)
			{
				//在这个位置，很多人可能有疑问
				//上面既然已经给出了一个模拟参数了，那么这个地方为什么还需要
				//进行是不是空的判断，关键在于
				//有些人在传递参数的时候，很有可能跟你传递一个nullptr过来
				//所以在这个位置需要判断一下字符串是不是空的
				//所以我们给出判空操作，如果我们判断传进来的字符串是空的字符串的话
				//那么，我们就去构造一个空的字符串就可以了
				_str = new char[1];

				//然后将\0放置到字符空间中
				//通过解引用放在那一部分空间里面
				*_str = '\0';

				//或者说上面的两句话，其实可以用下面的一句话来进行概括
				//_str = new char('\0');
			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(new char[strlen(s._str) + 1])
		{
			strcpy(_str, s._str);
		}

		string& operator=(const string& s)
		{
			//看一看是不是自己给自己赋值
			//如果是自己给自己赋值的话，其实就没什么必要了
			if (this != &s)
			{
				char* temp = new char[strlen(s._str) + 1];
				strcpy(temp, s._str);
				delete[] _str;
				_str = temp;
			}
			return *this;
		}
	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //我们先去构造一个空的字符串
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}



#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   //用C类型的字符串来对string类类型的对象来进行初始化
		//给出一个默认的参数相当于是兼具了没有参数的构造函数
		{
			if (nullptr == str)
			{
				//在这个位置，很多人可能有疑问
				//上面既然已经给出了一个模拟参数了，那么这个地方为什么还需要
				//进行是不是空的判断，关键在于
				//有些人在传递参数的时候，很有可能跟你传递一个nullptr过来
				//所以在这个位置需要判断一下字符串是不是空的
				//所以我们给出判空操作，如果我们判断传进来的字符串是空的字符串的话
				//那么，我们就去构造一个空的字符串就可以了
				_str = new char[1];

				//然后将\0放置到字符空间中
				//通过解引用放在那一部分空间里面
				*_str = '\0';

				//或者说上面的两句话，其实可以用下面的一句话来进行概括
				//_str = new char('\0');
			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
		}

		string& operator=(string s)
		{
			//看一看是不是自己给自己赋值
			//如果是自己给自己赋值的话，其实就没什么必要了
			swap(_str, s._str);
			return *this;
		}
	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //我们先去构造一个空的字符串
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
	public:
		//构造函数
		string(const char* str = "")   
		{
			if (nullptr == str)
			{
				_str = new char[1];
				*_str = '\0';

			}
			else
			{
				//多申请一个空间的目的在于存放\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//析构
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
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
				string strTemp(s);
				swap(_str, strTemp._str);
			}
			return *this;
		}

	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //我们先去构造一个空的字符串
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string类其实相当于是动态类型的字符顺序表
	class string
	{
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
				strcpy(temp, _str);
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

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);

		}

	private:
		char* _str;
		size_t _capacity;
		size_t _size;
	};
}
int main()
{
	return 0;
}