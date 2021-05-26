#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<string>
//#include<assert.h>
////模拟实现一个string类
//using namespace std;
//
//namespace bite
//{
//	class string
//	{
//		typedef char* iterator;
//	public:
//
//		//构造函数
//		string(const char* str="")
//		{
//			if (str == nullptr)
//				str = "";
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			//开辟空间
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		//析构函数
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//				_size = 0;
//				_capacity = 0;
//			}
//		}
//
//		//拷贝构造函数
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//赋值运算符重载
//		string& operator=(const string& s)
//		{
//			//首先需要进来判断一下是不是自己给自己赋值
//			if (this != &s)
//			{
//				string strTemp(s._str);
//				this->swap(strTemp);
//			}
//		}
//
//		size_t size()const
//		{
//			return _size;
//		}
//
//		size_t capacity()const
//		{
//			return _capacity;
//		}
//
//		bool empty()const
//		{
//			return 0 == _size;
//		}
//
//		//去写扩容的操作
//		//reverse方法
//		//给进来一个新的容量
//		void reverse(size_t newcapacity)
//		{
//			size_t oldcapacity = capacity();
//			if (newcapacity > oldcapacity)
//			{
//				//就需要去进行空间的申请的操作了
//				//申请空间
//				char* temp = new char[newcapacity + 1];
//				strncpy(temp, _str, _size);
//				delete[] _str;
//				_str = temp;
//				_capacity = newcapacity;
//			}
//		}
//
//		//resize---改变有效元素的个数
//		void resize(size_t newsize, char ch)
//		{
//			size_t oldsize = size();
//			if (newsize > oldsize)
//			{
//				if (newsize > capacity())
//				{
//					reverse(newsize);
//				}
//				memset(_str + _size, ch, newsize - oldsize);
//			}
//			_size = newsize;
//			_str[_size] = '\0';
//		}
//
//		void resize(size_t newsize)
//		{
//			//调用上面的方法
//			//多出来的空间用0进行填充
//			resize(newsize, 0);
//		}
//
//		void clear()
//		{
//			_size = 0;
//			*_str = '\0';
//		}
//
//		iterator begin()
//		{
//			return _str;
//		}
//
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		//下标引用操作符
//		char& operator[](size_t index)
//		{
//			assert(index < _size);
//			return _str[index];
//		}
//
//		const char& operator[](size_t index)const
//		{
//			assert(index < _size);
//			return _str[index];
//		}
//
//		void swap(string &s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	return 0;
//}


//vector


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	vector<int> v1;
//
//	vector<int> v2(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v3(v2);
//
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	
//	vector<int> v4(10, 5);
//
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v5{ 1,2,3,4,5,6 };
//
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //第二个参数如果没有传递，那么使用0来进行填充
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Date
//{
//public:
//	Date(int year=1, int month=1, int day=1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//
//	Date d(2021, 4, 2);
//
//	vector<Date> vd;
//
//	vd.resize(10, d);
//
//	vd.resize(20);
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector3()
//{
//	vector<int> v1;
//	v1.reserve(10);
//	//注意：改行代码会崩溃
//	//原因：reserve(10)只是将容量的大小扩大到10，并不会增加有效元素的个数
//	//现在v1中有效元素的个数仍然是0，那么你要去访问0号位置的代码是肯定会崩溃的
//	cout << v1[0] << endl;
//
//	vector<int> v2;
//	v2.resize(10);
//	//下面的这个代码是没有什么问题的
//	cout << v2[0] << endl;
//}
//int main()
//{
//	TestVector3();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector4()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << sz << endl;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector4();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//void TestVector4()
//{
//	vector<int> v;
//
//	v.reserve(100);
//
//	size_t sz = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << sz << endl;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector4();
//	return 0;
//}


//模拟实现string类

//#include<iostream>
//#include<string>
//using namespace std;
//namespace bite
//{
//	class string
//	{
//	public:
//		string(const char* str="")
//		{
//			if (str == nullptr)
//			{
//				_str = "";
//			}
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			_str = new char[strlen(str)+1];
//			strcpy(_str, str);
//			}
//
//		}
//
//		//拷贝构造
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			swap(_str, strTemp._str)
//		}
//
//		//赋值运算符的重载
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				//申请空间，拷贝元素，释放旧的空间
//				char* temp = new char[strlen(s._str) + 1];
//				strcpy(temp, s._str);
//				delete[] _str;
//				_str = temp;
//			}
//			return *this;
//		}
//
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	}
//};
//
////void TestString()
////{
////	bite::string s1;  //我们先去构造一个空的字符串
////	bite::string s2("hello");
////	bite::string s3(s2);
////
////	s1 = s2;
////}
////int main()
////{
////	TestString();
////
////	return 0;
////}



//#include<iostream>
//#include<string>
//
//namespace bite
//{
//	class string
//	{
//	public:
//		string(const char* str = "")
//		{
//			if (str == nullptr)
//				str = "";
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		//拷贝构造
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//赋值运算符重载
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				string strTemp(s._str);
//				this->swap(strTemp);
//			}
//			return *this;
//		}
//
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//				_size = 0;
//				_capacity = 0;
//			}
//		}
//
//		size_t size()const
//		{
//			return _size;
//		}
//
//		size_t capacity()const
//		{
//			return _capacity;
//		}
//
//		bool empty()const
//		{
//			return 0 == _size;
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	return 0;
//}


//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	vector<int> v1;
//
//	vector<int> v2(10, 5);
//
//	int arr[5] = { 1,2,3,4,5 };
//
//	vector<int> v3(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v4{ 8,8,8,8 };
//
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector5()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	//需求，在3所在的位置插入0
//	//vector中本身是没有提供find的方法的,那么我们只能使用标准库中的find方法了
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//当然，也可以插入一段连续的空间
//	vector<int> vv{ 11,22,33 };
//
//	v.insert(v.end(), vv.begin(), vv.end());
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector5();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector6()
//{
//	vector<int> v{ 1,2,3,4,5, };
//	v.erase(v.begin());
//
//	//相当于是从v.clear()
//	v.erase(v.begin(), v.end());
//}
//int main()
//{
//	TestVector6();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5 };
//
//	auto it = v.begin();
//
//	v.push_back(6);
//	v.push_back(7);
//
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector8()
//{
//	//矩阵:每行的元素个数都是相同的
//	//比如：5行6列的二维数组
//	vector<vector<int>> v1;
//
//	//二维数组总共有5行，现在每行还没有空间
//	v1.resize(5);
//
//	cout << v1[0].size() << endl;
//	cout << v1[0].capacity() << endl;
//
//	//经典的误用，如果像下面这样写代码的话，其实是会造成代码的崩溃的
//	//原因在于，v1[0]该vector还没有有效元素，所以无法访问0号位置的元素
//	//v1[0][0] = 10;
//
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		v1[i].resize(6);
//		for (size_t j = 0; j < v1[i].size(); ++j)
//		{
//			v1[i][j] = j + 1;
//		}
//	}
//}
//int main()
//{
//	TestVector8();
//	return 0;
//}


////vector的模拟实现
//#include<iostream>
//using namespace std;
//namespace bite
//{
//	template<class T>
//	class vector
//	{
//	public:
//		typedef T* iterator;
//
//		//给出构造函数
//		vector()
//			:start(nullptr)
//			,finish(nullptr)
//			,end_of_storage(nullptr)
//		{
//
//		}
//
//		vector(size_t n, const T& data = T())
//		{
//			start = new T[n];
//			for (int i = 0; i < n; i++)
//			{
//				start[i] = n;
//			}
//			finish = start + n;
//			end_of_storage = finish;
//		}
//
//		//给出一段连续空间的构造
//		template<class Iterator>
//		vector(Iterator first, Iterator last)
//		{
//			//首先计算出来这段空间中元素的个数
//			size_t size = 0;
//			auto it = first;
//			while (it++ != last)
//			{
//				size++;
//			}
//			//开空间
//			start = new T[size];
//			finish = start;
//			while (first != last)
//			{
//				*finish++ = *first++;
//			}
//			end_of_storage = finish;
//		}
//
//		//拷贝构造
//		vector(const vector<T>& v)
//		{
//			//先去开辟空间
//			//这里的拷贝构造的方式其实就是按照深拷贝的方式所给出来的
//			//因为我给新的对象重新去new空间了，所以相当于是深拷贝的方式
//			start = new T[v.size()];
//			finish = start;
//			auto it = v.begin();
//			while (it != v.end())
//			{
//				//空间开辟好了之后，我只需要把v里面的元素一个一个放进去其实就好了
//				*finish++ = *it++;
//			}
//			end_of_storage = finish;
//		}
//
//
//
//	private:
//		iterator start;
//		iterator finish;
//		iterator end_of_storage;
//
//	};
//}


//#include<iostream>
//using namespace std;
//
//void TestFunc1()
//{
//	throw 1;
//}
//
//bool TestFunc2()
//{
//	return false;
//}
//
////但是如果像下面这样，出现了一场情况，以及代码可能以前终止掉的情乱
////你都需要对开辟的内存空间以及打开的文件指针进行释放以及关闭的操作
////那么其实重复的操作就干了太多次了
//void TestFunc()
//{
//	int* p = new int[10];
//	FILE* fp = fopen("666.txt", "rb");
//
//	if (nullptr == fp)
//	{
//		delete[] p;
//		return;
//	}
//
//	try
//	{
//		TestFunc1();
//	}
//	catch (...)
//	{
//		delete[] p;
//		fclose(fp);
//		return;
//	}
//
//	if (!TestFunc2())
//	{
//		delete[] p;
//		fclose(fp);
//		return;
//	}
//
//	delete[] p;
//	fclose(fp);
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr=nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		//只需要把地址返回会去就可以了
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		//只需要把地址返回会去就可以了
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		//然后去进行重载
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//	protected:
//		T* _ptr;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> sp1(new int);
//
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
//
//}
//
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		auto_ptr(auto_ptr<T>& ap)
//		{
//			_ptr = ap._ptr;
//			//因为ap里面的东西不再使用了，所以直接把ap的资源给成nullptr其实就是可以的了
//			ap._ptr = nullptr;
//		}
//
//		auto_ptr<T>& operator=(auto_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				//如果即将要被赋值的东西他是有空间的， 那么你首先
//				//需要把他的空间释放掉，不然就会造成代码崩溃的问题产生
//				if(_ptr)
//					delete _ptr;
//				_ptr = sp._ptr;
//				sp._ptr = nullptr;
//			}
//			return *this;
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		//然后去进行重载
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//	protected:
//		T* _ptr;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> sp1(new int);
//
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
//
//	sp1 = sp2;
//
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_owner(false)   //之所以给成false是因为我现在并不
//			//知道上面的指针到底是有效的还是无效的
//		{
//			if (_ptr)
//				_owner = true;
//		}
//
//		auto_ptr(const auto_ptr<T>& ap)
//			:_ptr(ap._ptr)
//			,_owner(ap._owner)
//		{
//			ap._owner = false;
//		}
//
//		auto_ptr<T>& operator=(const auto_ptr<T>& ap)
//		{
//			if (this != &ap)
//			{
//				//如果即将要被赋值的东西他是有空间的， 那么你首先
//				//需要把他的空间释放掉，不然就会造成代码崩溃的问题产生
//				Release();
//				_ptr = ap._ptr;
//				_owner = ap._owner;
//				ap._owner = false;
//			}
//			return *this;
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr&&&_owner)
//			{
//				delete _ptr;
//			}
//		}
//
//		//然后去进行重载
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//	private:
//		void Release()
//		{
//			if (_ptr && _owner)
//			{
//				delete _ptr;
//			}
//		}
//
//	private:
//		T* _ptr;
//		mutable bool _owner;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> ap1(new int);
//
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> ap2(ap1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
//
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//#include<memory>
//
//using namespace std;
//
//namespace bite
//{
//	template<class T>
//	class unique_ptr
//	{
//	public:
//		unique_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		~unique_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		//现在我让其防止拷贝
//		//C++98中所给出的解决方式其实就是
//	//private:
//		//unique_ptr(const unique_ptr<T>&);
//	    //unique_ptr<T>& operator=(const unique_ptr<T>&);
//
//
//	    //C++11
//		unique_ptr(const unique_ptr<T>&)=delete;
//		unique_ptr<T>& operator=(const unique_ptr<T>&)= delete;
//	private:
//		T* _ptr;
//	};
//}
//
//int main()
//{
//	bite::unique_ptr<int> up1(new int);
//	bite::unique_ptr<int> up2(up1);
//
//	return 0;
//
//}


//#include<iostream>
//#include<memory>
//using namespace std;
//
//
//namespace bite
//{
//	template<class T>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			if(_ptr)
//				++(*_pCount);
//		}
//
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
//				if (_ptr)
//				{
//					++(*_pCount);
//				}
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			if (_ptr && 0 == --(*_pCount))
//			{
//				delete _ptr;
//				delete _pCount;
//			}
//		}
//	private:
//		T* _ptr;
//		int* _pCount;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int> sp1(new int);
//	bite::shared_ptr<int> sp2(sp1);
//
//	bite::shared_ptr<int> sp3(new int);
//	bite::shared_ptr<int> sp4(sp3);
//
//	sp4 = sp1;
//
//
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<memory>
//using namespace std;
//
//template<class T>
//class DFDel
//{
//public:
//	void operator()(T* p)
//	{
//		delete p;
//		p = nullptr;
//	}
//};
//
//template<class T>
//class Free
//{
//public:
//	void operator()(T* p)
//	{
//		if (p)
//		{
//			free(p);
//			p = nullptr;
//		}
//	}
//};
//
//class FClose
//{
//public:
//	void operator()(FILE* p)
//	{
//		if (p)
//		{
//			fclose(p);
//			p = nullptr;
//		}
//	}
//};
//
//
//namespace bite
//{
//	template<class T,class DF= DFDel<T>>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			if(_ptr)
//				++(*_pCount);
//		}
//
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
//				if (_ptr)
//				{
//					++(*_pCount);
//				}
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			if (_ptr && 0 == --(*_pCount))
//			{
//				//delete _ptr;
//
//				//DF是一个类型
//				//DF()是创建一个无名的对象
//				DF()(_ptr);
//				delete _pCount;
//			}
//		}
//	private:
//		T* _ptr;
//		int* _pCount;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int,Free<int>> sp1((int*)malloc(sizeof(int)));
//	bite::shared_ptr<FILE,FClose> sp2(fopen("666.txt","rb"));
//
//	//下面的这种写法其实是不ok的，因为在C++11中的智能指针其实都是不能管理连续的空间的
//	//原因在于因为在标准库里面其实已经有了一个可以管理连续空间的东西
//	//其实就是vector
//	//bite::shared_ptr<int> sp3(new int[10]);
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<memory>
//#include<mutex>
//using namespace std;
//
//template<class T>
//class DFDel
//{
//public:
//	void operator()(T* p)
//	{
//		delete p;
//		p = nullptr;
//	}
//};
//
//template<class T>
//class Free
//{
//public:
//	void operator()(T* p)
//	{
//		if (p)
//		{
//			free(p);
//			p = nullptr;
//		}
//	}
//};
//
//class FClose
//{
//public:
//	void operator()(FILE* p)
//	{
//		if (p)
//		{
//			fclose(p);
//			p = nullptr;
//		}
//	}
//};
//
//
//namespace bite
//{
//	template<class T,class DF= DFDel<T>>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//			,_pMutex(new mutex)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			AddRefCount();
//		}
//
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
//				AddRefCount();
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			//上锁
//			_pMutex->lock();
//			if (_ptr && 0 == --(*_pCount))
//			{
//				//delete _ptr;
//
//				//DF是一个类型
//				//DF()是创建一个无名的对象
//				DF()(_ptr);
//				delete _pCount;
//			}
//			//解锁
//			//如果离开的时候不进行解锁的话，那么就会造成死锁了
//			_pMutex->unlock();
//		}
//
//		void AddRefCount()
//		{
//			_pMutex->lock();
//			if (_ptr)
//				++(*_pCount);
//			_pMutex->unlock();
//
//		}
//
//	private:
//		T* _ptr;
//		int* _pCount;
//		mutex* _pMutex;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int,Free<int>> sp1((int*)malloc(sizeof(int)));
//	bite::shared_ptr<FILE,FClose> sp2(fopen("666.txt","rb"));
//
//	//下面的这种写法其实是不ok的，因为在C++11中的智能指针其实都是不能管理连续的空间的
//	//原因在于因为在标准库里面其实已经有了一个可以管理连续空间的东西
//	//其实就是vector
//	//bite::shared_ptr<int> sp3(new int[10]);
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
////基类
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//
//private:
//	int _pri;
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
//
////保护继承基类
//class Derived :protected Base
//{
//public:
//	void TestDerived()
//	{
//		_pub = 100;
//		_pro = 200;
//	}
//public:
//	int _pubD;
//};
//
//class B :public Derived
//{
//	void Test()
//	{
//		_pub = 100;
//	}
//};
//
//int main()
//{
//	cout << sizeof(Derived) << endl;
//
//	//子类的对象
//	Derived d;
//
//	//保护继承的方式公有的成员变量也无法在类外进行访问的操作了
//	//d._pub = 1000;
//
//	return 0;
//
//}


